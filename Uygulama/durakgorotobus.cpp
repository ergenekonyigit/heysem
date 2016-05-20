#include "durakgorotobus.h"
#include "ui_durakgorotobus.h"

DurakGorOtobus::DurakGorOtobus(Otobus *otbs, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakGorOtobus)
{
  ui->setupUi(this);
}

DurakGorOtobus::~DurakGorOtobus()
{
  delete ui;
}
