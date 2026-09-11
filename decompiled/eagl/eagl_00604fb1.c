/* spd-match: far pct=19.23 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00604FB1 */
#include <stdlib.h>
extern int __stdcall FUN_005f7186();
extern int __stdcall FUN_00604ee2(void*, void*, int);
extern int __stdcall FUN_005f74cf(int, int, int, int);
extern int __stdcall FUN_005f7709();
extern int __stdcall FUN_005f7760(int, int, int, int);
extern int __stdcall FUN_005f7a42();
extern int __stdcall FUN_005f7c63();
extern int __stdcall FUN_005f799b();
extern int DAT_006df588;
int __fastcall FUN_00604fb1(int ecx_val) {
  unsigned int ebp[0x3e];
  unsigned int *ebx = (unsigned int *)ecx_val;
  unsigned int limit = ebx[0x138/4];
  unsigned int idx = ebx[0x88/4];
  ebp[0x74/4] = 0; ebp[0x68/4] = 0;
  while (idx < limit) {
    unsigned int *ptr = *(unsigned int **)(ebx[0x144/4] + idx * 4);
    if (ptr && *ptr) {
      unsigned int val = *ptr & 0xffffff;
      unsigned int count = ptr[1] / val;
      if (count) {
        ebp[0x5c/4] = 0;
      }
    }
    idx++;
  }
  return 0;
}
