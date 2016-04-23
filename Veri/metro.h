#ifndef METRO_H
#define METRO_H

#include <QObject>

class Metro : public QObject
{
  Q_OBJECT
public:
  explicit Metro(QObject *parent = 0);

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

#endif // METRO_H
