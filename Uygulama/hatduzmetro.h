#ifndef HATDUZMETRO_H
#define HATDUZMETRO_H

#include <QDialog>
#include "../Veri/metro.h"

namespace Ui {
  class HatDuzMetro;
}

class HatDuzMetro : public QDialog
{
  Q_OBJECT

public:
  explicit HatDuzMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~HatDuzMetro();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::HatDuzMetro *ui;
  Metro *u_ptrMetro;

  bool u_bYeniKayitMi;
};

#endif // HATDUZMETRO_H
