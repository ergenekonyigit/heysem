#include "hateklemetro.h"
#include "ui_hateklemetro.h"

HatEkleMetro::HatEkleMetro(Metro *mtr, QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::HatEkleMetro)
{
  ui->setupUi(this);

  u_ptrMetro = mtr;

  if (u_ptrMetro != NULL) {
      connect(ui->edtDurakAdi, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(durakAdiAta(QString)));
      connect(ui->edtHatAdi, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(hatAdiAta(QString)));
      connect(ui->edtSemtAdi, SIGNAL(textEdited(QString)), u_ptrMetro, SLOT(semtAdiAta(QString)));
    }
}

HatEkleMetro::~HatEkleMetro()
{
  delete ui;
}
