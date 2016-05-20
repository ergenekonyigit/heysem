#ifndef DURAKGOROTOBUS_H
#define DURAKGOROTOBUS_H

#include <QDialog>
#include "../Veri/otobus.h"

namespace Ui {
  class DurakGorOtobus;
}

class DurakGorOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit DurakGorOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~DurakGorOtobus();

private:
  Ui::DurakGorOtobus *ui;
  Otobus *u_ptrOtobus;

};

#endif // DURAKGOROTOBUS_H
