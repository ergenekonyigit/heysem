#ifndef DURAKGORVAPUR_H
#define DURAKGORVAPUR_H

#include <QDialog>
#include "../Veri/vapur.h"

namespace Ui {
  class DurakGorVapur;
}

class DurakGorVapur : public QDialog
{
  Q_OBJECT

public:
  explicit DurakGorVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~DurakGorVapur();

private:
  Ui::DurakGorVapur *ui;
  Vapur *u_ptrVapur;

};

#endif // DURAKGORVAPUR_H
