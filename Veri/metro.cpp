#include "metro.h"

Metro::Metro(QObject *parent) : QObject(parent)
{

}

QString Metro::aracIdOku() const
{
  return u_strAracId;
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
  this->u_strAracId = value;
}

void Metro::durakAdiAta(const QString &value)
{
  this->u_strDurakAdi = value;
}

void Metro::hatAdiAta(const QString &value)
{
  this->u_strHatAdi = value;
}

void Metro::semtAdiAta(const QString &value)
{
  this->u_strSemtAdi = value;
}
