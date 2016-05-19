#ifndef DURAKEKLEOTOBUSFORMU_H
#define DURAKEKLEOTOBUSFORMU_H

#include <QDialog>

namespace Ui {
  class DurakEkleOtobusFormu;
}

class DurakEkleOtobusFormu : public QDialog
{
  Q_OBJECT

public:
  explicit DurakEkleOtobusFormu(QWidget *parent = 0);
  ~DurakEkleOtobusFormu();

private:
  Ui::DurakEkleOtobusFormu *ui;
};

#endif // DURAKEKLEOTOBUSFORMU_H
