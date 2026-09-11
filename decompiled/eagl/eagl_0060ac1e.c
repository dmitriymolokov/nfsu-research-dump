/* spd-match: far pct=23.20 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060AC1E */
#include <windows.h>
extern int __cdecl FUN_0061663f();
extern int __cdecl FUN_0061a26f(int);
int __cdecl FUN_0060ac1e(int* esi) {
  int iVar3;
  int local_4, local_8, local_c, local_10;
  int* f98 = (int*)esi[0x26];
  int uVar1 = *(int*)(esi[5] + *f98 * 4);
  int uVar4 = *f98 & 0xffffff;
  void** vtbl = (void**)*esi;
  if ((esi[0xc] & 0xffff) == 0x104) {
    if ((iVar3 = FUN_0061a26f(0x40)) < 0) return iVar3;
    if ((iVar3 = ((int (__cdecl*)(int*, int, int*, int*))vtbl[0x5c/4])(esi, uVar1, &local_8, &local_c)) < 0) return iVar3;
    if ((iVar3 = ((int (__cdecl*)(int*, int, int, int*, int))vtbl[0x60/4])(esi, *(int*)(esi[0x26] + 0x10), uVar4, &local_10, local_c)) < 0) return iVar3;
    return 0;
  }
  return -1;
}
