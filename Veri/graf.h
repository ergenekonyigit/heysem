#ifndef GRAF_H
#define GRAF_H

#include <QList>
#include <QString>
#include <QPair>
#include <QHash>

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

#endif // GRAF_H
