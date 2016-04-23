#include "durakeklemetro.h"
#include "ui_durakeklemetro.h"

DurakEkleMetro::DurakEkleMetro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakEkleMetro)
{
  ui->setupUi(this);
}

DurakEkleMetro::~DurakEkleMetro()
{
  delete ui;
}
