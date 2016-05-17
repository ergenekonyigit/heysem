#ifndef DURAKEKLEOTOBUS_H
#define DURAKEKLEOTOBUS_H

#include <QMainWindow>
#include "../Veri/otobus.h"

namespace Ui {
  class DurakEkleOtobus;
}

class DurakEkleOtobus : public QMainWindow
{
  Q_OBJECT

public:
  explicit DurakEkleOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~DurakEkleOtobus();

private:
  Ui::DurakEkleOtobus *ui;
  Otobus *u_ptrOtobus;
};

#endif // DURAKEKLEOTOBUS_H
