#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mainWindow w;
	w.show();
	return a.exec();
}
