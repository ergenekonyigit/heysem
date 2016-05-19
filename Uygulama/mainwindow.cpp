#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_btnDrkEkle_clicked()
{
  if (ui->cmbDurakEkle->currentText() == "Otobüs") {
      //      Otobus *otbs = new Otobus(this);
      //      DurakEkleOtobus *form = new DurakEkleOtobus(otbs, this);
      //      form->yeniKayitMiAta(true);
      //      form->exec();
      //      delete form;
      ui->label->setText("otobus");
    } else if (ui->cmbDurakEkle->currentText() == "Metro") {
      ui->label->setText("metro");
    } else if (ui->cmbDurakEkle->currentText() == "Vapur") {
      ui->label->setText("vapur");
    }
}

void MainWindow::on_btnHtEkle_clicked()
{
  if (ui->cmbHatEkle->currentText() == "Otobüs") {

    } else if (ui->cmbHatEkle->currentText() == "Metro") {

    } else if (ui->cmbHatEkle->currentText() == "Vapur") {

    }
}

void MainWindow::on_btnDrkGrnt_clicked()
{
  if (ui->cmbDurakGor->currentText() == "Otobüs") {

    } else if (ui->cmbDurakGor->currentText() == "Metro") {

    } else if (ui->cmbDurakGor->currentText() == "Vapur") {

    }
}

void MainWindow::on_btnHtGrnt_clicked()
{
  if (ui->cmbHatGor->currentText() == "Otobüs") {

    } else if (ui->cmbHatGor->currentText() == "Metro") {

    } else if (ui->cmbHatGor->currentText() == "Vapur") {

    }
}

void MainWindow::on_btnDrkDzn_clicked()
{
  if (ui->cmbDurakDuz->currentText() == "Otobüs") {

    } else if (ui->cmbDurakDuz->currentText() == "Metro") {

    } else if (ui->cmbDurakDuz->currentText() == "Vapur") {

    }
}

void MainWindow::on_btnHtDzn_clicked()
{
  if (ui->cmbHatDuz->currentText() == "Otobüs") {

    } else if (ui->cmbHatDuz->currentText() == "Metro") {

    } else if (ui->cmbHatDuz->currentText() == "Vapur") {

    }
}

void MainWindow::on_btnHak_clicked()
{

}
