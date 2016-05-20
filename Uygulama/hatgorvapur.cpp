#include "hatgorvapur.h"
#include "ui_hatgorvapur.h"

HatGorVapur::HatGorVapur(Vapur *vpr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatGorVapur)
{
  ui->setupUi(this);
}

HatGorVapur::~HatGorVapur()
{
  delete ui;
}
