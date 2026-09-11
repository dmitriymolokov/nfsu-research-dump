/* spd-match: far pct=24.76 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004CE690 */
#include "ghidra_compat.h"
extern int __stdcall FUN_004ef050(int, int);
extern int __stdcall FUN_004f65d0(int);
extern int __stdcall FUN_004fd230();
extern int __stdcall FUN_004ffb70(int, int);
extern int DAT_0073578c;
void __fastcall FUN_004ce690(int ecx_param, int edx_param, int stack_param) {
  int iVar1 = FUN_004fd230();
  int iVar2 = 0;
  if (ecx_param != 0) {
    iVar2 = FUN_004f65d0(ecx_param);
    if (iVar2 != 0 && FUN_004ffb70(iVar1, iVar2) != 0) goto label_copy;
  }
  if (DAT_0073578c == 0) return;
  iVar2 = FUN_004ef050(ecx_param, iVar1);
  if (iVar2 == 0) return;
label_copy:
  {
    char *dst = *(char **)(iVar2 + 0x24);
    int src = stack_param;
    int count = 0x100;
    int offset = src - (int)dst;
    do {
      char val = *(char *)(dst + offset);
      *dst = val;
      if (val == 0) break;
      dst++;
    } while (--count != 0);
    *(unsigned int *)(iVar2 + 0x1c) |= 0x400000;
  }
}
