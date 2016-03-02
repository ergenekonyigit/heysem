#ifndef VERI_GLOBAL_H
#define VERI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VERI_LIBRARY)
#  define VERISHARED_EXPORT Q_DECL_EXPORT
#else
#  define VERISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // VERI_GLOBAL_H
