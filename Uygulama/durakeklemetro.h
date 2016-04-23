#ifndef DURAKEKLEMETRO_H
#define DURAKEKLEMETRO_H

#include <QDialog>

namespace Ui {
  class DurakEkleMetro;
}

class DurakEkleMetro : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleMetro(QWidget *parent = 0);
  ~DurakEkleMetro();

private:
  Ui::DurakEkleMetro *ui;
};

#endif // DURAKEKLEMETRO_H
