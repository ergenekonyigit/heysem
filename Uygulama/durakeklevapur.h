#ifndef DURAKEKLEVAPUR_H
#define DURAKEKLEVAPUR_H

#include <QMainWindow>
#include "../Veri/vapur.h"

namespace Ui {
  class DurakEkleVapur;
}

class DurakEkleVapur : public QMainWindow
{
  Q_OBJECT

public:
  explicit DurakEkleVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~DurakEkleVapur();

private:
  Ui::DurakEkleVapur *ui;
  Vapur *u_ptrVapur;
};

#endif // DURAKEKLEVAPUR_H
