#include "veritabani.h"

VeriTabani *VeriTabani::u_ptrVeriTabani = NULL;

VeriTabani::VeriTabani(QObject *parent) : QObject(parent)
{
  u_db = QSqlDatabase::addDatabase("QSQLITE");
  u_db.setDatabaseName("veri.sql");

  if (u_db.open()) {

      u_db.exec("create table if not exists metro ( \
                aracid text, \
                durakid text, \
                hatid text, \
                durakadi text, \
                hatadi text, \
                semtadi text )" \
          );

      u_db.exec("create table if not exists otobus ( \
                aracid text, \
                durakid text, \
                hatid text, \
                durakadi text, \
                hatadi text, \
                semtadi text )" \
          );

      u_db.exec("create table if not exists vapur ( \
                aracid text, \
                durakid text, \
                hatid text, \
                durakadi text, \
                hatadi text, \
                semtadi text )" \
          );
    }
}

VeriTabani *VeriTabani::veriTabaniOku()
{
  if (u_ptrVeriTabani == NULL) {
      u_ptrVeriTabani = new VeriTabani;
    }
  return u_ptrVeriTabani;
}

void VeriTabani::durakEkleMetro(Metro *eklenecekDurak)
{
  QSqlQuery eklemeMetroKomutu;
  eklemeMetroKomutu.prepare("insert into metro (aracid, durakid, hatid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakid, :hatid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeMetroKomutu.bindValue(0, eklenecekDurak->aracIdOku());
  eklemeMetroKomutu.bindValue(1, eklenecekDurak->durakIdOku());
  eklemeMetroKomutu.bindValue(2, eklenecekDurak->hatIdOku());
  eklemeMetroKomutu.bindValue(3, eklenecekDurak->durakAdiOku());
  eklemeMetroKomutu.bindValue(4, eklenecekDurak->hatAdiOku());
  eklemeMetroKomutu.bindValue(5, eklenecekDurak->semtAdiOku());


  eklemeMetroKomutu.exec();
}

void VeriTabani::durakEkleOtobus(Otobus *eklenecekDurak)
{
  QSqlQuery eklemeOtobusKomutu;
  eklemeOtobusKomutu.prepare("insert into otobus (aracid, durakid, hatid, durakadi, hatadi, semtadi) \
                             values(:aracid, :durakid, :hatid, :durakadi, :hatadi, :semtadi)" \
                             );

  eklemeOtobusKomutu.bindValue(0, eklenecekDurak->aracIdOku());
  eklemeOtobusKomutu.bindValue(1, eklenecekDurak->durakIdOku());
  eklemeOtobusKomutu.bindValue(2, eklenecekDurak->hatIdOku());
  eklemeOtobusKomutu.bindValue(3, eklenecekDurak->durakAdiOku());
  eklemeOtobusKomutu.bindValue(4, eklenecekDurak->hatAdiOku());
  eklemeOtobusKomutu.bindValue(5, eklenecekDurak->semtAdiOku());

  eklemeOtobusKomutu.exec();
}

void VeriTabani::durakEkleVapur(Vapur *eklenecekDurak)
{
  QSqlQuery eklemeVapurKomutu;
  eklemeVapurKomutu.prepare("insert into vapur (aracid, durakid, hatid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakid, :hatid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeVapurKomutu.bindValue(0, eklenecekDurak->aracIdOku());
  eklemeVapurKomutu.bindValue(1, eklenecekDurak->durakIdOku());
  eklemeVapurKomutu.bindValue(2, eklenecekDurak->hatIdOku());
  eklemeVapurKomutu.bindValue(3, eklenecekDurak->durakAdiOku());
  eklemeVapurKomutu.bindValue(4, eklenecekDurak->hatAdiOku());
  eklemeVapurKomutu.bindValue(5, eklenecekDurak->semtAdiOku());

  eklemeVapurKomutu.exec();
}

void VeriTabani::durakDuzenleMetro(Metro *duzenlenecekDurak)
{
  QSqlQuery duzenlemeMetroKomutu;
  duzenlemeMetroKomutu.prepare("update metro set aracid=?, durakid=?, hatid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakid=? and hatid=? durakadi=? and hatadi=? and semtadi=?" \
                                                                                                             );

  duzenlemeMetroKomutu.bindValue(0, duzenlenecekDurak->aracIdOku());
  duzenlemeMetroKomutu.bindValue(1, duzenlenecekDurak->durakIdOku());
  duzenlemeMetroKomutu.bindValue(2, duzenlenecekDurak->hatIdOku());
  duzenlemeMetroKomutu.bindValue(3, duzenlenecekDurak->durakAdiOku());
  duzenlemeMetroKomutu.bindValue(4, duzenlenecekDurak->hatAdiOku());
  duzenlemeMetroKomutu.bindValue(5, duzenlenecekDurak->semtAdiOku());

  duzenlemeMetroKomutu.exec();
}

void VeriTabani::durakDuzenleOtobus(Otobus *duzenlenecekDurak)
{
  QSqlQuery duzenlemeOtobusKomutu;
  duzenlemeOtobusKomutu.prepare("update otobus set aracid=?, durakid=?, hatid=?, durakadi=?, hatadi=?, semtadi=? \
                                where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                                                  );

  duzenlemeOtobusKomutu.bindValue(0, duzenlenecekDurak->aracIdOku());
  duzenlemeOtobusKomutu.bindValue(1, duzenlenecekDurak->durakIdOku());
  duzenlemeOtobusKomutu.bindValue(2, duzenlenecekDurak->hatIdOku());
  duzenlemeOtobusKomutu.bindValue(3, duzenlenecekDurak->durakAdiOku());
  duzenlemeOtobusKomutu.bindValue(4, duzenlenecekDurak->hatAdiOku());
  duzenlemeOtobusKomutu.bindValue(5, duzenlenecekDurak->semtAdiOku());

  duzenlemeOtobusKomutu.exec();
}

void VeriTabani::durakDuzenleVapur(Vapur *duzenlenecekDurak)
{
  QSqlQuery duzenlemeVapurKomutu;
  duzenlemeVapurKomutu.prepare("update vapur set aracid=?, durakid=?, hatid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                                                 );

  duzenlemeVapurKomutu.bindValue(0, duzenlenecekDurak->aracIdOku());
  duzenlemeVapurKomutu.bindValue(1, duzenlenecekDurak->durakIdOku());
  duzenlemeVapurKomutu.bindValue(2, duzenlenecekDurak->hatIdOku());
  duzenlemeVapurKomutu.bindValue(3, duzenlenecekDurak->durakAdiOku());
  duzenlemeVapurKomutu.bindValue(4, duzenlenecekDurak->hatAdiOku());
  duzenlemeVapurKomutu.bindValue(5, duzenlenecekDurak->semtAdiOku());

  duzenlemeVapurKomutu.exec();
}

void VeriTabani::durakSilMetro(Metro *silinecekDurak)
{
  QSqlQuery silmeMetroKomutu;
  silmeMetroKomutu.prepare("delete from metro where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeMetroKomutu.bindValue(0, silinecekDurak->aracIdOku());
  silmeMetroKomutu.bindValue(1, silinecekDurak->durakIdOku());
  silmeMetroKomutu.bindValue(2, silinecekDurak->hatIdOku());
  silmeMetroKomutu.bindValue(3, silinecekDurak->durakAdiOku());
  silmeMetroKomutu.bindValue(4, silinecekDurak->hatAdiOku());
  silmeMetroKomutu.bindValue(5, silinecekDurak->semtAdiOku());

  silmeMetroKomutu.exec();
}

void VeriTabani::durakSilOtobus(Otobus *silinecekDurak)
{
  QSqlQuery silmeOtobusKomutu;
  silmeOtobusKomutu.prepare("delete from otobus where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeOtobusKomutu.bindValue(0, silinecekDurak->aracIdOku());
  silmeOtobusKomutu.bindValue(1, silinecekDurak->durakIdOku());
  silmeOtobusKomutu.bindValue(2, silinecekDurak->hatIdOku());
  silmeOtobusKomutu.bindValue(3, silinecekDurak->durakAdiOku());
  silmeOtobusKomutu.bindValue(4, silinecekDurak->hatAdiOku());
  silmeOtobusKomutu.bindValue(5, silinecekDurak->semtAdiOku());

  silmeOtobusKomutu.exec();
}

void VeriTabani::durakSilVapur(Vapur *silinecekDurak)
{
  QSqlQuery silmeVapurKomutu;
  silmeVapurKomutu.prepare("delete from vapur where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeVapurKomutu.bindValue(0, silinecekDurak->aracIdOku());
  silmeVapurKomutu.bindValue(1, silinecekDurak->durakIdOku());
  silmeVapurKomutu.bindValue(2, silinecekDurak->hatIdOku());
  silmeVapurKomutu.bindValue(3, silinecekDurak->durakAdiOku());
  silmeVapurKomutu.bindValue(4, silinecekDurak->hatAdiOku());
  silmeVapurKomutu.bindValue(5, silinecekDurak->semtAdiOku());

  silmeVapurKomutu.exec();
}

void VeriTabani::hatEkleMetro(Metro *eklenecekHat)
{
  QSqlQuery eklemeMetroKomutu;
  eklemeMetroKomutu.prepare("insert into metro (aracid, durakid, hatid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakid, :hatid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeMetroKomutu.bindValue(0, eklenecekHat->aracIdOku());
  eklemeMetroKomutu.bindValue(1, eklenecekHat->durakIdOku());
  eklemeMetroKomutu.bindValue(2, eklenecekHat->hatIdOku());
  eklemeMetroKomutu.bindValue(3, eklenecekHat->durakAdiOku());
  eklemeMetroKomutu.bindValue(4, eklenecekHat->hatAdiOku());
  eklemeMetroKomutu.bindValue(5, eklenecekHat->semtAdiOku());

  eklemeMetroKomutu.exec();
}

void VeriTabani::hatEkleOtobus(Otobus *eklenecekHat)
{
  QSqlQuery eklemeOtobusKomutu;
  eklemeOtobusKomutu.prepare("insert into otobus (aracid, durakid, hatid, durakadi, hatadi, semtadi) \
                             values(:aracid, :durakid, :hatid, :durakadi, :hatadi, :semtadi)" \
                             );

  eklemeOtobusKomutu.bindValue(0, eklenecekHat->aracIdOku());
  eklemeOtobusKomutu.bindValue(1, eklenecekHat->durakIdOku());
  eklemeOtobusKomutu.bindValue(2, eklenecekHat->hatIdOku());
  eklemeOtobusKomutu.bindValue(3, eklenecekHat->durakAdiOku());
  eklemeOtobusKomutu.bindValue(4, eklenecekHat->hatAdiOku());
  eklemeOtobusKomutu.bindValue(5, eklenecekHat->semtAdiOku());

  eklemeOtobusKomutu.exec();
}

void VeriTabani::hatEkleVapur(Vapur *eklenecekHat)
{
  QSqlQuery eklemeVapurKomutu;
  eklemeVapurKomutu.prepare("insert into vapur (aracid, durakid, hatid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakid, :hatid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeVapurKomutu.bindValue(0, eklenecekHat->aracIdOku());
  eklemeVapurKomutu.bindValue(1, eklenecekHat->durakIdOku());
  eklemeVapurKomutu.bindValue(2, eklenecekHat->hatIdOku());
  eklemeVapurKomutu.bindValue(3, eklenecekHat->durakAdiOku());
  eklemeVapurKomutu.bindValue(4, eklenecekHat->hatAdiOku());
  eklemeVapurKomutu.bindValue(5, eklenecekHat->semtAdiOku());

  eklemeVapurKomutu.exec();
}

void VeriTabani::hatDuzenleMetro(Metro *duzenlenecekHat)
{
  QSqlQuery duzenlemeMetroKomutu;
  duzenlemeMetroKomutu.prepare("update metro set aracid=?, durakid=?, hatid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                                                 );
  duzenlemeMetroKomutu.bindValue(0, duzenlenecekHat->aracIdOku());
  duzenlemeMetroKomutu.bindValue(1, duzenlenecekHat->durakIdOku());
  duzenlemeMetroKomutu.bindValue(2, duzenlenecekHat->hatIdOku());
  duzenlemeMetroKomutu.bindValue(3, duzenlenecekHat->durakAdiOku());
  duzenlemeMetroKomutu.bindValue(4, duzenlenecekHat->hatAdiOku());
  duzenlemeMetroKomutu.bindValue(5, duzenlenecekHat->semtAdiOku());

  duzenlemeMetroKomutu.exec();
}

void VeriTabani::hatDuzenleOtobus(Otobus *duzenlenecekHat)
{
  QSqlQuery duzenlemeOtobusKomutu;
  duzenlemeOtobusKomutu.prepare("update otobus set aracid=?, durakid=?, hatid=?, durakadi=?, hatadi=?, semtadi=? \
                                where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                                                  );

  duzenlemeOtobusKomutu.bindValue(0, duzenlenecekHat->aracIdOku());
  duzenlemeOtobusKomutu.bindValue(1, duzenlenecekHat->durakIdOku());
  duzenlemeOtobusKomutu.bindValue(2, duzenlenecekHat->hatIdOku());
  duzenlemeOtobusKomutu.bindValue(3, duzenlenecekHat->durakAdiOku());
  duzenlemeOtobusKomutu.bindValue(4, duzenlenecekHat->hatAdiOku());
  duzenlemeOtobusKomutu.bindValue(5, duzenlenecekHat->semtAdiOku());

  duzenlemeOtobusKomutu.exec();
}

void VeriTabani::hatDuzenleVapur(Vapur *duzenlenecekHat)
{
  QSqlQuery duzenlemeVapurKomutu;
  duzenlemeVapurKomutu.prepare("update vapur set aracid=?, durakid=?, hatid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                                                 );

  duzenlemeVapurKomutu.bindValue(0, duzenlenecekHat->aracIdOku());
  duzenlemeVapurKomutu.bindValue(1, duzenlenecekHat->durakIdOku());
  duzenlemeVapurKomutu.bindValue(2, duzenlenecekHat->hatIdOku());
  duzenlemeVapurKomutu.bindValue(3, duzenlenecekHat->durakAdiOku());
  duzenlemeVapurKomutu.bindValue(4, duzenlenecekHat->hatAdiOku());
  duzenlemeVapurKomutu.bindValue(5, duzenlenecekHat->semtAdiOku());

  duzenlemeVapurKomutu.exec();
}

void VeriTabani::hatSilMetro(Metro *silinecekHat)
{
  QSqlQuery silmeMetroKomutu;
  silmeMetroKomutu.prepare("delete from metro where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeMetroKomutu.bindValue(0, silinecekHat->aracIdOku());
  silmeMetroKomutu.bindValue(1, silinecekHat->durakIdOku());
  silmeMetroKomutu.bindValue(2, silinecekHat->hatIdOku());
  silmeMetroKomutu.bindValue(3, silinecekHat->durakAdiOku());
  silmeMetroKomutu.bindValue(4, silinecekHat->hatAdiOku());
  silmeMetroKomutu.bindValue(5, silinecekHat->semtAdiOku());

  silmeMetroKomutu.exec();
}

void VeriTabani::hatSilOtobus(Otobus *silinecekHat)
{
  QSqlQuery silmeOtobusKomutu;
  silmeOtobusKomutu.prepare("delete from otobus where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeOtobusKomutu.bindValue(0, silinecekHat->aracIdOku());
  silmeOtobusKomutu.bindValue(1, silinecekHat->durakIdOku());
  silmeOtobusKomutu.bindValue(2, silinecekHat->hatIdOku());
  silmeOtobusKomutu.bindValue(3, silinecekHat->durakAdiOku());
  silmeOtobusKomutu.bindValue(4, silinecekHat->hatAdiOku());
  silmeOtobusKomutu.bindValue(5, silinecekHat->semtAdiOku());

  silmeOtobusKomutu.exec();
}

void VeriTabani::hatSilVapur(Vapur *silinecekHat)
{
  QSqlQuery silmeVapurKomutu;
  silmeVapurKomutu.prepare("delete from vapur where aracid=? and durakid=? and hatid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeVapurKomutu.bindValue(0, silinecekHat->aracIdOku());
  silmeVapurKomutu.bindValue(1, silinecekHat->durakIdOku());
  silmeVapurKomutu.bindValue(2, silinecekHat->hatIdOku());
  silmeVapurKomutu.bindValue(3, silinecekHat->durakAdiOku());
  silmeVapurKomutu.bindValue(4, silinecekHat->hatAdiOku());
  silmeVapurKomutu.bindValue(5, silinecekHat->semtAdiOku());

  silmeVapurKomutu.exec();
}

QList<Metro *> VeriTabani::aracBulMetro(QString aracid)
{
  QList<Metro *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from metro \
                      where aracid = ?" \
                                      );
  bulmaKomutu.bindValue(0, aracid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Metro *metro_i = new Metro(this);
      metro_i->aracIdAta(bulmaKomutu.value(0).toString());
      metro_i->durakIdAta(bulmaKomutu.value(1).toString());
      metro_i->hatIdAta(bulmaKomutu.value(2).toString());
      metro_i->durakAdiAta(bulmaKomutu.value(3).toString());
      metro_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(metro_i);
    }

  return sonuc;
}

QList<Otobus *> VeriTabani::aracBulOtobus(QString aracid)
{
  QList<Otobus *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from otobus \
                      where aracid = ?" \
                                      );
  bulmaKomutu.bindValue(0, aracid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Otobus *otobus_i = new Otobus(this);
      otobus_i->aracIdAta(bulmaKomutu.value(0).toString());
      otobus_i->durakIdAta(bulmaKomutu.value(1).toString());
      otobus_i->hatIdAta(bulmaKomutu.value(2).toString());
      otobus_i->durakAdiAta(bulmaKomutu.value(3).toString());
      otobus_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(otobus_i);
    }

  return sonuc;
}

QList<Vapur *> VeriTabani::aracBulVapur(QString aracid)
{
  QList<Vapur *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from vapur \
                      where aracid = ?" \
                                      );
  bulmaKomutu.bindValue(0, aracid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Vapur *vapur_i = new Vapur(this);
      vapur_i->aracIdAta(bulmaKomutu.value(0).toString());
      vapur_i->durakIdAta(bulmaKomutu.value(1).toString());
      vapur_i->hatIdAta(bulmaKomutu.value(2).toString());
      vapur_i->durakAdiAta(bulmaKomutu.value(3).toString());
      vapur_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(vapur_i);
    }

  return sonuc;
}

QList<Metro *> VeriTabani::durakBulMetro(QString durakid)
{
  QList<Metro *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from metro \
                      where durakid = ?" \
                                       );
  bulmaKomutu.bindValue(0, durakid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Metro *metro_i = new Metro(this);
      metro_i->aracIdAta(bulmaKomutu.value(0).toString());
      metro_i->durakIdAta(bulmaKomutu.value(1).toString());
      metro_i->hatIdAta(bulmaKomutu.value(2).toString());
      metro_i->durakAdiAta(bulmaKomutu.value(3).toString());
      metro_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(metro_i);
    }

  return sonuc;
}

QList<Otobus *> VeriTabani::durakBulOtobus(QString durakid)
{
  QList<Otobus *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from otobus \
                      where durakid = ?" \
                                       );
  bulmaKomutu.bindValue(0, durakid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Otobus *otobus_i = new Otobus(this);
      otobus_i->aracIdAta(bulmaKomutu.value(0).toString());
      otobus_i->durakIdAta(bulmaKomutu.value(1).toString());
      otobus_i->hatIdAta(bulmaKomutu.value(2).toString());
      otobus_i->durakAdiAta(bulmaKomutu.value(3).toString());
      otobus_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(otobus_i);
    }

  return sonuc;
}

QList<Vapur *> VeriTabani::durakBulVapur(QString durakid)
{
  QList<Vapur *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from vapur \
                      where durakid = ?" \
                                       );
  bulmaKomutu.bindValue(0, durakid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Vapur *vapur_i = new Vapur(this);
      vapur_i->aracIdAta(bulmaKomutu.value(0).toString());
      vapur_i->durakIdAta(bulmaKomutu.value(1).toString());
      vapur_i->hatIdAta(bulmaKomutu.value(2).toString());
      vapur_i->durakAdiAta(bulmaKomutu.value(3).toString());
      vapur_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(vapur_i);
    }

  return sonuc;
}

QList<Metro *> VeriTabani::hatBulMetro(QString hatid)
{
  QList<Metro *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from metro \
                      where hatid = ?" \
                                     );
  bulmaKomutu.bindValue(0, hatid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Metro *metro_i = new Metro(this);
      metro_i->aracIdAta(bulmaKomutu.value(0).toString());
      metro_i->durakIdAta(bulmaKomutu.value(1).toString());
      metro_i->hatIdAta(bulmaKomutu.value(2).toString());
      metro_i->durakAdiAta(bulmaKomutu.value(3).toString());
      metro_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(metro_i);
    }

  return sonuc;
}

QList<Otobus *> VeriTabani::hatBulOtobus(QString hatid)
{
  QList<Otobus *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from otobus \
                      where hatid = ?" \
                                     );
  bulmaKomutu.bindValue(0, hatid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Otobus *otobus_i = new Otobus(this);
      otobus_i->aracIdAta(bulmaKomutu.value(0).toString());
      otobus_i->durakIdAta(bulmaKomutu.value(1).toString());
      otobus_i->hatIdAta(bulmaKomutu.value(2).toString());
      otobus_i->durakAdiAta(bulmaKomutu.value(3).toString());
      otobus_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(otobus_i);
    }

  return sonuc;
}

QList<Vapur *> VeriTabani::hatBulVapur(QString hatid)
{
  QList<Vapur *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakid, hatid, durakadi, hatadi \
                      from vapur \
                      where hatid = ?" \
                                     );
  bulmaKomutu.bindValue(0, hatid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Vapur *vapur_i = new Vapur(this);
      vapur_i->aracIdAta(bulmaKomutu.value(0).toString());
      vapur_i->durakIdAta(bulmaKomutu.value(1).toString());
      vapur_i->hatIdAta(bulmaKomutu.value(2).toString());
      vapur_i->durakAdiAta(bulmaKomutu.value(3).toString());
      vapur_i->hatAdiAta(bulmaKomutu.value(4).toString());
      sonuc.append(vapur_i);
    }

  return sonuc;
}
