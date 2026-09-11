/* spd-match: close pct=88.78 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063D150 */
#include "ghidra_compat.h"
extern unsigned char DAT_0070f494;
extern int *DAT_0070f490;
int __cdecl __stricmp(const char *, const char *);
void * __cdecl _bsearch(const void *, const void *, size_t, size_t, int (__cdecl *)(const void *, const void *));
unsigned char FUN_0063d150(char *p) {
  unsigned char v;
  void *m;
  v = 0;
  if (DAT_0070f494 != 0) {
    if ((*p != '\\') && (*p != '/') && (p[1] != ':')) {
      if (DAT_0070f490 != 0) {
        if (*p == '.') p += 2;
        m = _bsearch(p, (char*)DAT_0070f490 + 0x128, *(size_t*)((char*)DAT_0070f490 + 0xc), 0x105, __stricmp);
        if (m != 0) v = *(unsigned char*)((char*)m + 0x104);
      }
      return v;
    }
  }
  return 0;
}
