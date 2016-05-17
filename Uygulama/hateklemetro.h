#ifndef HATEKLEMETRO_H
#define HATEKLEMETRO_H

#include <QMainWindow>
#include "../Veri/metro.h"

namespace Ui {
  class HatEkleMetro;
}

class HatEkleMetro : public QMainWindow
{
  Q_OBJECT

public:
  explicit HatEkleMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~HatEkleMetro();

private:
  Ui::HatEkleMetro *ui;
  Metro *u_ptrMetro;
};

#endif // HATEKLEMETRO_H
