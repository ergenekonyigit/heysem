#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

  void on_actionCikis_triggered();

  void on_actionOtobus_Duragi_Ekle_triggered();

  void on_actionMetro_Duragi_Ekle_triggered();

  void on_actionVapur_Duragi_Ekle_triggered();

  void on_actionOtobus_Hatti_Ekle_triggered();

  void on_actionMetro_Hatti_Ekle_triggered();

  void on_actionVapur_Hatti_Ekle_triggered();

  void on_actionOtob_s_Dura_G_r_nt_le_triggered();

  void on_actionMetro_Dura_G_r_nt_le_triggered();

  void on_actionVapur_Dura_G_r_nt_le_triggered();

  void on_actionOtob_s_Hatt_G_r_nt_le_triggered();

  void on_actionMetro_Hatt_G_r_nt_le_triggered();

  void on_actionVapur_Hatt_G_r_nt_le_triggered();

  void on_actionOtob_s_Dura_D_zenle_triggered();

  void on_actionMetro_Dura_D_zenle_triggered();

  void on_actionVapur_Dura_D_zenle_triggered();

  void on_actionOtob_s_Hatt_D_zenle_triggered();

  void on_actionMetro_Hatt_D_zenle_triggered();

  void on_actionVapur_Hatt_D_zenle_triggered();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
