/* Decompiled from Speed.exe @ 0049ab60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049ab60(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int local_2c;
  int local_28;
  byte local_20;
  byte local_1f [31];
  
  if ((param_4 != 0) && (local_2c = 0, 0 < param_3)) {
    local_28 = param_4 + 0x586c;
    do {
      if (param_2 <= local_2c) {
        return;
      }
      iVar9 = local_2c + 1;
      FUN_004f68c0(0x20,"Lead%d",iVar9);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar6 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar3;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(iVar11);
        }
      }
      FUN_004f6910(iVar4);
      FUN_004f68c0(0x20,"Time%d",iVar9);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        iVar11 = iVar11 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(iVar11);
        }
      }
      FUN_004f6910(iVar4);
      FUN_004f68c0(0x20,"BestLap_%d",iVar9);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar6 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar3;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(iVar11);
        }
      }
      FUN_004f6910(iVar4);
      iVar11 = *(int *)(param_4 + 0x5864);
      if ((local_2c < 0) || (iVar4 = local_28, *(int *)(param_4 + 0x589c) <= local_2c)) {
        iVar4 = 0;
      }
      iVar7 = 0;
      if (0 < *(int *)(iVar11 + 0xb08)) {
        piVar12 = (int *)(iVar11 + 0x2c);
        do {
          if (*piVar12 == *(int *)(iVar4 + 4)) {
            puVar8 = (undefined4 *)(iVar7 * 0x15c + iVar11 + 0x28);
            goto LAB_0049ad81;
          }
          iVar7 = iVar7 + 1;
          piVar12 = piVar12 + 0x57;
        } while (iVar7 < *(int *)(iVar11 + 0xb08));
      }
      puVar8 = (undefined4 *)0x0;
LAB_0049ad81:
      uVar2 = *puVar8;
      if ((local_2c < 0) || (iVar4 = local_28, *(int *)(param_4 + 0x589c) <= local_2c)) {
        iVar4 = 0;
      }
      uVar10 = 0;
      if ((iVar4 != 0) && (iVar11 != 0)) {
        iVar11 = FUN_005a28f0();
        if (iVar11 == 0) {
          iVar11 = 1;
        }
        uVar10 = *(undefined4 *)(&DAT_006ee3c4 + iVar11 * 4);
      }
      uVar5 = FUN_005a29c0();
      FUN_004f68c0(0x20,"PointEarned_%d",uVar2);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        iVar11 = iVar11 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(iVar11);
        }
      }
      FUN_004f6970(iVar4);
      iVar11 = FUN_0059fb80();
      if (iVar11 == 0) {
        iVar11 = FUN_0059fb80();
      }
      FUN_004f67f0("%s %d",iVar11,uVar10);
      FUN_004f68c0(0x20,"TotalPoints_%d",uVar2);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar6 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar3;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(iVar11);
        }
      }
      FUN_004f6970(iVar4);
      iVar11 = FUN_0059fb80();
      if (iVar11 == 0) {
        iVar11 = FUN_0059fb80();
      }
      FUN_004f67f0("%s %d",iVar11,uVar5);
      local_28 = local_28 + 0xc;
      local_2c = iVar9;
    } while (iVar9 < param_3);
  }
  return;
}

