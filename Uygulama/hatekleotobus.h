#ifndef HATEKLEOTOBUS_H
#define HATEKLEOTOBUS_H

#include <QDialog>

namespace Ui {
  class HatEkleOtobus;
}

class HatEkleOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit HatEkleOtobus(QWidget *parent = 0);
  ~HatEkleOtobus();

private:
  Ui::HatEkleOtobus *ui;
};

#endif // HATEKLEOTOBUS_H
