#include "hatduzmetro.h"
#include "ui_hatduzmetro.h"
#include "../Veri/veritabani.h"

HatDuzMetro::HatDuzMetro(Metro *mtr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatDuzMetro)
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

HatDuzMetro::~HatDuzMetro()
{
  delete ui;
}

bool HatDuzMetro::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void HatDuzMetro::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void HatDuzMetro::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->hatEkleMetro(u_ptrMetro);
    } else {
      VeriTabani::veriTabaniOku()->hatDuzenleMetro(u_ptrMetro);
    }
}

void HatDuzMetro::on_pshIpt_clicked()
{
    QDialog::reject();
}
