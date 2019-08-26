#pragma once

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QtWidgets/QMainWindow>

#include "ui_notepadapp.h"

class NotepadApp : public QMainWindow {
  Q_OBJECT

 public:
  NotepadApp(QWidget* parent = Q_NULLPTR);

 private slots:
  void on_actionNew_triggered();
  void on_actionOpen_triggered();
  void on_actionSave_as_triggered();
  void on_actionExit_triggered();
  void on_actionCopy_triggered();
  void on_actionPaste_triggered();
  void on_actionCut_triggered();
  void on_actionUndo_triggered();
  void on_actionRedo_triggered();

 private:
  Ui::NotepadAppClass ui;
  QString m_current_file = "";
};
