#ifndef DURAKEKLEVAPUR_H
#define DURAKEKLEVAPUR_H

#include <QDialog>
#include "../Veri/vapur.h"

namespace Ui {
  class DurakEkleVapur;
}

class DurakEkleVapur : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~DurakEkleVapur();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

private:
  Ui::DurakEkleVapur *ui;
  Vapur *u_ptrVapur;

  bool u_bYeniKayitMi;
};

#endif // DURAKEKLEVAPUR_H
