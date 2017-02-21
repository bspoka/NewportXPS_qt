#include "mainwindow.h"
#include <QDebug>
#include <QString>
#include <Qtest>
#include "ui_stagepanel.h"
#include "stagepanel.hpp"
#include <QStyle>
#include <QStyleFactory>
#include <QThread>

//#include "xpsclient.hpp"

mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent), xpsSocket(new xpsClient(this))
{
	QApplication::setStyle(QStyleFactory::create("Fusion"));
	ui.setupUi(this);
	ui.addStagePanel->setDisabled(true);
	connect(ui.connecttoxps, &QPushButton::clicked, this, &mainWindow::XPS_Connect);
	connect(this->xpsSocket, &xpsClient::emitString, this, &mainWindow::XPS_updateStatus);
	connect(ui.addStagePanel, &QPushButton::clicked, this, &mainWindow::xpsmain_addStagePanel);
}

mainWindow::~mainWindow()
{
	xpsSocket->xpsq8_Disconnect();
	delete xpsSocket;
}

//adds a configurable stage panel to the main window
void mainWindow::xpsmain_addStagePanel()
{
	stagePanel *newPanel = new stagePanel(this, xpsSocket);
	ui.stageLayout->addWidget(newPanel);
	stagePanels.append(newPanel);
}

void mainWindow::XPS_Connect() {

	QString user_ip = ui.xpsip->text();
	QString user_login = ui.xpslogin->text();
	QString user_pass = ui.xpspass->text();
	bool ok;
	quint16 user_port = (ui.xpsport->text()).toUShort(&ok, 10);

	xpsSocket->xpsQ8_SetLoginInfo(user_ip, user_port, user_login, user_pass);

	emit XPS_updateStatus("Connecting...");
	QTest::qWait(100);

	try{
		xpsSocket->xpsQ8_Connect(2000);
		ui.connecttoxps->setText("Reconnect");
		ui.addStagePanel->setDisabled(false);
		QString pos = xpsSocket->xpsQ8_getCurrentStagePosition("Group4.Pos");
		qDebug() << pos << xpsSocket->xpsQ8_getStageStatusString("Group4");
	}
	catch (xpsClient::socketException& e1) {
	XPS_updateStatus(e1.errorString);
	return;
	}

}

//XPS Status Update Slot
void mainWindow::XPS_updateStatus(QString status) {
	ui.xpsstatus->setText(status);
	qDebug() << status << endl;
}

