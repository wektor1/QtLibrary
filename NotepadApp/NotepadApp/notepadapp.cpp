#include "notepadapp.h"

NotepadApp::NotepadApp(QWidget* parent) : QMainWindow(parent) {
  ui.setupUi(this);
  this->setCentralWidget(ui.textEdit);
}

void NotepadApp::on_actionNew_triggered() {
  m_current_file.clear();
  ui.textEdit->setText(QString());
}

void NotepadApp::on_actionOpen_triggered() {
  QString filename = QFileDialog::getOpenFileName(this, "Open the file");
  QFile file(filename);
  m_current_file = filename;
  if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
    QMessageBox::warning(this, "Warrning",
                         "Cannot open file: " + file.errorString());
    return;
  }
  setWindowTitle(filename);
  QTextStream in(&file);
  QString text = in.readAll();
  ui.textEdit->setText(text);
  file.close();
}

void NotepadApp::on_actionSave_as_triggered() {
  QString filename = QFileDialog::getSaveFileName(this, "Save as");
  QFile file(filename);
  if (!file.open(QFile::WriteOnly | QFile::Text)) {
    QMessageBox::warning(this, "Warnning",
                         "Cannot save file: " + file.errorString());
    return;
  }
  m_current_file = filename;
  setWindowTitle(filename);
  QTextStream out(&file);
  QString text = ui.textEdit->toPlainText();
  out << text;
  file.close();
}

void NotepadApp::on_actionExit_triggered() {
  QApplication::quit();
}

void NotepadApp::on_actionCopy_triggered() {
  ui.textEdit->copy();
}

void NotepadApp::on_actionPaste_triggered() {
  ui.textEdit->paste();
}

void NotepadApp::on_actionCut_triggered() {
  ui.textEdit->cut();
}

void NotepadApp::on_actionRedo_triggered() {
  ui.textEdit->redo();
}

void NotepadApp::on_actionUndo_triggered() {
  ui.textEdit->undo();
}
