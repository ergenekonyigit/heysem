#include "durakeklevapur.h"
#include "ui_durakeklevapur.h"

DurakEkleVapur::DurakEkleVapur(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakEkleVapur)
{
  ui->setupUi(this);
}

DurakEkleVapur::~DurakEkleVapur()
{
  delete ui;
}
