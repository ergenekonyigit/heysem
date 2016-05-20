#include "hakkinda.h"
#include "ui_hakkinda.h"

Hakkinda::Hakkinda(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Hakkinda)
{
  ui->setupUi(this);
}

Hakkinda::~Hakkinda()
{
  delete ui;
}
