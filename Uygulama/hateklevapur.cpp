#include "hateklevapur.h"
#include "ui_hateklevapur.h"

HatEkleVapur::HatEkleVapur(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatEkleVapur)
{
  ui->setupUi(this);
}

HatEkleVapur::~HatEkleVapur()
{
  delete ui;
}
