#pragma once
#include <QObject>
#include <QTcpSocket>
#include <QString>
#include <QThread>

class xpsClient : public QObject {
	Q_OBJECT

public:

	//Constructor/Destructor
	xpsClient(QObject * parent = Q_NULLPTR);
	~xpsClient();

	//Socket Connect/Disconnect
	void xpsQ8_Connect(quint16 timeout);
	void xpsq8_Disconnect();
	void xpsQ8_SetLoginInfo(QString xpsIpAddress,
		quint16 xpsPort,
		QString  xpsLogin,
		QString xpsPassword);
	bool xpsQ8_isConnected();
	enum xpsActions
	{
		groupInitialize,
		groupKill,
		groupHomeSearch,
		groupMotionEnable,
		groupMotionDisable,
		groupMoveAbort,
		groupStatusGet,
		groupMoveAbsolute,
		groupMoveRelative
	};
	struct socketException { QString errorString; };

	QString xpsQ8_writeAndQuery(QByteArray message, qint16 writeTimeout, qint16 readTimeout);
	QStringList xpsQ8_getGroupNames();
	QString xpsQ8_getCurrentStagePosition(QString positionerName);
	QString xpsQ8_getStageStatusString(QString groupName);



signals:
	void emitString(QString string);

private:
	//logininfo
	QString xpsIpAddress;
	QString  xpsLogin;
	QString xpsPassword;
	quint16 xpsPort;

	//Socket Connect/Disconnect
	QTcpSocket *tcpSocket;
	QAbstractSocket::SocketState socketState;

	//Socket Read/Write
	QString xpsQ8_readBytes(QByteArray *dataBuffer, quint16 bufferSize, qint16 timeout);
	bool xpsQ8_writeBytes(QByteArray byteArray, qint16 timeout);
	qint16 const SOCKET_TIMEOUT = 5000; // in milliseconds
	quint16 const SMALL_BUFFER_SIZE = 1024; //bytes
	QByteArray const XPS_END_STRING = "EndOfAPI"; //XPS output termination string

	//Resource Retrieval
	void xpsQ8_getResourceNames();
	QList<QString> xpsGroups;
	QList<QString> xpsPositioners;
	QList<QString> xpsGPIO;
	
};

class xpsWorker : public xpsClient
{
	Q_OBJECT
		QThread workerThread;

public slots:
	void xpsQ8_checkStagesStatusAndPositions(xpsClient *xpsClient = Q_NULLPTR);

signals:
	void xpsQ8_updateStagesStatusAndPositions(QList<QString> statusesAndPositions);
};
