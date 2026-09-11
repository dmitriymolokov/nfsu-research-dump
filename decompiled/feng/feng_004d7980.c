/* spd-match: far pct=10.16 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D7980 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004d77a0();
int __cdecl FUN_004feb50();
int __cdecl FUN_004ff2f0();
int __cdecl FUN_00674898();
void __fastcall FUN_004d7980(int obj, undefined4 param_1, int param_2)

{
  int iVar1;
  char cVar2;

  undefined4 *puVar3;
  undefined4 uVar4;
  
  *(int *)(obj + 0x10) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(obj + 0x1c) = 0;
    *(undefined4 *)(obj + 0x18) = 0;
    *(undefined4 *)(obj + 0x14) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_004d77a0();
    *(undefined4 *)(obj + 0x20) = puVar3[3];
    *(undefined4 *)(obj + 0x1c) = puVar3[2];
    *(undefined4 *)(obj + 0x18) = puVar3[1];
    *(undefined4 *)(obj + 0x14) = *puVar3;
    uVar4 = FUN_00674898();
    *(undefined4 *)(obj + 0x1c) = uVar4;
    uVar4 = FUN_00674898();
    *(undefined4 *)(obj + 0x18) = uVar4;
    uVar4 = FUN_00674898();
    *(undefined4 *)(obj + 0x14) = uVar4;
  }
  iVar1 = *(int *)(obj + 0xc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) < 0x100)) {
    cVar2 = FUN_004feb50();
    if (cVar2 == '\0') {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    }
    FUN_004ff2f0(iVar1,0,0);
  }
  return;
}
