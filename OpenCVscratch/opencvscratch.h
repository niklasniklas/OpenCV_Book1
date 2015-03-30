#ifndef OPENCVSCRATCH_H
#define OPENCVSCRATCH_H

#include <QtWidgets/QMainWindow>
#include "ui_opencvscratch.h"

class OpenCVscratch : public QMainWindow
{
	Q_OBJECT

public:
	OpenCVscratch(QWidget *parent = 0);
	~OpenCVscratch();

private slots:
	void on_pushButton_clicked();

private:
	Ui::OpenCVscratchClass ui;
};

#endif // OPENCVSCRATCH_H
