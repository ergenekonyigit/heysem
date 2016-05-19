#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <durakekleotobus.h>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_btnDrkEkle_clicked();

  void on_btnHtEkle_clicked();

  void on_btnDrkGrnt_clicked();

  void on_btnHtGrnt_clicked();

  void on_btnDrkDzn_clicked();

  void on_btnHtDzn_clicked();

  void on_btnHak_clicked();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
