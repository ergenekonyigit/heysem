#ifndef DURAKGORMETRO_H
#define DURAKGORMETRO_H

#include <QDialog>
#include "../Veri/metro.h"

namespace Ui {
  class DurakGorMetro;
}

class DurakGorMetro : public QDialog
{
  Q_OBJECT

public:
  explicit DurakGorMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~DurakGorMetro();

private:
  Ui::DurakGorMetro *ui;
  Metro *u_ptrMetre;

};

#endif // DURAKGORMETRO_H
