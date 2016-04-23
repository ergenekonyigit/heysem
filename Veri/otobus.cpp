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
  this->u_strAracId = value;
}

void Otobus::durakAdiAta(const QString &value)
{
  this->u_strDurakAdi = value;
}

void Otobus::hatAdiAta(const QString &value)
{
  this->u_strHatAdi = value;
}

void Otobus::semtAdiAta(const QString &value)
{
  this->u_strSemtAdi = value;
}
