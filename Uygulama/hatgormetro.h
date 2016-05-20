#ifndef HATGORMETRO_H
#define HATGORMETRO_H

#include <QDialog>
#include "../Veri/metro.h"

namespace Ui {
  class HatGorMetro;
}

class HatGorMetro : public QDialog
{
  Q_OBJECT

public:
  explicit HatGorMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~HatGorMetro();

private:
  Ui::HatGorMetro *ui;
  Metro *u_ptrMetro;

};

#endif // HATGORMETRO_H
