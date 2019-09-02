#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_calculator.h"

class Calculator : public QMainWindow {
  Q_OBJECT

 public:
  Calculator(QWidget* parent = Q_NULLPTR);

 private slots:
  void NumPressed();
  void MathButtonPressed();
  void EqualButton();
  void ChangeNumberSign();
  void ClearButtonPressed();
  void MemButtonPressed();

 private:
  Ui::CalculatorClass ui;
};
