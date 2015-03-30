#include "opencvscratch.h"
#include "QFileDialog"
#include <opencv2/highgui/highgui.hpp>


OpenCVscratch::OpenCVscratch(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	cv::Mat img;


}

OpenCVscratch::~OpenCVscratch()
{

}

void OpenCVscratch::on_pushButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Open Image"), ".",
		tr("Image Files (*.png *.jpg *.jpeg *.bmp)"));


}
