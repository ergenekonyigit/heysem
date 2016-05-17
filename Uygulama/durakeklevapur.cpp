#include "durakeklevapur.h"
#include "ui_durakeklevapur.h"

DurakEkleVapur::DurakEkleVapur(Vapur *vpr, QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::DurakEkleVapur)
{
  ui->setupUi(this);

  u_ptrVapur = vpr;

  if (u_ptrVapur != NULL) {
      connect(ui->edtDurakAdi, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(durakAdiAta(QString)));
      connect(ui->edtHatAdi, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(hatAdiAta(QString)));
      connect(ui->edtSemtAdi, SIGNAL(textEdited(QString)), u_ptrVapur, SLOT(semtAdiAta(QString)));
    }
}

DurakEkleVapur::~DurakEkleVapur()
{
  delete ui;
}
