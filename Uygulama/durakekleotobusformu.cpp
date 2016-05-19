#include "durakekleotobusformu.h"
#include "ui_durakekleotobusformu.h"

DurakEkleOtobusFormu::DurakEkleOtobusFormu(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakEkleOtobusFormu)
{
  ui->setupUi(this);
}

DurakEkleOtobusFormu::~DurakEkleOtobusFormu()
{
  delete ui;
}
