/* spd-match: far pct=6.92 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042AA70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00468820();
extern int _DAT_006cca04;
undefined4 __fastcall FUN_0042aa70(int obj)

{
  int iVar1;

  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < *(int *)(obj + 0x3cc)) {
    return 1;
  }
  iVar3 = (int)*(char *)(*(int *)(obj + 0x3c) + 0x1c);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = FUN_00468820(iVar4);
      iVar1 = *(int *)(*(int *)(iVar2 + 100) + 600);
      if (((*(char *)(iVar1 + 0x15) == '\x03') &&
          (_DAT_006cca04 < ABS(*(float *)(*(int *)(iVar1 + 0x60) + 0x78)))) ||
         ((iVar1 = *(int *)(*(int *)(iVar2 + 100) + 0x25c), *(char *)(iVar1 + 0x15) == '\x03' &&
          (_DAT_006cca04 < ABS(*(float *)(*(int *)(iVar1 + 0x60) + 0x78)))))) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return 0;
}
