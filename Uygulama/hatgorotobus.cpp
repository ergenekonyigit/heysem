#include "hatgorotobus.h"
#include "ui_hatgorotobus.h"

HatGorOtobus::HatGorOtobus(Otobus *otbs, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::HatGorOtobus)
{
  ui->setupUi(this);
}

HatGorOtobus::~HatGorOtobus()
{
  delete ui;
}
