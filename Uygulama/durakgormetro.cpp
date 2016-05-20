#include "durakgormetro.h"
#include "ui_durakgormetro.h"

DurakGorMetro::DurakGorMetro(Metro *mtr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakGorMetro)
{
  ui->setupUi(this);
}

DurakGorMetro::~DurakGorMetro()
{
  delete ui;
}
