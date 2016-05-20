#include "hatgormetro.h"
#include "ui_hatgormetro.h"

HatGorMetro::HatGorMetro(Metro *mtr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatGorMetro)
{
  ui->setupUi(this);
}

HatGorMetro::~HatGorMetro()
{
  delete ui;
}
