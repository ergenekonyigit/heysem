#include "vapur.h"

Vapur::Vapur(QObject *parent) : QObject(parent)
{

}

QString Vapur::aracIdOku() const
{
  return u_strAracId;
}

QString Vapur::durakIdOku() const
{
  return u_strDurakId;
}

QString Vapur::hatIdOku() const
{
  return u_strHatId;
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

void Vapur::durakIdAta(const QString &value)
{
  if (this->u_strDurakId == value)
    return;
  u_strDurakId = value;
  this->durakIdDegisti(u_strDurakId);
}

void Vapur::hatIdAta(const QString &value)
{
  if (this->u_strHatId == value)
    return;
  u_strHatId = value;
  this->hatIdDegisti(u_strHatId);
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
