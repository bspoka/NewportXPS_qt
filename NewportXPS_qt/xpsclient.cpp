#include "xpsclient.hpp"
#include <string>
#include <QTest>
#include <QList>
#include <QByteArray>
#include <QTime>
////////////////////////Constructors/////////////////////////////////
//base Constructor
xpsClient::xpsClient(QObject * parent) : QObject(parent), 
tcpSocket(new QTcpSocket(this))
{
}
xpsClient::~xpsClient() { delete tcpSocket; }
////////////////////////////////////////////////////////////////////////

//Attempts Host Connection and waits 
void xpsClient::xpsQ8_Connect(quint16 timeout)
{	
	//disconnect if already connected
	if (tcpSocket->state() == QTcpSocket::ConnectedState) {
		xpsq8_Disconnect();
	}

	//attempt new connection
		tcpSocket->connectToHost(xpsIpAddress, xpsPort, QIODevice::ReadWrite, QTcpSocket::IPv4Protocol);
		if (tcpSocket->waitForConnected(timeout))
		{
			emit emitString("xpsClient::xpsQ8_Connect -- Connection Success!");
			xpsQ8_getResourceNames(); //only retrieve resurces of connected
		}
		else
			throw socketException{ "xpsClient::xpsQ8_Connect -- Connection Unsuccesfull" };
}

//Retrieves the names of xps groups, positioners and GPIO objects
void xpsClient::xpsQ8_getResourceNames()
{
	if (tcpSocket->state() == QTcpSocket::ConnectedState)
	{
		if (xpsQ8_writeBytes("ObjectsListGet(char[])", SOCKET_TIMEOUT))
		{
			QByteArray dataBuffer;
			if (xpsQ8_readBytes(&dataBuffer, SMALL_BUFFER_SIZE, SOCKET_TIMEOUT) == "0")
			{
				QString objectString = QString(dataBuffer).trimmed();
				char splitChar = ';';
				QList<QString> xpsObjects = objectString.split(splitChar, QString::SkipEmptyParts);
				QList<QString>::iterator iter;
				for (iter = xpsObjects.begin(); iter != xpsObjects.end(); ++iter)
				{
					if (iter->contains("Group")) {
						if (iter->contains(".Pos"))
							xpsPositioners.append(*iter);
						else
							xpsGroups.append(*iter);
					}
					else if (iter->contains("GPIO"))
						xpsGPIO.append(*iter);
				}
			}
			else
				emit emitString("xpsClient::xpsQ8_getResourceNames -- Error Reading from Buffer");
		}
		else 
			emit emitString("xpsClient::xpsQ8_getResourceNames -- Could not write to buffer");
	}
	else
		emit emitString("xpsClient::xpsQ8_getResourceNames -- TcpSocket not connected");
}

//Read bytes until "EndOfApi" is reached
QString xpsClient::xpsQ8_readBytes(QByteArray *dataBuffer, quint16 bufferSize, qint16 timeout)
{
	if (tcpSocket->waitForReadyRead(timeout))
	{
		while (!dataBuffer->contains(XPS_END_STRING) && (dataBuffer->size() < bufferSize))
		{
			dataBuffer->append(tcpSocket->readAll());
		}

		//Separate Error Code
		qint16 endOfErrorCodeIndex = dataBuffer->indexOf(",");
		QString errorCode = QString(dataBuffer->mid(0, endOfErrorCodeIndex));
		dataBuffer->remove(0, endOfErrorCodeIndex + 1);

		//Rest of return Message
		qint16 endOfApiIndex = dataBuffer->indexOf(XPS_END_STRING);
		dataBuffer->remove(endOfApiIndex - 1, XPS_END_STRING.length() + 1);

		return errorCode;
	}
	else
		throw socketException{ "xpsQ8_readBytes--No bytes received from host before timeout" };
}

//Returns true if at least one byte is succesfully written to socket before timeout
bool xpsClient::xpsQ8_writeBytes(QByteArray byteArray, qint16 timeout)
{
	tcpSocket->write(byteArray);
	return(tcpSocket->waitForBytesWritten(timeout));
}

void xpsClient::xpsq8_Disconnect()
{
	if(tcpSocket->state() == QTcpSocket::ConnectedState) 
		tcpSocket->disconnectFromHost();
}

//Set Login Info
void xpsClient::xpsQ8_SetLoginInfo(QString xpsIpAddress, quint16 xpsPort, QString xpsLogin, QString xpsPassword)
{
	this->xpsIpAddress = xpsIpAddress;
	this->xpsPort = xpsPort;
	this->xpsLogin = xpsLogin;
	this->xpsPassword = xpsPassword;
}

//Return socket connection status
bool xpsClient::xpsQ8_isConnected()
{
	return (tcpSocket->state() == QTcpSocket::ConnectedState);
}

//Writes a message to socket and waits for response
QString xpsClient::xpsQ8_writeAndQuery(QByteArray message, qint16 writeTimeout, qint16 readTimeout)
{
	xpsQ8_writeBytes(message, writeTimeout);
	QByteArray dataBuffer;
	xpsQ8_readBytes(&dataBuffer, SMALL_BUFFER_SIZE, readTimeout);
	return QString(dataBuffer);
}


//returns current position string
QString xpsClient::xpsQ8_getCurrentStagePosition(QString positionerName)
{
	QByteArray messg = "GroupPositionCurrentGet(";
	messg.append(positionerName);
	messg.append(",double*)");
	return (xpsQ8_writeAndQuery(messg, SOCKET_TIMEOUT, SOCKET_TIMEOUT));
}

//First gets the status integer value defined in the header and then gets the
//coresponding string
QString xpsClient::xpsQ8_getStageStatusString(QString groupName)
{
	QByteArray messg = "GroupStatusGet(";
	messg.append(groupName);
	messg.append(",int*)");
	QString status = (xpsQ8_writeAndQuery(messg, SOCKET_TIMEOUT, SOCKET_TIMEOUT));

    messg = "GroupStatusStringGet(";
	messg.append(status);
	messg.append(",char[])");

	return (xpsQ8_writeAndQuery(messg, SOCKET_TIMEOUT, SOCKET_TIMEOUT));
}


//-----------------------Getters--------------------------------
QStringList xpsClient::xpsQ8_getGroupNames()
{
	return QStringList(xpsGroups);
}



