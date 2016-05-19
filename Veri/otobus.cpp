#include "otobus.h"

Otobus::Otobus(QObject *parent) : QObject(parent)
{

}

QString Otobus::aracIdOku() const
{
  return u_strAracId;
}

QString Otobus::durakIdOku() const
{
  return u_strDurakId;
}

QString Otobus::hatIdOku() const
{
  return u_strHatId;
}

QString Otobus::durakAdiOku() const
{
  return u_strDurakAdi;
}

QString Otobus::hatAdiOku() const
{
  return u_strHatAdi;
}

QString Otobus::semtAdiOku() const
{
  return u_strSemtAdi;
}

void Otobus::aracIdAta(const QString &value)
{
  if (this->u_strAracId == value)
    return;
  u_strAracId = value;
  this->aracIdDegisti(u_strAracId);
}

void Otobus::durakIdAta(const QString &value)
{
  if (this->u_strDurakId == value)
    return;
  u_strDurakId = value;
  this->durakIdDegisti(u_strDurakId);
}

void Otobus::hatIdAta(const QString &value)
{
  if (this->u_strHatId == value)
    return;
  u_strHatId = value;
  this->hatIdDegisti(u_strHatId);
}

void Otobus::durakAdiAta(const QString &value)
{
  if (this->u_strDurakAdi == value)
    return;
  u_strDurakAdi = value;
  this->aracIdDegisti(u_strDurakAdi);
}

void Otobus::hatAdiAta(const QString &value)
{
  if (this->u_strHatAdi == value)
    return;
  u_strHatAdi = value;
  this->aracIdDegisti(u_strHatAdi);
}

void Otobus::semtAdiAta(const QString &value)
{
  if (this->u_strSemtAdi == value)
    return;
  u_strSemtAdi = value;
  this->aracIdDegisti(u_strSemtAdi);
}
