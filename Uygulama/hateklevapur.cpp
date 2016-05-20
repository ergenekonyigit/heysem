#include "hateklevapur.h"
#include "ui_hateklevapur.h"
#include "../Veri/veritabani.h"

HatEkleVapur::HatEkleVapur(Vapur *vpr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatEkleVapur)
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

HatEkleVapur::~HatEkleVapur()
{
  delete ui;
}

bool HatEkleVapur::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void HatEkleVapur::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void HatEkleVapur::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->hatEkleVapur(u_ptrVapur);
    } else {
      VeriTabani::veriTabaniOku()->hatDuzenleVapur(u_ptrVapur);
    }
}

void HatEkleVapur::on_pshIpt_clicked()
{
    QDialog::reject();
}
