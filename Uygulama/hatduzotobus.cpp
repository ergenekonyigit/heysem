#include "hatduzotobus.h"
#include "ui_hatduzotobus.h"
#include "../Veri/veritabani.h"

HatDuzOtobus::HatDuzOtobus(Otobus *otbs, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatDuzOtobus)
{
  ui->setupUi(this);

  u_ptrOtobus = otbs;
  u_bYeniKayitMi = true;

  if (u_ptrOtobus != NULL) {
      connect(ui->edtDurakID, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(durakIdAta(QString)));
      connect(ui->edtHatID, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(hatIdAta(QString)));
      connect(ui->edtDurakAdi, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(durakAdiAta(QString)));
      connect(ui->edtHatAdi, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(hatAdiAta(QString)));
      connect(ui->edtSemtAdi, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(semtAdiAta(QString)));
      connect(this, SIGNAL(yeniKayitDegisti(bool)), ui->edtDurakAdi, SLOT(setEnabled(bool)));
    }
}

HatDuzOtobus::~HatDuzOtobus()
{
  delete ui;
}

bool HatDuzOtobus::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void HatDuzOtobus::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void HatDuzOtobus::on_pushButton_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->hatEkleOtobus(u_ptrOtobus);
    } else {
      VeriTabani::veriTabaniOku()->hatDuzenleOtobus(u_ptrOtobus);
    }
}

void HatDuzOtobus::on_pushButton_2_clicked()
{
    QDialog::reject();
}
