#ifndef DURAKEKLEVAPUR_H
#define DURAKEKLEVAPUR_H

#include <QDialog>

namespace Ui {
  class DurakEkleVapur;
}

class DurakEkleVapur : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleVapur(QWidget *parent = 0);
  ~DurakEkleVapur();

private:
  Ui::DurakEkleVapur *ui;
};

#endif // DURAKEKLEVAPUR_H
