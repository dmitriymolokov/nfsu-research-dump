/* spd-match: far pct=15.32 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00495F00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004ffb70();
extern int DAT_00735710;
extern int DAT_0073578c;
void __fastcall FUN_00495f00(int val, undefined4 param_1)

{
  undefined4 *puVar1;

  int iVar2;
  undefined4 unaff_EDI;
  bool bVar3;
  
  if (((val == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar2 = FUN_004ef050(unaff_EDI);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 2)) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar3 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar2 + 0x5c) = param_1;
    if (bVar3) {
      (**(code **)*puVar1)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}
