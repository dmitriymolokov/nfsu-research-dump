/* spd-match: far pct=10.00 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00416BB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
extern int DAT_00735710;
extern int DAT_0073578c;
void __fastcall FUN_00416bb0(int val, undefined4 param_1)

{
  undefined4 *puVar1;

  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = FUN_004fd230();
  if (((val == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar3 = FUN_004ef050(uVar2);
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 2)) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar3 + 0x5c) = param_1;
    if (bVar4) {
      (**(code **)*puVar1)(iVar3);
    }
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}
