#include "otobus.h"

Otobus::Otobus(QObject *parent) : QObject(parent)
{

}

QString Otobus::aracIdOku() const
{
  return u_strAracId;
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
