#ifndef GRAF_H
#define GRAF_H

#include <QList>
#include <QPair>

typedef OncelikKuyrugu<Kose, Agirlik> OKVeriTuru;
typedef QHash<Kose, Agirlik> KoseUzakliklariVektoru;
typedef QHash<Kose, Kose> OncekiKose;
typedef QList<Kose> Yol;
typedef QPair<Agirlik, Yol> EnKisaYol;

template <class A, class O>
class OncelikKuyrugu {
private:
  typedef O Oncelik;
  typedef A Anahtar;
  typedef QPair<A, O> Eleman;
  typedef int Sira;
  QList<Eleman> u_listOK;

  inline Sira BirinciCocuk(Sira kok) {
    return 2*kok;
  }

  inline Sira IkinciCocuk(Sira kok) {
    return cocuk/2;
  }

  inline Sira Kok(Sira cocuk) {
    return cocuk/2;
  }

  inline SiraVarMi(Sira i) {
    if (i>0 && u_listOK.size()) {
        return true;
      } else {
        return false;
      }
  }

  inline Sira KucukCocuk(Sira kok) {
    Sira cocuk1 = BirinciCocuk(kok);
    Sira cocuk2 = IkinciCocuk(kok);
    if (SiraVarMi(cocuk2)) {
        if (u_listOK[cocuk1] < u_listOK[cocuk2]) {
            return cocuk1;
          } else {
            return cocuk2;
          }
      } else {
        if (SiraVarMi(cocuk1)) {
            return cocuk1;
          } else {
            return NULL;
          }
      }
  }

public:
  OncelikKuyrugu() {
    u_listOK.append(Eleman());
  }

  void ElemanEkle(Anahtar a, Oncelik o) {
    u_listOK.append(qMakePair(a,o));
    Sira i = u_listOK.size()-1;
    Sira kok = Kok(i);
    while (kok >= 1) {
        if (u_listOK[i].second < u_listOK[kok].second) {
            qSwap(u_listOK[i], u_listOK[kok]);
            i = kok;
            kok = Kok(i);
          } else {
            return;
          }
      }
  }

  Eleman ElemanCikar() {
    if (BosMu()) {
        return Eleman();
      }
    Eleman e = u_listOK[1];
    Eleman t = u_listOK.takeLast();
    if (BosMu()) {
        return e;
      }
    Sira i = 1;
    Sira cocuk = KucukCocuk(i);
    u_listOK[1] = t;
    while (SiraVarMi(cocuk) && u_listOK[i].second > u_listOK[cocuk].second) {
        qSwap(u_listOK[i], u_listOK[cocuk]);
        i = cocuk;
        cocuk = KucukCocuk(i);
      }
    return e;
  }

  bool BosMu() {
    if (u_listOK.size() == 1) {
        return true;
      } else {
        return false;
      }
  }

  void OncelikAzalt(Anahtar a, Oncelik o) {
    Sira ai = 0;
    for (int i = 1; i < u_listOK.size(); i++) {
        if (u_listOK[i].first == a) {
            ai = i;
            break;
          }
      }
    if (ai == 0) {
        return;
      }

    if(u_listOK[ai].second < o) {
        return;
      }
    u_listOK[ai].second = o;
    Sira i = ai;
    Sira kok = Kok(i);
    while (kok >= 1) {
        if (u_listOK[i].second < u_listOK[kok].second) {
            qSwap(u_listOK[i], u_listOK[kok]);
            i = kok;
            kok = Kok(i);
          } else {
            return;
          }
      }
  }

};

template <class K, class A>
class YonluAgirlikliGraf {
  typedef A Agirlik;
  typedef K Kose;
  typedef QPair<Kose, Agirlik> KoseAgirlikIkilisi;
  typedef QList<KoseAgirlikIkilisi> KomsulukListesi;

  QHash<Kose, KomsulukListesi> u_hashGraf;

public:

  void koseEkle(Kose k) {
    u_hashGraf[k] = KomsulukListesi();
  }

  void kenarEkle(Kose k1, Kose k2, Agirlik a) {
    KoseAgirlikIkilisi e = qMakePair(k2, a);
    KomsulukListesi l = u_hashGraf[k1];
    l.append(e);
  }

  Agirlik agirlik(Kose k1, Kose k2) {
    KomsulukListesi l = u_hashGraf[k1];
    foreach (KoseAgirlikIkilisi ei, l) {
        if (ei.first == k2)
          return ei.second;
      }
    return 0;
  }

};

EnKisaYol EnKisaYolBul(Kose kaynak, Kose hedef) {
  Agirlik sonsuz = std::numeric_limits<Agirlik>::max();
  KoseUzakliklariVektoru d;
  OKVeriTuru ok;
  OncekiKose oncekiKose;
  d[kaynak] = 0;
  foreach (Kose v, u_hashGraf.keys()) {
      if(v!=kaynak) {
          d[v] = sonsuz;
          oncekiKose[v] = Kose();
        }
      ok.ElemanEkle(v, d[v]);
    }
  while(!ok.BosMu()) {
      QPair<Kose, Agirlik> uDu = ok.ElemanCikar();
      if(uDu.first == hedef) {
          Yol enKisaYol;
          Kose t = uDu.first;
          while(t!=kaynak) {
              enKisaYol.prepend(t);
              t = oncekiKose[t];
            }
          enKisaYol.prepend(kaynak);
          EnKisaYol eky(uDu.second, enKisaYol);
          return eky;
        }
      foreach (Kenar k, u_hashGraf[uDu.first]) {
          Kose v = k.first;
          Agirlik yeniUzaklik = uDu.second + k.second;
          if(yeniUzaklik < d[v]) {
            } }
    }
  return EnKisaYol();
}


#endif // GRAF_H
