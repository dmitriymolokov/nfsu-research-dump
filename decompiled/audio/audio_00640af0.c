/* spd-match: far pct=15.62 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00640AF0 */
#include <stdlib.h>
extern unsigned char cRam006e768c;
extern int DAT_0070fca0;
extern int DAT_0070fcbc;
extern int sRam0070fd70;
extern int UNK_0063fe60;
int __cdecl FUN_0063f190(void*);
int __cdecl FUN_0063f1a0(void*);
int __cdecl FUN_00640AF0(int a1, int a2, int a3, int a4, int a5, int a6) {
  int bl = 0;
  if (cRam006e768c) {
    int key = a2;
    int* res;
    FUN_0063f190(&DAT_0070fca0);
    res = (int*)bsearch(&key, (void*)0x70f710, sRam0070fd70, 8, (int (__cdecl*)(const void*, const void*))&UNK_0063fe60);
    if (res) {
      int (__cdecl *func)(int, int, int, int, int, int) = (int (__cdecl *)(int, int, int, int, int, int))(*(res + 1));
      int rv = func(DAT_0070fcbc, a1, a2, a3, a4, a5);
      if (rv == 1) bl = 1;
    }
    FUN_0063f1a0(&DAT_0070fca0);
  }
  return bl;
}
