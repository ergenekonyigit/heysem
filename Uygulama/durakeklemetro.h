#ifndef DURAKEKLEMETRO_H
#define DURAKEKLEMETRO_H

#include <QMainWindow>
#include "../Veri/metro.h"

namespace Ui {
  class DurakEkleMetro;
}

class DurakEkleMetro : public QMainWindow
{
  Q_OBJECT

public:
  explicit DurakEkleMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~DurakEkleMetro();

private:
  Ui::DurakEkleMetro *ui;
  Metro *u_ptrMetro;
};

#endif // DURAKEKLEMETRO_H
