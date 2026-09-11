/* spd-match: far pct=20.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004534F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00468820();
extern int _DAT_006cc7b8;
undefined4 __fastcall FUN_004534f0(int * obj)

{
  int iVar1;
  bool bVar2;

  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*(char *)(*(int *)(*obj + 0x3c) + 0x1c);
  bVar2 = false;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      if (bVar2) {
        return 300;
      }
      iVar3 = FUN_00468820(iVar5);
      iVar1 = *(int *)(*(int *)(iVar3 + 100) + 600);
      if (((*(char *)(iVar1 + 0x15) == '\x03') &&
          (ABS(*(float *)(*(int *)(iVar1 + 0x60) + 0x78)) < _DAT_006cc7b8)) ||
         ((iVar1 = *(int *)(*(int *)(iVar3 + 100) + 0x25c), *(char *)(iVar1 + 0x15) == '\x03' &&
          (ABS(*(float *)(*(int *)(iVar1 + 0x60) + 0x78)) < _DAT_006cc7b8)))) {
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
    if (bVar2) {
      return 300;
    }
  }
  return 0xffffffff;
}
