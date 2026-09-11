/* spd-match: far pct=7.92 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00501DA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fa8c0();
int __cdecl FUN_004fad70();
int __cdecl FUN_004fb9e0();
int __cdecl FUN_004fba30();
int __cdecl FUN_004fbaa0();
void __fastcall FUN_00501da0(int obj, undefined4 param_1, ushort *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;

  uint uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = *param_2;
  iVar3 = *(int *)(obj + 0xc);
  if (uVar2 < 0x6a4d) {
    if (uVar2 == 0x6a4c) {
      FUN_004fbaa0(0,0,*(undefined4 *)(param_2 + 2),*(undefined4 *)(iVar3 + 0x5c),
                   *(undefined4 *)(iVar3 + 0x60));
      return;
    }
    if (uVar2 == 0x444c) {
      FUN_004fa8c0(iVar3);
      return;
    }
    if (uVar2 == 0x4953) {
      FUN_004fad70(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
      return;
    }
    if (uVar2 == 0x6343) {
      FUN_004fb9e0(0,0,*(undefined4 *)(param_2 + 2),*(undefined4 *)(iVar3 + 0x5c),
                   *(undefined4 *)(iVar3 + 0x60));
      return;
    }
  }
  else if (uVar2 == 0x7343) {
    local_8 = *(undefined4 *)(param_2 + 2);
    local_4 = *(undefined4 *)(param_2 + 4);
    FUN_004fba30(0,0,&local_8,*(undefined4 *)(iVar3 + 0x5c),*(undefined4 *)(iVar3 + 0x60));
  }
  else {
    if (uVar2 == 0x744c) {
      uVar4 = *(uint *)(iVar3 + 100) & 1;
      *(uint *)(iVar3 + 100) = uVar4;
      *(uint *)(iVar3 + 100) = *(uint *)(param_2 + 2) & 0xfffffffe | uVar4;
      return;
    }
    if (uVar2 == 0x764c) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(iVar3 + 0x84) = uVar1;
      return;
    }
  }
  return;
}
