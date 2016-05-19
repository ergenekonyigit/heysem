#ifndef HATEKLEOTOBUS_H
#define HATEKLEOTOBUS_H

#include <QDialog>
#include "../Veri/otobus.h"

namespace Ui {
  class HatEkleOtobus;
}

class HatEkleOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit HatEkleOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~HatEkleOtobus();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pushButton_clicked();

private:
  Ui::HatEkleOtobus *ui;
  Otobus *u_ptrOtobus;

  bool u_bYeniKayitMi;
};

#endif // HATEKLEOTOBUS_H
