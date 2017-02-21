#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include "xpsclient.hpp"
#include <QList>
#include "stagepanel.hpp"

class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = 0);
	~mainWindow();
	void xpsmain_addStagePanel();

public slots:
void XPS_Connect();
void XPS_updateStatus(QString status);

private:
	Ui::mainWindowClass ui;
	xpsClient *xpsSocket;
	QList<stagePanel*> stagePanels;
};

#endif // MAINWINDOW_H
