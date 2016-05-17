#include "veritabani.h"

VeriTabani *VeriTabani::u_ptrVeriTabani = NULL;

VeriTabani::VeriTabani(QObject *parent) : QObject(parent)
{
  u_db = QSqlDatabase::addDatabase("QSQLITE");
  u_db.setDatabaseName("veri.db");

  if (u_db.open()) {
      u_db.exec("create table if not exists metro ( \
                aracid text, \
                durakadi text, \
                hatadi text, \
                semtadi text )" \
          );

      u_db.exec("create table if not exists otobus ( \
                aracid text, \
                durakadi text, \
                hatadi text, \
                semtadi text )" \
          );

      u_db.exec("create table if not exists vapur ( \
                aracid text, \
                durakadi text, \
                hatadi text, \
                semtadi text )" \
          );
    }
}

void VeriTabani::durakEkleMetro(Metro *eklenecekDurak)
{
  QSqlQuery eklemeMetroKomutu;
  eklemeMetroKomutu.prepare("insert into metro (aracid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeMetroKomutu.bindValue(0, eklenecekDurak->aracIdOku());
  eklemeMetroKomutu.bindValue(1, eklenecekDurak->durakAdiOku());
  eklemeMetroKomutu.bindValue(2, eklenecekDurak->hatAdiOku());
  eklemeMetroKomutu.bindValue(3, eklenecekDurak->semtAdiOku());


  eklemeMetroKomutu.exec();
}

void VeriTabani::durakEkleOtobus(Otobus *eklenecekDurak)
{
  QSqlQuery eklemeOtobusKomutu;
  eklemeOtobusKomutu.prepare("insert into otobus (aracid, durakadi, hatadi, semtadi) \
                             values(:aracid, :durakadi, :hatadi, :semtadi)" \
                             );

  eklemeOtobusKomutu.bindValue(0, eklenecekDurak->aracIdOku());
  eklemeOtobusKomutu.bindValue(1, eklenecekDurak->durakAdiOku());
  eklemeOtobusKomutu.bindValue(2, eklenecekDurak->hatAdiOku());
  eklemeOtobusKomutu.bindValue(3, eklenecekDurak->semtAdiOku());

  eklemeOtobusKomutu.exec();
}

void VeriTabani::durakEkleVapur(Vapur *eklenecekDurak)
{
  QSqlQuery eklemeVapurKomutu;
  eklemeVapurKomutu.prepare("insert into vapur (aracid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeVapurKomutu.bindValue(0, eklenecekDurak->aracIdOku());
  eklemeVapurKomutu.bindValue(1, eklenecekDurak->durakAdiOku());
  eklemeVapurKomutu.bindValue(2, eklenecekDurak->hatAdiOku());
  eklemeVapurKomutu.bindValue(3, eklenecekDurak->semtAdiOku());

  eklemeVapurKomutu.exec();
}

void VeriTabani::durakDuzenleMetro(Metro *duzenlenecekDurak)
{
  QSqlQuery duzenlemeMetroKomutu;
  duzenlemeMetroKomutu.prepare("update metro set aracid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                       );

  duzenlemeMetroKomutu.bindValue(0, duzenlenecekDurak->aracIdOku());
  duzenlemeMetroKomutu.bindValue(1, duzenlenecekDurak->durakAdiOku());
  duzenlemeMetroKomutu.bindValue(2, duzenlenecekDurak->hatAdiOku());
  duzenlemeMetroKomutu.bindValue(3, duzenlenecekDurak->semtAdiOku());

  duzenlemeMetroKomutu.exec();
}

void VeriTabani::durakDuzenleOtobus(Otobus *duzenlenecekDurak)
{
  QSqlQuery duzenlemeOtobusKomutu;
  duzenlemeOtobusKomutu.prepare("update otobus set aracid=?, durakadi=?, hatadi=?, semtadi=? \
                                where aracid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                        );

  duzenlemeOtobusKomutu.bindValue(0, duzenlenecekDurak->aracIdOku());
  duzenlemeOtobusKomutu.bindValue(1, duzenlenecekDurak->durakAdiOku());
  duzenlemeOtobusKomutu.bindValue(2, duzenlenecekDurak->hatAdiOku());
  duzenlemeOtobusKomutu.bindValue(3, duzenlenecekDurak->semtAdiOku());

  duzenlemeOtobusKomutu.exec();
}

void VeriTabani::durakDuzenleVapur(Vapur *duzenlenecekDurak)
{
  QSqlQuery duzenlemeVapurKomutu;
  duzenlemeVapurKomutu.prepare("update vapur set aracid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                       );

  duzenlemeVapurKomutu.bindValue(0, duzenlenecekDurak->aracIdOku());
  duzenlemeVapurKomutu.bindValue(1, duzenlenecekDurak->durakAdiOku());
  duzenlemeVapurKomutu.bindValue(2, duzenlenecekDurak->hatAdiOku());
  duzenlemeVapurKomutu.bindValue(3, duzenlenecekDurak->semtAdiOku());

  duzenlemeVapurKomutu.exec();
}

void VeriTabani::durakSilMetro(Metro *silinecekDurak)
{
  QSqlQuery silmeMetroKomutu;
  silmeMetroKomutu.prepare("delete from metro where aracid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeMetroKomutu.bindValue(0, silinecekDurak->aracIdOku());
  silmeMetroKomutu.bindValue(1, silinecekDurak->durakAdiOku());
  silmeMetroKomutu.bindValue(2, silinecekDurak->hatAdiOku());
  silmeMetroKomutu.bindValue(3, silinecekDurak->semtAdiOku());

  silmeMetroKomutu.exec();
}

void VeriTabani::durakSilOtobus(Otobus *silinecekDurak)
{
  QSqlQuery silmeOtobusKomutu;
  silmeOtobusKomutu.prepare("delete from otobus where aracid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeOtobusKomutu.bindValue(0, silinecekDurak->aracIdOku());
  silmeOtobusKomutu.bindValue(1, silinecekDurak->durakAdiOku());
  silmeOtobusKomutu.bindValue(2, silinecekDurak->hatAdiOku());
  silmeOtobusKomutu.bindValue(3, silinecekDurak->semtAdiOku());

  silmeOtobusKomutu.exec();
}

void VeriTabani::durakSilVapur(Vapur *silinecekDurak)
{
  QSqlQuery silmeVapurKomutu;
  silmeVapurKomutu.prepare("delete from vapur where aracid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeVapurKomutu.bindValue(0, silinecekDurak->aracIdOku());
  silmeVapurKomutu.bindValue(1, silinecekDurak->durakAdiOku());
  silmeVapurKomutu.bindValue(2, silinecekDurak->hatAdiOku());
  silmeVapurKomutu.bindValue(3, silinecekDurak->semtAdiOku());

  silmeVapurKomutu.exec();
}

void VeriTabani::hatEkleMetro(Metro *eklenecekHat)
{
  QSqlQuery eklemeMetroKomutu;
  eklemeMetroKomutu.prepare("insert into metro (aracid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeMetroKomutu.bindValue(0, eklenecekHat->aracIdOku());
  eklemeMetroKomutu.bindValue(1, eklenecekHat->durakAdiOku());
  eklemeMetroKomutu.bindValue(2, eklenecekHat->hatAdiOku());
  eklemeMetroKomutu.bindValue(3, eklenecekHat->semtAdiOku());

  eklemeMetroKomutu.exec();
}

void VeriTabani::hatEkleOtobus(Otobus *eklenecekHat)
{
  QSqlQuery eklemeOtobusKomutu;
  eklemeOtobusKomutu.prepare("insert into otobus (aracid, durakadi, hatadi, semtadi) \
                             values(:aracid, :durakadi, :hatadi, :semtadi)" \
                             );

  eklemeOtobusKomutu.bindValue(0, eklenecekHat->aracIdOku());
  eklemeOtobusKomutu.bindValue(1, eklenecekHat->durakAdiOku());
  eklemeOtobusKomutu.bindValue(2, eklenecekHat->hatAdiOku());
  eklemeOtobusKomutu.bindValue(3, eklenecekHat->semtAdiOku());

  eklemeOtobusKomutu.exec();
}

void VeriTabani::hatEkleVapur(Vapur *eklenecekHat)
{
  QSqlQuery eklemeVapurKomutu;
  eklemeVapurKomutu.prepare("insert into vapur (aracid, durakadi, hatadi, semtadi) \
                            values(:aracid, :durakadi, :hatadi, :semtadi)" \
                            );

  eklemeVapurKomutu.bindValue(0, eklenecekHat->aracIdOku());
  eklemeVapurKomutu.bindValue(1, eklenecekHat->durakAdiOku());
  eklemeVapurKomutu.bindValue(2, eklenecekHat->hatAdiOku());
  eklemeVapurKomutu.bindValue(3, eklenecekHat->semtAdiOku());

  eklemeVapurKomutu.exec();
}

void VeriTabani::hatDuzenleMetro(Metro *duzenlenecekHat)
{
  QSqlQuery duzenlemeMetroKomutu;
  duzenlemeMetroKomutu.prepare("update metro set aracid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                       );
  duzenlemeMetroKomutu.bindValue(0, duzenlenecekHat->aracIdOku());
  duzenlemeMetroKomutu.bindValue(1, duzenlenecekHat->durakAdiOku());
  duzenlemeMetroKomutu.bindValue(2, duzenlenecekHat->hatAdiOku());
  duzenlemeMetroKomutu.bindValue(3, duzenlenecekHat->semtAdiOku());

  duzenlemeMetroKomutu.exec();
}

void VeriTabani::hatDuzenleOtobus(Otobus *duzenlenecekHat)
{
  QSqlQuery duzenlemeOtobusKomutu;
  duzenlemeOtobusKomutu.prepare("update otobus set aracid=?, durakadi=?, hatadi=?, semtadi=? \
                                where aracid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                        );

  duzenlemeOtobusKomutu.bindValue(0, duzenlenecekHat->aracIdOku());
  duzenlemeOtobusKomutu.bindValue(1, duzenlenecekHat->durakAdiOku());
  duzenlemeOtobusKomutu.bindValue(2, duzenlenecekHat->hatAdiOku());
  duzenlemeOtobusKomutu.bindValue(3, duzenlenecekHat->semtAdiOku());

  duzenlemeOtobusKomutu.exec();
}

void VeriTabani::hatDuzenleVapur(Vapur *duzenlenecekHat)
{
  QSqlQuery duzenlemeVapurKomutu;
  duzenlemeVapurKomutu.prepare("update vapur set aracid=?, durakadi=?, hatadi=?, semtadi=? \
                               where aracid=? and durakadi=? and hatadi=? and semtadi=?" \
                                                                                       );

  duzenlemeVapurKomutu.bindValue(0, duzenlenecekHat->aracIdOku());
  duzenlemeVapurKomutu.bindValue(1, duzenlenecekHat->durakAdiOku());
  duzenlemeVapurKomutu.bindValue(2, duzenlenecekHat->hatAdiOku());
  duzenlemeVapurKomutu.bindValue(3, duzenlenecekHat->semtAdiOku());

  duzenlemeVapurKomutu.exec();
}

void VeriTabani::hatSilMetro(Metro *silinecekHat)
{
  QSqlQuery silmeMetroKomutu;
  silmeMetroKomutu.prepare("delete from metro where aracid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeMetroKomutu.bindValue(0, silinecekHat->aracIdOku());
  silmeMetroKomutu.bindValue(1, silinecekHat->durakAdiOku());
  silmeMetroKomutu.bindValue(2, silinecekHat->hatAdiOku());
  silmeMetroKomutu.bindValue(3, silinecekHat->semtAdiOku());

  silmeMetroKomutu.exec();
}

void VeriTabani::hatSilOtobus(Otobus *silinecekHat)
{
  QSqlQuery silmeOtobusKomutu;
  silmeOtobusKomutu.prepare("delete from otobus where aracid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeOtobusKomutu.bindValue(0, silinecekHat->aracIdOku());
  silmeOtobusKomutu.bindValue(1, silinecekHat->durakAdiOku());
  silmeOtobusKomutu.bindValue(2, silinecekHat->hatAdiOku());
  silmeOtobusKomutu.bindValue(3, silinecekHat->semtAdiOku());

  silmeOtobusKomutu.exec();
}

void VeriTabani::hatSilVapur(Vapur *silinecekHat)
{
  QSqlQuery silmeVapurKomutu;
  silmeVapurKomutu.prepare("delete from vapur where aracid=? and durakadi=? and hatadi=? and semtadi=?");

  silmeVapurKomutu.bindValue(0, silinecekHat->aracIdOku());
  silmeVapurKomutu.bindValue(1, silinecekHat->durakAdiOku());
  silmeVapurKomutu.bindValue(2, silinecekHat->hatAdiOku());
  silmeVapurKomutu.bindValue(3, silinecekHat->semtAdiOku());

  silmeVapurKomutu.exec();
}

VeriTabani *VeriTabani::veriTabaniOku()
{
  if (u_ptrVeriTabani == NULL) {
      u_ptrVeriTabani = new VeriTabani;
    }
  return u_ptrVeriTabani;
}

QList<Metro *> VeriTabani::aracBulMetro(QString aracid)
{
  QList<Metro *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakadi, hatadi \
                      from metro \
                      where aracid = ?" \
                      );
  bulmaKomutu.bindValue(0, aracid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Metro *metro_i = new Metro(this);
      metro_i->aracIdAta(bulmaKomutu.value(0).toString());
      metro_i->durakAdiAta(bulmaKomutu.value(1).toString());
      metro_i->hatAdiAta(bulmaKomutu.value(2).toString());
      sonuc.append(metro_i);
    }

  return sonuc;
}

QList<Otobus *> VeriTabani::aracBulOtobus(QString aracid)
{
  QList<Otobus *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakadi, hatadi \
                      from otobus \
                      where aracid = ?" \
                      );
  bulmaKomutu.bindValue(0, aracid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Otobus *otobus_i = new Otobus(this);
      otobus_i->aracIdAta(bulmaKomutu.value(0).toString());
      otobus_i->durakAdiAta(bulmaKomutu.value(1).toString());
      otobus_i->hatAdiAta(bulmaKomutu.value(2).toString());
      sonuc.append(otobus_i);
    }

  return sonuc;
}

QList<Vapur *> VeriTabani::aracBulVapur(QString aracid)
{
  QList<Vapur *> sonuc;
  QSqlQuery bulmaKomutu;
  bulmaKomutu.prepare("select aracid, durakadi, hatadi \
                      from vapur \
                      where aracid = ?" \
                      );
  bulmaKomutu.bindValue(0, aracid);
  bulmaKomutu.exec();

  while (bulmaKomutu.next()) {
      Vapur *vapur_i = new Vapur(this);
      vapur_i->aracIdAta(bulmaKomutu.value(0).toString());
      vapur_i->durakAdiAta(bulmaKomutu.value(1).toString());
      vapur_i->hatAdiAta(bulmaKomutu.value(2).toString());
      sonuc.append(vapur_i);
    }

  return sonuc;
}
