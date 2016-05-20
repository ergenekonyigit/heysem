#include "durakduzvapur.h"
#include "ui_durakduzvapur.h"
#include "../Veri/veritabani.h"

DurakDuzVapur::DurakDuzVapur(Vapur *vpr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakDuzVapur)
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

DurakDuzVapur::~DurakDuzVapur()
{
  delete ui;
}

bool DurakDuzVapur::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void DurakDuzVapur::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void DurakDuzVapur::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->durakEkleVapur(u_ptrVapur);
    } else {
      VeriTabani::veriTabaniOku()->durakDuzenleVapur(u_ptrVapur);
    }
}

void DurakDuzVapur::on_pshIpt_clicked()
{
    QDialog::reject();
}
