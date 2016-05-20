#ifndef DURAKDUZVAPUR_H
#define DURAKDUZVAPUR_H

#include <QDialog>
#include "../Veri/vapur.h"

namespace Ui {
  class DurakDuzVapur;
}

class DurakDuzVapur : public QDialog
{
  Q_OBJECT

public:
  explicit DurakDuzVapur(Vapur *vpr=NULL, QWidget *parent = 0);
  ~DurakDuzVapur();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::DurakDuzVapur *ui;
  Vapur *u_ptrVapur;

  bool u_bYeniKayitMi;
};

#endif // DURAKDUZVAPUR_H
