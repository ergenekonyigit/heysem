#ifndef HATEKLEMETRO_H
#define HATEKLEMETRO_H

#include <QDialog>
#include "../Veri/metro.h"

namespace Ui {
  class HatEkleMetro;
}

class HatEkleMetro : public QDialog
{
  Q_OBJECT

public:
  explicit HatEkleMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~HatEkleMetro();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::HatEkleMetro *ui;
  Metro *u_ptrMetro;

  bool u_bYeniKayitMi;
};

#endif // HATEKLEMETRO_H
