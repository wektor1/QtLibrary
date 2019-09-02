#include "calculator.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTriger = false;
bool subTrigger = false;
bool showMem = false;
double memValue = 0.0;

Calculator::Calculator(QWidget* parent) : QMainWindow(parent) {
  ui.setupUi(this);

  ui.Display->setText(QString::number(calcVal));

  QPushButton* numButtons[10];
  for (int i = 0; i < 10; i++) {
    QString butName = "Button" + QString::number(i);
    numButtons[i] = Calculator::findChild<QPushButton*>(butName);
    connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
  }
  QPushButton* memButtons[3];
  memButtons[0] = Calculator::findChild<QPushButton*>("MemAdd");
  memButtons[1] = Calculator::findChild<QPushButton*>("MemClear");
  memButtons[2] = Calculator::findChild<QPushButton*>("MemGet");
  for (int i = 0; i < 3; i++) {
    connect(memButtons[i], SIGNAL(released()), this, SLOT(MemButtonPressed()));
  }

  connect(ui.Add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
  connect(ui.Subtract, SIGNAL(released()), this, SLOT(MathButtonPressed()));
  connect(ui.Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));
  connect(ui.Multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
  connect(ui.Equals, SIGNAL(released()), this, SLOT(EqualButton()));
  connect(ui.ChangeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
  connect(ui.Clear, SIGNAL(released()), this, SLOT(ClearButtonPressed()));
}

void Calculator::NumPressed() {
  QPushButton* button = (QPushButton*)sender();
  QString butVal = button->text();
  QString displayVal = ui.Display->text();
  if ((displayVal.toDouble() == 0) ||
      (displayVal.toDouble() == 0.0 || showMem == true)) {
    showMem = false;
    ui.Display->setText(butVal);
  } else {
    QString newVal = displayVal + butVal;
    double dblNewVal = newVal.toDouble();
    ui.Display->setText(QString::number(dblNewVal, 'g', 16));
  }
}

void Calculator::MathButtonPressed() {
  divTrigger = false;
  multTrigger = false;
  addTriger = false;
  subTrigger = false;
  QString displayVal = ui.Display->text();
  calcVal = displayVal.toDouble();
  QPushButton* button = (QPushButton*)sender();
  QString butVal = button->text();
  if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
    divTrigger = true;
  } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
    multTrigger = true;
  } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
    addTriger = true;
  } else {
    subTrigger = true;
  }
  ui.Display->setText("");
}

void Calculator::EqualButton() {
  double solution = 0.0;
  QString displayVal = ui.Display->text();
  double dblDisplayVal = displayVal.toDouble();
  if (addTriger || subTrigger || multTrigger || divTrigger) {
    if (addTriger) {
      solution = calcVal + dblDisplayVal;
    } else if (subTrigger) {
      solution = calcVal - dblDisplayVal;
    } else if (multTrigger) {
      solution = calcVal * dblDisplayVal;
    } else {
      solution = calcVal / dblDisplayVal;
    }
  }
  ui.Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign() {
  QString displayVal = ui.Display->text();
  QRegExp reg("[-]?[0-9.]*");
  if (reg.exactMatch(displayVal)) {
    double dblDisplayVal = displayVal.toDouble();
    double dblDisplayValSign = -1 * dblDisplayVal;
    ui.Display->setText(QString::number(dblDisplayValSign));
  }
}

void Calculator::ClearButtonPressed() {
  divTrigger = false;
  multTrigger = false;
  addTriger = false;
  subTrigger = false;
  calcVal = 0.0;
  ui.Display->setText(QString::number(calcVal));
}

void Calculator::MemButtonPressed() {
  QString displayVal = ui.Display->text();
  double dblDisplayVal = displayVal.toDouble();
  QPushButton* button = (QPushButton*)sender();
  QString butVal = button->text();
  if (QString::compare(butVal, "M", Qt::CaseInsensitive) == 0) {
    ui.Display->setText(QString::number(memValue));
    showMem = true;
  } else if (QString::compare(butVal, "M+", Qt::CaseInsensitive) == 0) {
    memValue += dblDisplayVal;
  } else {
    memValue = 0.0;
  }
}
