#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "../Veri/veritabani.h"

#include "durakekleotobus.h"
#include "durakeklemetro.h"
#include "durakeklevapur.h"
#include "hatekleotobus.h"
#include "hateklemetro.h"
#include "hateklevapur.h"

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

void MainWindow::on_btnHtGrnt_clicked()
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

void MainWindow::on_btnDrkDzn_clicked()
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

void MainWindow::on_btnHtDzn_clicked()
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

void MainWindow::on_btnHak_clicked()
{

}
