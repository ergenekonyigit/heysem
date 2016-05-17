#ifndef HATEKLEOTOBUS_H
#define HATEKLEOTOBUS_H

#include <QMainWindow>
#include "../Veri/otobus.h"

namespace Ui {
  class HatEkleOtobus;
}

class HatEkleOtobus : public QMainWindow
{
  Q_OBJECT

public:
  explicit HatEkleOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~HatEkleOtobus();

private:
  Ui::HatEkleOtobus *ui;
  Otobus *u_ptrOtobus;
};

#endif // HATEKLEOTOBUS_H
