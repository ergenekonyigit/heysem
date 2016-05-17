#ifndef HATEKLEVAPUR_H
#define HATEKLEVAPUR_H

#include <QMainWindow>
#include "../Veri/vapur.h"

namespace Ui {
  class HatEkleVapur;
}

class HatEkleVapur : public QMainWindow
{
  Q_OBJECT

public:
  explicit HatEkleVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~HatEkleVapur();

private:
  Ui::HatEkleVapur *ui;
  Vapur *u_ptrVapur;
};

#endif // HATEKLEVAPUR_H
