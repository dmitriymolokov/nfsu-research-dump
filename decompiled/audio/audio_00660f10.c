/* spd-match: far pct=2.37 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

uint FUN_00660f10(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = param_4;
  puVar8 = param_3;
  iVar3 = param_2;
  param_3 = (undefined4 *)param_2;
  if (*(int *)(param_1 + 0x1c) != 0x10000) {
    uVar5 = *(int *)(param_1 + 0x1c) * param_2 + *(int *)(param_1 + 0x20) >> 0x10;
    if (*(short *)(param_1 + 0x28) == 0) {
      uVar5 = uVar5 + (4 - *(short *)(param_1 + 0x2a));
      iVar6 = 0;
      if (0 < *(short *)(param_1 + 0x2a)) {
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(short *)(param_1 + 0x2a));
      }
    }
    else {
      *puVar8 = *(undefined4 *)(param_1 + 0x2c);
      puVar8[1] = *(undefined4 *)(param_1 + 0x30);
      puVar8[2] = *(undefined4 *)(param_1 + 0x34);
      puVar8[3] = *(undefined4 *)(param_1 + 0x38);
      puVar8 = puVar8 + 4;
    }
    if (((0 < (int)uVar5) && (puVar7 = *(undefined4 **)(param_1 + 8), puVar7 != (undefined4 *)0x0))
       && (iVar6 = (*(code *)*puVar7)(puVar7,uVar5,param_4,puVar8,*(undefined1 *)(param_1 + 0x1a)),
          iVar6 < 1)) {
      if (*(short *)(param_1 + 0x28) == 0) {
        *(undefined2 *)(param_1 + 0x28) = 1;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      return iVar6;
    }
    if (*(short *)(param_1 + 0x28) == 0) {
      *(undefined2 *)(param_1 + 0x28) = 1;
    }
    else {
      puVar8 = puVar8 + *(short *)(param_1 + 0x2a) + -4;
    }
    param_2 = *(int *)(param_1 + 0x20) << 0x10;
    param_3 = (undefined4 *)0x0;
    (**(code **)(param_1 + 0x24))
              (iVar3,puVar8,param_4,&param_3,&param_2,*(uint *)(param_1 + 0x1c) >> 0x10,
               *(uint *)(param_1 + 0x1c) << 0x10);
    *(uint *)(param_1 + 0x20) = (int)param_3 << 0x10 | param_2 >> 0x10;
    iVar6 = ((uint)param_3 & 0xffff) - (int)*(short *)(param_1 + 0x2a);
    *(undefined4 *)(param_1 + 0x2c) = puVar8[iVar6];
    *(undefined4 *)(param_1 + 0x30) = puVar8[iVar6 + 1];
    *(undefined4 *)(param_1 + 0x34) = puVar8[iVar6 + 2];
    uVar2 = puVar8[iVar6 + 3];
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    return iVar3;
  }
  param_4 = (undefined4 *)param_2;
  if (*(short *)(param_1 + 0x28) == 0) {
    iVar6 = (param_2 - (int)*(short *)(param_1 + 0x2a)) + 4;
  }
  else {
    iVar4 = 0;
    iVar6 = param_2;
    if (-(int)*(short *)(param_1 + 0x2a) != -4 && -1 < -(int)*(short *)(param_1 + 0x2a) + 4) {
      do {
        *puVar7 = *(undefined4 *)(param_1 + 0x2c + (*(short *)(param_1 + 0x2a) + iVar4) * 4);
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4 - *(short *)(param_1 + 0x2a));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    param_2 = (*(code *)*puVar1)(puVar1,iVar6,puVar8,puVar7,*(undefined1 *)(param_1 + 0x1a));
  }
  if (0 < (int)param_2) {
    if (*(short *)(param_1 + 0x28) == 0) {
      iVar6 = iVar3 - *(short *)(param_1 + 0x2a);
      *(undefined2 *)(param_1 + 0x28) = 1;
    }
    else {
      iVar6 = iVar3 + -4;
    }
    puVar7 = puVar7 + iVar6;
    *(undefined4 *)(param_1 + 0x2c) = *puVar7;
    *(undefined4 *)(param_1 + 0x30) = puVar7[1];
    *(undefined4 *)(param_1 + 0x34) = puVar7[2];
    *(undefined4 *)(param_1 + 0x38) = puVar7[3];
    return iVar3;
  }
  if (*(short *)(param_1 + 0x28) == 0) {
    *(undefined2 *)(param_1 + 0x28) = 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_2;
}
