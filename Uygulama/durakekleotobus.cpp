#include "durakekleotobus.h"
#include "ui_durakekleotobus.h"

DurakEkleOtobus::DurakEkleOtobus(Otobus *otbs, QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::DurakEkleOtobus)
{
  ui->setupUi(this);

  u_ptrOtobus = otbs;

  if (u_ptrOtobus != NULL) {
      connect(ui->edtDurakAdi, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(durakAdiAta(QString)));
      connect(ui->edtHatAdi, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(hatAdiAta(QString)));
      connect(ui->edtSemtAdi, SIGNAL(textEdited(QString)), u_ptrOtobus, SLOT(semtAdiAta(QString)));
    }
}

DurakEkleOtobus::~DurakEkleOtobus()
{
  delete ui;
}
