#include "hateklemetro.h"
#include "ui_hateklemetro.h"
#include "../Veri/veritabani.h"

HatEkleMetro::HatEkleMetro(Metro *mtr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatEkleMetro)
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

HatEkleMetro::~HatEkleMetro()
{
  delete ui;
}

bool HatEkleMetro::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void HatEkleMetro::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void HatEkleMetro::on_pshEkle_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->hatEkleMetro(u_ptrMetro);
    } else {
      VeriTabani::veriTabaniOku()->hatDuzenleMetro(u_ptrMetro);
    }
}

void HatEkleMetro::on_pshIpt_clicked()
{
    QDialog::reject();
}
