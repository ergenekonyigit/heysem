#ifndef HATGORVAPUR_H
#define HATGORVAPUR_H

#include <QDialog>
#include "../Veri/vapur.h"

namespace Ui {
  class HatGorVapur;
}

class HatGorVapur : public QDialog
{
  Q_OBJECT

public:
  explicit HatGorVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~HatGorVapur();

private:
  Ui::HatGorVapur *ui;
  Vapur *u_ptrVapur;

};

#endif // HATGORVAPUR_H
