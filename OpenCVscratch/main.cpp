#include "opencvscratch.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OpenCVscratch w;
	w.show();
	return a.exec();
}
