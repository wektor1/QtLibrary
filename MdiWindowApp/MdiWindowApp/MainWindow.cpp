#include "MainWindow.h"

#include <QMdiArea>
#include <QMenuBar>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
  ui.setupUi(this);
  QMdiArea* mdiArea = new QMdiArea(this);
  QMenuBar* menuBar = new QMenuBar(this);
  this->setCentralWidget(mdiArea);
  this->setMenuBar(menuBar);
}
