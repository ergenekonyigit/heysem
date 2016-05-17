#include "vapur.h"

Vapur::Vapur(QObject *parent) : QObject(parent)
{

}

QString Vapur::aracIdOku() const
{
  return u_strAracId;
}

QString Vapur::durakAdiOku() const
{
  return u_strDurakAdi;
}

QString Vapur::hatAdiOku() const
{
  return u_strHatAdi;
}

QString Vapur::semtAdiOku() const
{
  return u_strSemtAdi;
}

void Vapur::aracIdAta(const QString &value)
{
  if (this->u_strAracId == value)
    return;
  u_strAracId = value;
  this->aracIdDegisti(u_strAracId);
}

void Vapur::durakAdiAta(const QString &value)
{
  if (this->u_strDurakAdi == value)
    return;
  u_strDurakAdi = value;
  this->aracIdDegisti(u_strDurakAdi);
}

void Vapur::hatAdiAta(const QString &value)
{
  if (this->u_strHatAdi == value)
    return;
  u_strHatAdi = value;
  this->aracIdDegisti(u_strHatAdi);
}

void Vapur::semtAdiAta(const QString &value)
{
  if (this->u_strSemtAdi == value)
    return;
  u_strSemtAdi = value;
  this->aracIdDegisti(u_strSemtAdi);
}
