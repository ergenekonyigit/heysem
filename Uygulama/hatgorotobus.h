#ifndef HATGOROTOBUS_H
#define HATGOROTOBUS_H

#include <QDialog>
#include "../Veri/otobus.h"

namespace Ui {
  class HatGorOtobus;
}

class HatGorOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit HatGorOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~HatGorOtobus();

private:
  Ui::HatGorOtobus *ui;
  Otobus *u_ptrOtobus;

};

#endif // HATGOROTOBUS_H
