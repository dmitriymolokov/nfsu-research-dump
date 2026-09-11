/* spd-match: far pct=3.18 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_0064dee0();
int __cdecl FUN_0064df30();
int __cdecl FUN_00652800();
int __cdecl FUN_006529a0();
int __cdecl FUN_00652a00();
int __cdecl FUN_00652aa0();
extern code *DAT_00713c98;
extern int DAT_00713ee4;

int FUN_0064e160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  if (DAT_00713c98 != (code *)0x0) {
    (*DAT_00713c98)();
  }
  uVar1 = FUN_0064dee0();
  param_1[0xf] = uVar1;
  if (((param_1[8] == 0) ||
      (iVar2 = FUN_00652aa0(param_1 + 0x10,(undefined1 *)(param_1[8] + (int)param_1)),
      local_c = iVar2, -1 < iVar2)) &&
     ((param_1[10] == 0 ||
      (iVar2 = FUN_00652aa0(param_1 + 0x11,(undefined1 *)(param_1[10] + (int)param_1)),
      local_8 = iVar2, -1 < iVar2)))) {
    iVar2 = param_1[6];
    if (local_c == 7) {
      iVar3 = FUN_00652a00(param_1[0x10]);
    }
    else {
      iVar3 = param_1[9];
    }
    if (local_8 == 7) {
      iVar4 = FUN_00652a00(param_1[0x11]);
    }
    else {
      iVar4 = param_1[0xb];
    }
    puVar5 = (*(undefined4 * (*)())param_4)(param_1,iVar4 + iVar2 + iVar3,param_1[5]);
    if (puVar5 != (undefined4 *)0x0) {
      puVar8 = param_1;
      if (puVar5 != param_1) {
        uVar7 = param_1[6];
        puVar9 = puVar5;
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar8 = puVar5;
        if (local_c != 0) {
          FUN_006529a0((undefined1 *)(puVar5[6] + (int)puVar5),puVar5[0x10]);
        }
      }
      if ((0 < local_8) && ((puVar5 != param_1 || (local_c == 7)))) {
        FUN_006529a0((undefined1 *)((int)puVar5 + iVar2 + iVar3),puVar8[0x11]);
      }
      FUN_0064df30(puVar8,(undefined1 *)(puVar8[0xc] + (int)param_1),param_2,param_3);
      return puVar8[0xf];
    }
    iVar2 = -6;
  }
  if (0 < local_c) {
    FUN_00652800(param_1[0x10]);
  }
  if (0 < local_8) {
    FUN_00652800(param_1[0x11]);
  }
  return iVar2;
}
