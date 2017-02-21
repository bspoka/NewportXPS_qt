#include "stagepanel.hpp"

stagePanel::stagePanel(QWidget * parent, xpsClient *xpsClient) : QWidget(parent), _xpsClient(xpsClient) {

	ui = new Ui::stagePanel;
	ui->setupUi(this);
	ui->xpsStageNames->addItems(_xpsClient->xpsQ8_getGroupNames());

}

stagePanel::~stagePanel() {
	
}
