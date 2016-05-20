#ifndef HAKKINDA_H
#define HAKKINDA_H

#include <QDialog>

namespace Ui {
  class Hakkinda;
}

class Hakkinda : public QDialog
{
  Q_OBJECT

public:
  explicit Hakkinda(QWidget *parent = 0);
  ~Hakkinda();

private:
  Ui::Hakkinda *ui;
};

#endif // HAKKINDA_H
