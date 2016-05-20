#ifndef HATEKLEVAPUR_H
#define HATEKLEVAPUR_H

#include <QDialog>
#include "../Veri/vapur.h"

namespace Ui {
  class HatEkleVapur;
}

class HatEkleVapur : public QDialog
{
  Q_OBJECT

public:
  explicit HatEkleVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~HatEkleVapur();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::HatEkleVapur *ui;
  Vapur *u_ptrVapur;

  bool u_bYeniKayitMi;
};

#endif // HATEKLEVAPUR_H
