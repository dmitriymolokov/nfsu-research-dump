/* spd-match: far pct=9.09 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00501B80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fd3d0();
int __cdecl FUN_004fd5e0();
int __cdecl FUN_004fd770();
int __cdecl FUN_004fd7c0();
int __cdecl FUN_004fd840();
int __cdecl FUN_004ff690();
int __cdecl FUN_004ff6c0();
int __cdecl FUN_004ff6f0();
int __cdecl FUN_00500870();
int __cdecl FUN_005008a0();
int __cdecl FUN_005008d0();
int __cdecl FUN_00503f30();
void __fastcall FUN_00501b80(ushort * obj, int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;

  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar4 = *obj;
  if (uVar4 < 0x724d) {
    if (uVar4 == 0x724c) {
      iVar6 = *(int *)(param_1 + 0x28) + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      puVar2 = (undefined4 *)(*(int *)(iVar5 + 0x78) + iVar6 * 0xc);
      *puVar2 = *(undefined4 *)(obj + 2);
      puVar2[2] = *(undefined4 *)(obj + 4);
      return;
    }
    if (uVar4 < 0x644d) {
      if (uVar4 == 0x644c) {
        FUN_004fd3d0(iVar5,*(undefined4 *)(obj + 2));
        FUN_004fd5e0(iVar5,*(undefined4 *)(obj + 4));
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
        FUN_004ff690();
        FUN_004ff6c0();
        return;
      }
      if (uVar4 == 0x5443) {
        FUN_004fd770();
        return;
      }
      if (uVar4 == 0x6343) {
        piVar1 = (int *)(param_1 + 0x2c);
        *piVar1 = *piVar1 + 1;
        if (*piVar1 != 0) {
          FUN_004fd840();
        }
        FUN_00503f30(*(undefined4 *)(obj + 2));
        FUN_00500870();
        return;
      }
      if (uVar4 == 0x634c) {
        iVar6 = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x24) = iVar6;
        puVar2 = (undefined4 *)(*(int *)(iVar5 + 0x74) + iVar6 * 0xc);
        *puVar2 = *(undefined4 *)(obj + 2);
        puVar2[2] = *(undefined4 *)(obj + 4);
        return;
      }
    }
    else {
      if (uVar4 == 0x6943) {
        FUN_005008d0();
        return;
      }
      if (uVar4 == 0x7243) {
        FUN_004ff6f0(0,0,*(undefined4 *)(obj + 2));
        return;
      }
    }
  }
  else if (uVar4 < 0x7444) {
    if (uVar4 == 0x7443) {
      FUN_004fd7c0();
      return;
    }
    if (uVar4 == 0x7343) {
      FUN_005008a0();
      return;
    }
    if (uVar4 == 0x734c) {
      uVar3 = *(undefined4 *)(obj + 4);
      *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(obj + 2);
      *(undefined4 *)(iVar5 + 0x80) = uVar3;
      return;
    }
  }
  else if (uVar4 == 0x764c) {
    uVar3 = *(undefined4 *)(obj + 4);
    *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(obj + 2);
    *(undefined4 *)(iVar5 + 0x68) = uVar3;
  }
  else if (uVar4 == 0x774c) {
    if (*(int *)(obj + 2) != 0) {
      *(uint *)(iVar5 + 0x58) = *(uint *)(iVar5 + 0x58) & 0xfffffffb;
      return;
    }
    *(uint *)(iVar5 + 0x58) = *(uint *)(iVar5 + 0x58) | 4;
    return;
  }
  return;
}
