#include "hateklemetro.h"
#include "ui_hateklemetro.h"

HatEkleMetro::HatEkleMetro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatEkleMetro)
{
  ui->setupUi(this);
}

HatEkleMetro::~HatEkleMetro()
{
  delete ui;
}
