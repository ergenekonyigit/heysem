#ifndef DURAKEKLEOTOBUS_H
#define DURAKEKLEOTOBUS_H

#include <QDialog>

namespace Ui {
  class DurakEkleOtobus;
}

class DurakEkleOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleOtobus(QWidget *parent = 0);
  ~DurakEkleOtobus();

private:
  Ui::DurakEkleOtobus *ui;
};

#endif // DURAKEKLEOTOBUS_H
