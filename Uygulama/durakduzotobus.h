#ifndef DURAKDUZOTOBUS_H
#define DURAKDUZOTOBUS_H

#include <QDialog>
#include "../Veri/otobus.h"

namespace Ui {
  class DurakDuzOtobus;
}

class DurakDuzOtobus : public QDialog
{
  Q_OBJECT

public:
  explicit DurakDuzOtobus(Otobus *otbs=NULL, QWidget *parent = 0);
  ~DurakDuzOtobus();

  bool yeniKayitMiOku() const;
  void yeniKayitMiAta(bool value);

signals:
  void yeniKayitDegisti(bool value);

private slots:
  void on_pshEkle_clicked();

  void on_pshIpt_clicked();

private:
  Ui::DurakDuzOtobus *ui;
  Otobus *u_ptrOtobus;

  bool u_bYeniKayitMi;
};

#endif // DURAKDUZOTOBUS_H
