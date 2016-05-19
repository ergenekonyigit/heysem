#ifndef VAPUR_H
#define VAPUR_H

#include <QObject>

class Vapur : public QObject
{
  Q_OBJECT

private:
  QString u_strAracId;
  QString u_strDurakId;
  QString u_strHatId;
  QString u_strDurakAdi;
  QString u_strHatAdi;
  QString u_strSemtAdi;

public:
  explicit Vapur(QObject *parent = 0);

  Q_PROPERTY(QString aracId READ aracIdOku WRITE aracIdAta NOTIFY aracIdDegisti)
  Q_PROPERTY(QString durakId READ durakIdOku WRITE durakIdAta NOTIFY durakIdDegisti)
  Q_PROPERTY(QString hatId READ hatIdOku WRITE hatIdAta NOTIFY hatIdDegisti)
  Q_PROPERTY(QString durakAdi READ durakAdiOku WRITE durakAdiAta NOTIFY durakAdiDegisti)
  Q_PROPERTY(QString hatAdio READ hatAdiOku WRITE hatAdiAta NOTIFY hatAdiDegisti)
  Q_PROPERTY(QString semtAdi READ semtAdiOku WRITE semtAdiAta NOTIFY semtAdiDegisti)

  QString aracIdOku() const;
  QString durakIdOku() const;
  QString hatIdOku() const;
  QString durakAdiOku() const;
  QString hatAdiOku() const;
  QString semtAdiOku() const;

signals:
  void aracIdDegisti(const QString &value);
  void durakIdDegisti(const QString &value);
  void hatIdDegisti(const QString &value);
  void durakAdiDegisti(const QString &value);
  void hatAdiDegisti(const QString &value);
  void semtAdiDegisti(const QString &value);

public slots:
  void aracIdAta(const QString &value);
  void durakIdAta(const QString &value);
  void hatIdAta(const QString &value);
  void durakAdiAta(const QString &value);
  void hatAdiAta(const QString &value);
  void semtAdiAta(const QString &value);

};

#endif // VAPUR_H
