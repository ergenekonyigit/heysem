#include "hatekleotobus.h"
#include "ui_hatekleotobus.h"
#include "../Veri/veritabani.h"

HatEkleOtobus::HatEkleOtobus(Otobus *otbs, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatEkleOtobus)
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

HatEkleOtobus::~HatEkleOtobus()
{
  delete ui;
}

bool HatEkleOtobus::yeniKayitMiOku() const
{
  return u_bYeniKayitMi;
}

void HatEkleOtobus::yeniKayitMiAta(bool value)
{
  u_bYeniKayitMi = value;
  yeniKayitDegisti(u_bYeniKayitMi);
}

void HatEkleOtobus::on_pushButton_clicked()
{
  if (u_bYeniKayitMi) {
      VeriTabani::veriTabaniOku()->hatEkleOtobus(u_ptrOtobus);
    } else {
      VeriTabani::veriTabaniOku()->hatDuzenleOtobus(u_ptrOtobus);
    }
}
