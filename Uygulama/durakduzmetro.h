#ifndef DURAKDUZMETRO_H
#define DURAKDUZMETRO_H

#include <QDialog>
#include "../Veri/metro.h"

namespace Ui {
  class DurakDuzMetro;
}

class DurakDuzMetro : public QDialog
{
  Q_OBJECT

public:
  explicit DurakDuzMetro(Metro *mtr=NULL, QWidget *parent = 0);
  ~DurakDuzMetro();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::DurakDuzMetro *ui;
  Metro *u_ptrMetro;

  bool u_bYeniKayitMi;
};

#endif // DURAKDUZMETRO_H
