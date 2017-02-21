#pragma once
#include <QWidget>
#include "ui_stagepanel.h"
#include "xpsclient.hpp"

class stagePanel : public QWidget {
	Q_OBJECT

public:
	stagePanel(QWidget * parent = Q_NULLPTR, xpsClient *xpsClient = Q_NULLPTR);
	~stagePanel();

private:
	Ui::stagePanel *ui;
	xpsClient *_xpsClient;

};
