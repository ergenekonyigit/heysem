#ifndef OTOBUS_H
#define OTOBUS_H

#include <QObject>

class Otobus : public QObject
{
  Q_OBJECT
public:
  explicit Otobus(QObject *parent = 0);

  QString aracIdOku() const;
  QString durakAdiOku() const;
  QString hatAdiOku() const;
  QString semtAdiOku() const;

signals:

public slots:
  void aracIdAta(const QString &value);
  void durakAdiAta(const QString &value);
  void hatAdiAta(const QString &value);
  void semtAdiAta(const QString &value);

private:
  QString u_strAracId;
  QString u_strDurakAdi;
  QString u_strHatAdi;
  QString u_strSemtAdi;

};

#endif // OTOBUS_H
