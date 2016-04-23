#ifndef HATEKLEVAPUR_H
#define HATEKLEVAPUR_H

#include <QDialog>

namespace Ui {
  class HatEkleVapur;
}

class HatEkleVapur : public QDialog
{
  Q_OBJECT

public:
  explicit HatEkleVapur(QWidget *parent = 0);
  ~HatEkleVapur();

private:
  Ui::HatEkleVapur *ui;
};

#endif // HATEKLEVAPUR_H
