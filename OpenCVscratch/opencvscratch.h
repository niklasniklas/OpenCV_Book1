#ifndef OPENCVSCRATCH_H
#define OPENCVSCRATCH_H

#include <QtWidgets/QMainWindow>
#include "ui_opencvscratch.h"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

class OpenCVscratch : public QMainWindow
{
	Q_OBJECT

public:
	OpenCVscratch(QWidget *parent = 0);
	~OpenCVscratch();

private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
	Ui::OpenCVscratchClass ui;
	cv::Mat img;

private: // **** Niclas functions
	void displayImage();
	void flipAndDisplay();
	void displayInPixmap();
	void salt(cv::Mat &image, int n);




};

#endif // OPENCVSCRATCH_H
