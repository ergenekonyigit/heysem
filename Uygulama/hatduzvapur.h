#ifndef HATDUZVAPUR_H
#define HATDUZVAPUR_H

#include <QDialog>
#include "../Veri/vapur.h"

namespace Ui {
  class HatDuzVapur;
}

class HatDuzVapur : public QDialog
{
  Q_OBJECT

public:
  explicit HatDuzVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~HatDuzVapur();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::HatDuzVapur *ui;
  Vapur *u_ptrVapur;

  bool u_bYeniKayitMi;
};

#endif // HATDUZVAPUR_H
