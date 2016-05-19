#include "durakeklemetro.h"
#include "ui_durakeklemetro.h"
#include "../Veri/veritabani.h"

DurakEkleMetro::DurakEkleMetro(Metro *mtr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakEkleMetro)
{
  ui->setupUi(this);

  u_ptrMetro = mtr;
  u_bYeniKayitMi = true;

  if (u_ptrMetro != NULL) {
      connect(ui->edtDurakID, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(durakIdAta(QString)));
      connect(ui->edtHatID, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(hatIdAta(QString)));
      connect(ui->edtDurakAdi, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(durakAdiAta(QString)));
      connect(ui->edtHatAdi, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(hatAdiAta(QString)));
      connect(ui->edtSemtAdi, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(semtAdiAta(QString)));
      connect(this, SIGNAL(yeniKayitDegisti(bool)), ui->edtDurakAdi, SLOT(setEnabled(bool)));
    }
}

DurakEkleMetro::~DurakEkleMetro()
{
  delete ui;
}

bool DurakEkleMetro::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void DurakEkleMetro::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void DurakEkleMetro::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->durakEkleMetro(u_ptrMetro);
    } else {
      VeriTabani::veriTabaniOku()->durakDuzenleMetro(u_ptrMetro);
    }
}
