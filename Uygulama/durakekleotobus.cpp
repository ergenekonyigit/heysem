#include "durakekleotobus.h"
#include "ui_durakekleotobus.h"
#include "../Veri/veritabani.h"

DurakEkleOtobus::DurakEkleOtobus(Otobus *otbs, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakEkleOtobus)
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

DurakEkleOtobus::~DurakEkleOtobus()
{
  delete ui;
}

bool DurakEkleOtobus::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void DurakEkleOtobus::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void DurakEkleOtobus::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->durakEkleOtobus(u_ptrOtobus);
    } else {
      VeriTabani::veriTabaniOku()->durakDuzenleOtobus(u_ptrOtobus);
    }
}
