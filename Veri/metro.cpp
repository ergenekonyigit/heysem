#include "metro.h"

Metro::Metro(QObject *parent) : QObject(parent)
{

}

QString Metro::aracIdOku() const
{
  return u_strAracId;
}

QString Metro::durakIdOku() const
{
  return u_strDurakId;
}

QString Metro::hatIdOku() const
{
  return u_strHatId;
}

QString Metro::durakAdiOku() const
{
  return u_strDurakAdi;
}

QString Metro::hatAdiOku() const
{
  return u_strHatAdi;
}

QString Metro::semtAdiOku() const
{
  return u_strSemtAdi;
}

void Metro::aracIdAta(const QString &value)
{
  if (this->u_strAracId == value)
    return;
  u_strAracId = value;
  this->aracIdDegisti(u_strAracId);
}

void Metro::durakIdAta(const QString &value)
{
  if (this->u_strDurakId == value)
    return;
  u_strDurakId = value;
  this->durakIdDegisti(u_strDurakId);
}

void Metro::hatIdAta(const QString &value)
{
  if (this->u_strHatId == value)
    return;
  u_strHatId = value;
  this->hatIdDegisti(u_strHatId);
}

void Metro::durakAdiAta(const QString &value)
{
  if (this->u_strDurakAdi == value)
    return;
  u_strDurakAdi = value;
  this->aracIdDegisti(u_strDurakAdi);
}

void Metro::hatAdiAta(const QString &value)
{
  if (this->u_strHatAdi == value)
    return;
  u_strHatAdi = value;
  this->aracIdDegisti(u_strHatAdi);
}

void Metro::semtAdiAta(const QString &value)
{
  if (this->u_strSemtAdi == value)
    return;
  u_strSemtAdi = value;
  this->aracIdDegisti(u_strSemtAdi);
}
