#include "durakekleotobus.h"
#include "ui_durakekleotobus.h"

DurakEkleOtobus::DurakEkleOtobus(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakEkleOtobus)
{
  ui->setupUi(this);
}

DurakEkleOtobus::~DurakEkleOtobus()
{
  delete ui;
}
