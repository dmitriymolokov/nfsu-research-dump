/* spd-match: far pct=1.91 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00501AC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00504080();
int __cdecl FUN_005040e0();
int __cdecl FUN_00514410();
extern int DAT_00735710;
void __fastcall FUN_00501ac0(int obj, undefined4 param_1, ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;

  bool bVar5;
  
  puVar4 = DAT_00735710;
  uVar1 = *param_2;
  iVar2 = *(int *)(obj + 0xc);
  if (uVar1 < 0x6a54) {
    if (uVar1 == 0x6a53) {
      *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(param_2 + 2);
      return;
    }
    if (uVar1 == 0x4853) {
      uVar3 = *(undefined4 *)(param_2 + 2);
      bVar5 = DAT_00735710 != (undefined4 *)0x0;
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar2 + 0x5c) = uVar3;
      if (bVar5) {
        (**(code **)*puVar4)(iVar2);
        return;
      }
    }
    else if (uVar1 == 0x4c53) {
      if (*(char *)(obj + 9) != '\0') {
        FUN_00514410();
        return;
      }
    }
    else if (uVar1 == 0x6253) {
      FUN_005040e0();
      return;
    }
  }
  else if (uVar1 == 0x6c53) {
    *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(param_2 + 2);
  }
  else {
    if (uVar1 == 0x7453) {
      FUN_00504080();
      return;
    }
    if (uVar1 == 0x7753) {
      *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_2 + 2);
      return;
    }
  }
  return;
}
