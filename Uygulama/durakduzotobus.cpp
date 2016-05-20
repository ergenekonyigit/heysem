#include "durakduzotobus.h"
#include "ui_durakduzotobus.h"
#include "../Veri/veritabani.h"

DurakDuzOtobus::DurakDuzOtobus(Otobus *otbs, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakDuzOtobus)
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

DurakDuzOtobus::~DurakDuzOtobus()
{
  delete ui;
}

bool DurakDuzOtobus::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void DurakDuzOtobus::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void DurakDuzOtobus::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->durakEkleOtobus(u_ptrOtobus);
    } else {
      VeriTabani::veriTabaniOku()->durakDuzenleOtobus(u_ptrOtobus);
    }
}

void DurakDuzOtobus::on_pshIpt_clicked()
{
    QDialog::reject();
}
