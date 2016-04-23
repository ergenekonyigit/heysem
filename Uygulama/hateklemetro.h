#ifndef HATEKLEMETRO_H
#define HATEKLEMETRO_H

#include <QDialog>

namespace Ui {
  class HatEkleMetro;
}

class HatEkleMetro : public QDialog
{
  Q_OBJECT

public:
  explicit HatEkleMetro(QWidget *parent = 0);
  ~HatEkleMetro();

private:
  Ui::HatEkleMetro *ui;
};

#endif // HATEKLEMETRO_H
