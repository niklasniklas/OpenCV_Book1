#include "opencvscratch.h"
#include <QtWidgets/QApplication>

// 2015-04-13
// Page: 40

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OpenCVscratch w;
	w.show();
	return a.exec();
}
