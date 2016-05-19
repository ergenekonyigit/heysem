#ifndef DURAKEKLEOTOBUS_H
#define DURAKEKLEOTOBUS_H

#include <QDialog>
#include "../Veri/otobus.h"

namespace Ui {
  class DurakEkleOtobus;
}

class DurakEkleOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~DurakEkleOtobus();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

private:
  Ui::DurakEkleOtobus *ui;
  Otobus *u_ptrOtobus;

  bool u_bYeniKayitMi;
};

#endif // DURAKEKLEOTOBUS_H
