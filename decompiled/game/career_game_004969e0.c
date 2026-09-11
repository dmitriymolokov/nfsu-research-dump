/* Decompiled from Speed.exe @ 004969e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004969e0(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  char *pcVar8;
  int extraout_EDX;
  int iVar9;
  undefined4 uVar10;
  int extraout_EDX_00;
  int iVar11;
  int local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  byte local_20;
  byte local_1f [31];
  
  if (0 < *param_2) {
    local_24 = (int *)(param_1 + 0x58);
    local_28 = param_2 + 8;
    local_30 = 1;
    local_2c = param_2;
    do {
      local_2c = local_2c + 1;
      FUN_004f68c0(0x20,"Button%d",local_30);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar4 = local_20;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar6 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar4;
        pbVar6 = pbVar6 + 1;
        bVar4 = *pbVar1;
      }
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00496ac4:
        if ((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(iVar11), iVar5 != 0)) {
LAB_00496ade:
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar5 + 0x18) == 5) {
            uVar10 = *(undefined4 *)(iVar5 + 0x60);
            iVar11 = *(int *)(iVar5 + 0x5c);
            if (0 < iVar11) {
              do {
                FUN_004f6970(uVar10);
                uVar10 = *(undefined4 *)(extraout_EDX + 4);
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00496ab3:
          if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_00496ac4;
          goto LAB_00496ade;
        }
        if (DAT_0073578c != 0) {
          iVar9 = *(int *)(DAT_0073578c + 8);
          if ((iVar9 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar9 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar9 + 0xec), iVar5 == 0)))) goto LAB_00496ac4;
          goto LAB_00496ab3;
        }
      }
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar4 = local_20;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar6 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar4;
        pbVar6 = pbVar6 + 1;
        bVar4 = *pbVar1;
      }
      if ((((DAT_0073578c != 0) && (iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0)) &&
          (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) &&
         (iVar9 = *(int *)(iVar5 + 0x88), iVar9 != 0)) {
        piVar7 = *(int **)(iVar5 + 0x84);
        iVar5 = 0;
        do {
          if (*(int *)(*piVar7 + 0x10) == iVar11) {
            iVar5 = *piVar7;
          }
          piVar7 = piVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if (iVar5 != 0) {
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfbffffff;
        }
      }
      FUN_00416bb0(*local_2c);
      FUN_004f68c0(0x20,"Button_%d",local_30);
      iVar11 = -1;
      pbVar6 = &local_20;
      bVar4 = local_20;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        iVar11 = iVar11 * 0x21 + (uint)bVar4;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar4 = *pbVar1;
      }
      iVar5 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00496c4e:
        if ((iVar5 != 0) && (iVar9 = FUN_004ef050(iVar11), iVar9 != 0)) {
LAB_00496c61:
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar9 + 0x18) == 5) {
            uVar10 = *(undefined4 *)(iVar9 + 0x60);
            iVar11 = *(int *)(iVar9 + 0x5c);
            if (0 < iVar11) {
              do {
                FUN_004f6970(uVar10);
                uVar10 = *(undefined4 *)(extraout_EDX_00 + 4);
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
        }
      }
      else {
        iVar9 = FUN_004f3f90(&DAT_00746104);
        iVar5 = DAT_0073578c;
        if ((iVar9 != 0) && (iVar9 = *(int *)(iVar9 + 0x18), iVar9 != 0)) {
LAB_00496c37:
          if ((iVar9 == 0) || (iVar9 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar9 == 0))
          goto LAB_00496c4e;
          goto LAB_00496c61;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar9 = FUN_004fd1e0(iVar2 + 0xdc), iVar9 == 0 &&
              (iVar9 = FUN_004fd1e0(iVar2 + 0xec), iVar9 == 0)))) goto LAB_00496c4e;
          goto LAB_00496c37;
        }
      }
      *local_24 = *local_28;
      local_24[1] = local_28[1];
      local_24[2] = local_28[2];
      local_24[3] = local_28[3];
      local_28 = local_28 + 4;
      local_24 = local_24 + 4;
      bVar3 = local_30 < *param_2;
      local_30 = local_30 + 1;
    } while (bVar3);
  }
  if (3 < *param_2) {
    FUN_004f68c0(0x20,"Init0%d",*param_2);
    pcVar8 = "TopBacking";
    iVar11 = -1;
    bVar4 = 0x54;
    do {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      iVar11 = iVar11 * 0x21 + (uint)bVar4;
      bVar4 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    } while (bVar4 != 0);
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
      if (DAT_0073578c == 0) goto LAB_00496ddd;
      iVar5 = FUN_004ef050(iVar11);
    }
    if (iVar5 != 0) {
      iVar11 = -1;
      pbVar6 = &local_20;
      while (local_20 != 0) {
        if (('`' < (char)local_20) && ((char)local_20 < '{')) {
          local_20 = local_20 - 0x20;
        }
        iVar11 = iVar11 * 0x21 + (uint)local_20;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        local_20 = *pbVar1;
      }
      iVar9 = *(int *)(iVar5 + 0x4c);
      if (iVar9 != 0) {
        while (*(int *)(iVar9 + 0x30) != iVar11) {
          iVar9 = *(int *)(iVar9 + 4);
          if (iVar9 == 0) {
            *(int *)(param_1 + 0x4c) = *param_2;
            return;
          }
        }
        if (iVar9 != 0) {
          if (iVar9 != *(int *)(iVar5 + 0x54)) {
            *(int *)(iVar5 + 0x54) = iVar9;
            FUN_004ff030(iVar5);
            *(undefined4 *)(*(int *)(iVar5 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar9 + 0x10) = 0;
        }
      }
    }
  }
LAB_00496ddd:
  *(int *)(param_1 + 0x4c) = *param_2;
  return;
}

