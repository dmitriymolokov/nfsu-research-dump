/* spd-match: far pct=22.61 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00677F54 */
#include "ghidra_compat.h"
extern void* __cdecl __getptd(void);
extern int DAT_006eb998[];
struct _PTD { char _pad[48]; int _terrno; int _tdoserrno; };
void __cdecl __dosmaperr(unsigned long param_1) {
  struct _PTD* p; int* table = (int*)DAT_006eb998;
  int i = 0; p = (struct _PTD*)__getptd();
  p->_tdoserrno = (int)param_1;
  do {
    if (param_1 == (unsigned long)table[i * 2]) {
      p = (struct _PTD*)__getptd();
      p->_terrno = table[i * 2 + 1];
      return;
    }
  } while (++i < 0x2d);
  if (param_1 > 0x13 && param_1 < 0x24) {
    ((struct _PTD*)__getptd())->_terrno = 0xd;
  } else if (param_1 > 0xbc && param_1 < 0xca) {
    ((struct _PTD*)__getptd())->_terrno = 8;
  } else {
    ((struct _PTD*)__getptd())->_terrno = 0x16;
  }
}
