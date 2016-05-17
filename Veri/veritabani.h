#ifndef VERITABANI_H
#define VERITABANI_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QList>

#include "metro.h"
#include "otobus.h"
#include "vapur.h"

class VeriTabani : public QObject
{
  Q_OBJECT
private:
  explicit VeriTabani(QObject *parent = 0);
  static VeriTabani *u_ptrVeriTabani;
  QSqlDatabase u_db;

signals:

public slots:
  void durakEkleMetro(Metro *eklenecekDurak);
  void durakEkleOtobus(Otobus *eklenecekDurak);
  void durakEkleVapur(Vapur *eklenecekDurak);

  void durakDuzenleMetro(Metro *duzenlenecekDurak);
  void durakDuzenleOtobus(Otobus *duzenlenecekDurak);
  void durakDuzenleVapur(Vapur *duzenlenecekDurak);

  void durakSilMetro(Metro *silinecekDurak);
  void durakSilOtobus(Otobus *silinecekDurak);
  void durakSilVapur(Vapur *silinecekDurak);


  void hatEkleMetro(Metro *eklenecekHat);
  void hatEkleOtobus(Otobus *eklenecekHat);
  void hatEkleVapur(Vapur *eklenecekHat);

  void hatDuzenleMetro(Metro *duzenlenecekHat);
  void hatDuzenleOtobus(Otobus *duzenlenecekHat);
  void hatDuzenleVapur(Vapur *duzenlenecekHat);

  void hatSilMetro(Metro *silinecekHat);
  void hatSilOtobus(Otobus *silinecekHat);
  void hatSilVapur(Vapur *silinecekHat);

public:
  static VeriTabani *veriTabaniOku();

  QList<Metro*> aracBulMetro(QString aracid);
  QList<Otobus*> aracBulOtobus(QString aracid);
  QList<Vapur*> aracBulVapur(QString aracid);
};

#endif // VERITABANI_H
