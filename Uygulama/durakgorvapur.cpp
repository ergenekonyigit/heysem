#include "durakgorvapur.h"
#include "ui_durakgorvapur.h"

DurakGorVapur::DurakGorVapur(Vapur *vpr, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DurakGorVapur)
{
  ui->setupUi(this);
}

DurakGorVapur::~DurakGorVapur()
{
  delete ui;
}
