#ifndef HATDUZOTOBUS_H
#define HATDUZOTOBUS_H

#include <QDialog>
#include "../Veri/otobus.h"

namespace Ui {
  class HatDuzOtobus;
}

class HatDuzOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit HatDuzOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~HatDuzOtobus();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

private:
  Ui::HatDuzOtobus *ui;
  Otobus *u_ptrOtobus;

  bool u_bYeniKayitMi;
};

#endif // HATDUZOTOBUS_H
