#ifndef DURAKEKLEMETRO_H
#define DURAKEKLEMETRO_H

#include <QDialog>
#include "../Veri/metro.h"

namespace Ui {
  class DurakEkleMetro;
}

class DurakEkleMetro : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~DurakEkleMetro();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::DurakEkleMetro *ui;
  Metro *u_ptrMetro;

  bool u_bYeniKayitMi;
};

#endif // DURAKEKLEMETRO_H
