#include "opencvscratch.h"
#include "QFileDialog"



OpenCVscratch::OpenCVscratch(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);




}

OpenCVscratch::~OpenCVscratch()
{

}

void OpenCVscratch::on_pushButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "D:\\6.Testdata\\Bilder",	tr("Image Files (*.png *.jpg *.jpeg *.bmp *.tif)"));

	img= cv::imread(fileName.toLatin1().data());
	cv::namedWindow("Original Image");
	cv::imshow("Original Image", img);


}

void OpenCVscratch::on_pushButton_2_clicked()
{
	salt(img,100);
	displayImage();
}


// **** Niclas test function for manipulating Image (variabel img) **** //

void OpenCVscratch::displayImage()
{
	cv::namedWindow("Output Image");
	cv::imshow("Output Image", img);

}


void OpenCVscratch::flipAndDisplay()
{
	cv::flip(img,img,1);
	cv::namedWindow("Output Image");
	cv::imshow("Output Image", img);

}

// 
void OpenCVscratch::displayInPixmap()
{
	cv::flip(img,img,1); // process the image
	// change color channel ordering
	cvtColor(img,img,cv::COLOR_BGR2RGB); // opencv2/opencv.hpp
	// Qt image
	QImage qtimg= QImage((const unsigned char*)(img.data), img.cols,img.rows,QImage::Format_RGB888);
	// display on label
	ui.label->setPixmap(QPixmap::fromImage(qtimg));
	// resize the label to fit the image
	ui.label->resize(ui.label->pixmap()->size());

}

void OpenCVscratch::salt(cv::Mat &image, int n) {
	for (int k=0; k<n; k++) {
		// rand() is the MFC random number generator
		// try qrand() with Qt
		int i= rand()%image.cols;
		int j= rand()%image.rows;
		if (image.channels() == 1) { // gray-level image
			image.at<uchar>(j,i)= 255;
		} else if (image.channels() == 3) { // color image
			image.at<cv::Vec3b>(j,i)[0]= 255;
			image.at<cv::Vec3b>(j,i)[1]= 255;
			image.at<cv::Vec3b>(j,i)[2]= 255;
		}
	}
}