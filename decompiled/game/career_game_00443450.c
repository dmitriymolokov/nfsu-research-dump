/* spd-match: far pct=7.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00443450 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004432a0();
void __fastcall FUN_00443450(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)

{

  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  *(undefined4 *)(obj + 8) = param_1;
  *(undefined4 *)(obj + 0xc) = param_2;
  *(undefined4 *)(obj + 0x10) = param_4;
  *(undefined4 *)(obj + 0x14) = param_3;
  *(undefined4 *)(obj + 0x18) = param_6;
  iVar1 = 0;
  *(undefined4 *)(obj + 0x1c) = param_5;
  iVar3 = 0;
  piVar4 = (int *)(obj + 0x20);
  do {
    if (iVar1 < *(int *)(obj + 0x18)) {
      piVar2 = (int *)(iVar1 * 0xb4 + *(int *)(obj + 0x1c));
      do {
        if (iVar3 <= *piVar2) break;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x2d;
      } while (iVar1 < *(int *)(obj + 0x18));
    }
    *piVar4 = iVar1;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    if (10 < iVar3) {
      *(undefined4 *)(obj + 0x4c) = *(undefined4 *)(obj + 0x18);
      FUN_004432a0(obj);
      return;
    }
  } while( true );
}
