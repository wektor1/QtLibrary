#include "notepadapp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NotepadApp w;
	w.show();
	return a.exec();
}
