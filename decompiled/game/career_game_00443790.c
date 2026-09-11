/* spd-match: far pct=7.81 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00443790 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004436d0();
int __fastcall FUN_00443790(int * obj, int param_1, undefined4 param_2, int param_3)

{
  undefined4 uVar1;

  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (obj != (int *)0x0) {
    iVar4 = *obj;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  while( true ) {
    if ((10 < iVar4) || (uVar3 = param_3 >> ((byte)iVar4 & 0x1f), uVar3 == 0)) {
      return 0;
    }
    if (((uVar3 & 1) != 0) && (iVar2 = FUN_004436d0(uVar1), iVar2 != 0)) break;
    iVar4 = iVar4 + 1;
  }
  return iVar2;
}
