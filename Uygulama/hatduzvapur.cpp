#include "hatduzvapur.h"
#include "ui_hatduzvapur.h"
#include "../Veri/veritabani.h"

HatDuzVapur::HatDuzVapur(Vapur *vpr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatDuzVapur)
{
  ui->setupUi(this);

  u_ptrVapur = vpr;
  u_bYeniKayitMi = true;

  if (u_ptrVapur != NULL) {
      connect(ui->edtDurakID, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(durakIdAta(QString)));
      connect(ui->edtHatID, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(hatIdAta(QString)));
      connect(ui->edtDurakAdi, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(durakAdiAta(QString)));
      connect(ui->edtHatAdi, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(hatAdiAta(QString)));
      connect(ui->edtSemtAdi, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(semtAdiAta(QString)));
      connect(this, SIGNAL(yeniKayitDegisti(bool)), ui->edtDurakAdi, SLOT(setEnabled(bool)));
    }
}

HatDuzVapur::~HatDuzVapur()
{
  delete ui;
}

bool HatDuzVapur::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void HatDuzVapur::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void HatDuzVapur::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->hatEkleVapur(u_ptrVapur);
    } else {
      VeriTabani::veriTabaniOku()->hatDuzenleVapur(u_ptrVapur);
    }
}

void HatDuzVapur::on_pshIpt_clicked()
{
    QDialog::reject();
}
