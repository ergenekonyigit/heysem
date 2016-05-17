#ifndef DURAKEKLEMETRO_H
#define DURAKEKLEMETRO_H

#include <QMainWindow>
#include "../Veri/metro.h"

namespace Ui {
  class DurakEkleMetro;
}

class DurakEkleMetro : public QMainWindow
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

private:
  Ui::DurakEkleMetro *ui;
  Metro *u_ptrMetro;

  bool u_bYeniKayitMi;
};

#endif // DURAKEKLEMETRO_H
