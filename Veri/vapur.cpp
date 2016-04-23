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
  this->u_strAracId = value;
}

void Vapur::durakAdiAta(const QString &value)
{
  this->u_strDurakAdi = value;
}

void Vapur::hatAdiAta(const QString &value)
{
  this->u_strHatAdi = value;
}

void Vapur::semtAdiAta(const QString &value)
{
  this->u_strSemtAdi = value;
}
