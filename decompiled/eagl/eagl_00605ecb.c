/* spd-match: far pct=20.00 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00605ECB */
#include "ghidra_compat.h"
int __cdecl FUN_005f7186(int);
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760(int, int, int, int);
int __cdecl FUN_005f7a42(int);
int __cdecl FUN_006139d8(int, int*, void*, int*, int*, void*, int);
extern int DAT_006a4048;
extern int DAT_006a40a8;
int* FUN_00605ecb(int* ecx) {
  unsigned char stack_pad[0x108];
  int* edi = ecx;
  int* eax_ptr = (int*)edi[0x26];
  int esi = (*eax_ptr) & 0xffffff;
  int local_10 = 0;
  int local_28 = 0;
  int local_24 = 1;
  int local_20 = 2;
  int local_1c = 3;
  int local_14 = 0;
  int* p_local_14 = &local_14;
  int* p_local_10 = &local_10;
  int i = FUN_006139d8((int)eax_ptr, &DAT_006a4048, (int*)stack_pad, p_local_14, (int*)(stack_pad+0x30), p_local_10, esi);
  if (i != 0) return 0;
  return 0;
}
