 #include "mainwindow.h"
#include "ui_mainwindow.h"

#include "../Veri/veritabani.h"

#include "durakekleotobus.h"
#include "durakeklemetro.h"
#include "durakeklevapur.h"
#include "hatekleotobus.h"
#include "hateklemetro.h"
#include "hateklevapur.h"

#include "durakduzotobus.h"
#include "durakduzmetro.h"
#include "durakduzvapur.h"
#include "hatduzotobus.h"
#include "hatduzmetro.h"
#include "hatduzvapur.h"

#include "durakgorotobus.h"
#include "durakgormetro.h"
#include "durakgorvapur.h"
#include "hatgorotobus.h"
#include "hatgormetro.h"
#include "hatgorvapur.h"

#include "hakkinda.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  VeriTabani::veriTabaniOku();
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_btnDrkEkle_clicked()
{
  if (ui->cmbDurakEkle->currentText() == "Otobüs") {
      Otobus *otbs = new Otobus(this);
      DurakEkleOtobus *form = new DurakEkleOtobus(otbs, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbDurakEkle->currentText() == "Metro") {
      Metro *mtr = new Metro(this);
      DurakEkleMetro *form = new DurakEkleMetro(mtr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbDurakEkle->currentText() == "Vapur") {
      Vapur *vpr = new Vapur(this);
      DurakEkleVapur *form = new DurakEkleVapur(vpr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    }
}

void MainWindow::on_btnHtEkle_clicked()
{
  if (ui->cmbHatEkle->currentText() == "Otobüs") {
      Otobus *otbs = new Otobus(this);
      HatEkleOtobus *form = new HatEkleOtobus(otbs, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbHatEkle->currentText() == "Metro") {
      Metro *mtr = new Metro(this);
      HatEkleMetro *form = new HatEkleMetro(mtr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbHatEkle->currentText() == "Vapur") {
      Vapur *vpr = new Vapur(this);
      HatEkleVapur *form = new HatEkleVapur(vpr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    }
}

void MainWindow::on_btnDrkGrnt_clicked()
{
  if (ui->cmbDurakGor->currentText() == "Otobüs") {
      Otobus *otbs = new Otobus(this);
      DurakGorOtobus *form = new DurakGorOtobus(otbs, this);
      form->exec();
      delete form;
    } else if (ui->cmbDurakGor->currentText() == "Metro") {
      Metro *mtr = new Metro(this);
      DurakGorMetro *form = new DurakGorMetro(mtr, this);
      form->exec();
      delete form;
    } else if (ui->cmbDurakGor->currentText() == "Vapur") {
      Vapur *vpr = new Vapur(this);
      DurakGorVapur *form = new DurakGorVapur(vpr, this);
      form->exec();
      delete form;
    }
}

void MainWindow::on_btnHtGrnt_clicked()
{
  if (ui->cmbHatGor->currentText() == "Otobüs") {
      Otobus *otbs = new Otobus(this);
      HatGorOtobus *form = new HatGorOtobus(otbs, this);
      form->exec();
      delete form;
    } else if (ui->cmbHatGor->currentText() == "Metro") {
      Metro *mtr = new Metro(this);
      HatGorMetro *form = new HatGorMetro(mtr, this);
      form->exec();
      delete form;
    } else if (ui->cmbHatGor->currentText() == "Vapur") {
      Vapur *vpr = new Vapur(this);
      HatEkleVapur *form = new HatEkleVapur(vpr, this);
      form->exec();
      delete form;
    }
}

void MainWindow::on_btnDrkDzn_clicked()
{
  if (ui->cmbDurakDuz->currentText() == "Otobüs") {
      Otobus *otbs = new Otobus(this);
      DurakDuzOtobus *form = new DurakDuzOtobus(otbs, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbDurakDuz->currentText() == "Metro") {
      Metro *mtr = new Metro(this);
      DurakDuzMetro *form = new DurakDuzMetro(mtr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbDurakDuz->currentText() == "Vapur") {
      Vapur *vpr = new Vapur(this);
      DurakDuzVapur *form = new DurakDuzVapur(vpr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    }
}

void MainWindow::on_btnHtDzn_clicked()
{
  if (ui->cmbHatDuz->currentText() == "Otobüs") {
      Otobus *otbs = new Otobus(this);
      HatDuzOtobus *form = new HatDuzOtobus(otbs, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbHatDuz->currentText() == "Metro") {
      Metro *mtr = new Metro(this);
      HatDuzMetro *form = new HatDuzMetro(mtr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    } else if (ui->cmbHatDuz->currentText() == "Vapur") {
      Vapur *vpr = new Vapur(this);
      HatDuzVapur *form = new HatDuzVapur(vpr, this);
      form->yeniKayitMiAta(true);
      form->exec();
      delete form;
    }
}

void MainWindow::on_btnHak_clicked()
{
  Hakkinda *hk = new Hakkinda(this);
  hk->exec();
}

void MainWindow::on_actionCikis_triggered()
{
  QApplication::quit();
}

void MainWindow::on_actionOtobus_Duragi_Ekle_triggered()
{
  Otobus *otbs = new Otobus(this);
  DurakEkleOtobus *form = new DurakEkleOtobus(otbs, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionMetro_Duragi_Ekle_triggered()
{
  Metro *mtr = new Metro(this);
  DurakEkleMetro *form = new DurakEkleMetro(mtr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionVapur_Duragi_Ekle_triggered()
{
  Vapur *vpr = new Vapur(this);
  DurakEkleVapur *form = new DurakEkleVapur(vpr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionOtobus_Hatti_Ekle_triggered()
{
  Otobus *otbs = new Otobus(this);
  HatEkleOtobus *form = new HatEkleOtobus(otbs, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionMetro_Hatti_Ekle_triggered()
{
  Metro *mtr = new Metro(this);
  HatEkleMetro *form = new HatEkleMetro(mtr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionVapur_Hatti_Ekle_triggered()
{
  Vapur *vpr = new Vapur(this);
  HatEkleVapur *form = new HatEkleVapur(vpr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionOtob_s_Dura_G_r_nt_le_triggered()
{
  Otobus *otbs = new Otobus(this);
  DurakGorOtobus *form = new DurakGorOtobus(otbs, this);
  form->exec();
  delete form;
}

void MainWindow::on_actionMetro_Dura_G_r_nt_le_triggered()
{
  Metro *mtr = new Metro(this);
  DurakGorMetro *form = new DurakGorMetro(mtr, this);
  form->exec();
  delete form;
}

void MainWindow::on_actionVapur_Dura_G_r_nt_le_triggered()
{
  Vapur *vpr = new Vapur(this);
  DurakGorVapur *form = new DurakGorVapur(vpr, this);
  form->exec();
  delete form;
}

void MainWindow::on_actionOtob_s_Hatt_G_r_nt_le_triggered()
{
  Otobus *otbs = new Otobus(this);
  HatGorOtobus *form = new HatGorOtobus(otbs, this);
  form->exec();
  delete form;
}

void MainWindow::on_actionMetro_Hatt_G_r_nt_le_triggered()
{
  Metro *mtr = new Metro(this);
  HatGorMetro *form = new HatGorMetro(mtr, this);
  form->exec();
  delete form;
}

void MainWindow::on_actionVapur_Hatt_G_r_nt_le_triggered()
{
  Vapur *vpr = new Vapur(this);
  HatEkleVapur *form = new HatEkleVapur(vpr, this);
  form->exec();
  delete form;
}

void MainWindow::on_actionOtob_s_Dura_D_zenle_triggered()
{
  Otobus *otbs = new Otobus(this);
  DurakDuzOtobus *form = new DurakDuzOtobus(otbs, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionMetro_Dura_D_zenle_triggered()
{
  Metro *mtr = new Metro(this);
  DurakDuzMetro *form = new DurakDuzMetro(mtr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionVapur_Dura_D_zenle_triggered()
{
  Vapur *vpr = new Vapur(this);
  DurakDuzVapur *form = new DurakDuzVapur(vpr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionOtob_s_Hatt_D_zenle_triggered()
{
  Otobus *otbs = new Otobus(this);
  HatDuzOtobus *form = new HatDuzOtobus(otbs, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionMetro_Hatt_D_zenle_triggered()
{
  Metro *mtr = new Metro(this);
  HatDuzMetro *form = new HatDuzMetro(mtr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}

void MainWindow::on_actionVapur_Hatt_D_zenle_triggered()
{
  Vapur *vpr = new Vapur(this);
  HatDuzVapur *form = new HatDuzVapur(vpr, this);
  form->yeniKayitMiAta(true);
  form->exec();
  delete form;
}




