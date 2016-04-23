#include "hatekleotobus.h"
#include "ui_hatekleotobus.h"

HatEkleOtobus::HatEkleOtobus(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatEkleOtobus)
{
  ui->setupUi(this);
}

HatEkleOtobus::~HatEkleOtobus()
{
  delete ui;
}
