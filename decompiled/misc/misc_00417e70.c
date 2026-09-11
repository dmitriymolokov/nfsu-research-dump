/* Decompiled from Speed.exe @ 00417e70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00417fd7) */

void FUN_00417e70(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_50;
  int local_48;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687510;
  local_c = ExceptionList;
  local_50 = 1;
  local_48 = 5;
  ExceptionList = &local_c;
  do {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar1 = piVar5 + 2;
      *piVar1 = (int)piVar1;
      piVar5[3] = (int)piVar1;
      piVar5[4] = 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x270);
    *puVar3 = piVar5;
    *(int **)(param_1 + 0x270) = piVar5;
    piVar5[1] = (int)puVar3;
    *piVar5 = param_1 + 0x26c;
    if (*(int *)(param_1 + 0x284) == 0) {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x26c);
    }
    iVar10 = *(int *)(param_1 + 0x270);
    FUN_004f68c0(0x20,"Player_DATA_0%d",local_50);
    iVar9 = -1;
    pbVar8 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar2 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar4 = *pbVar2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00417fdb:
      if (DAT_0073578c == 0) goto LAB_00417ff3;
      iVar9 = FUN_004ef050(iVar9);
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_00417f9b:
        if (iVar6 != 0) {
          local_4 = 0;
          FUN_004ffb00(iVar6);
          local_4 = 0xffffffff;
        }
        goto LAB_00417fdb;
      }
      if (DAT_0073578c != 0) {
        iVar11 = *(int *)(DAT_0073578c + 8);
        if ((iVar11 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar11 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar11 + 0xec), iVar6 == 0)))) goto LAB_00417fdb;
        goto LAB_00417f9b;
      }
LAB_00417ff3:
      iVar9 = 0;
    }
    piVar5 = _malloc(0xc);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar9;
    }
    puVar3 = *(undefined4 **)(iVar10 + 0xc);
    *puVar3 = piVar5;
    *(int **)(iVar10 + 0xc) = piVar5;
    *piVar5 = iVar10 + 8;
    piVar5[1] = (int)puVar3;
    FUN_004f68c0(0x20,"menubar%d",local_50);
    iVar9 = -1;
    pbVar8 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar2 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar4 = *pbVar2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00418109:
      if (DAT_0073578c == 0) goto LAB_0041811f;
      uVar7 = FUN_004ef050(iVar9);
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004180cb:
        local_4 = 1;
        FUN_004ffb00(iVar6);
        local_4 = 0xffffffff;
        goto LAB_00418109;
      }
      if (DAT_0073578c != 0) {
        iVar11 = *(int *)(DAT_0073578c + 8);
        if ((iVar11 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar11 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar11 + 0xec), iVar6 == 0)))) goto LAB_00418109;
        goto LAB_004180cb;
      }
LAB_0041811f:
      uVar7 = 0;
    }
    *(undefined4 *)(iVar10 + 0x10) = uVar7;
    iVar10 = -1;
    pbVar8 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar2 = pbVar8 + 1;
      iVar10 = iVar10 * 0x21 + (uint)bVar4;
      pbVar8 = pbVar8 + 1;
      bVar4 = *pbVar2;
    }
    if (((DAT_0073578c != 0) && (iVar9 = FUN_004f3f90(&DAT_00746104), iVar9 != 0)) &&
       (iVar9 = *(int *)(iVar9 + 0x18), iVar9 != 0)) {
      iVar6 = *(int *)(iVar9 + 0x88);
      iVar11 = 0;
      if (iVar6 != 0) {
        piVar5 = *(int **)(iVar9 + 0x84);
        do {
          if (*(int *)(*piVar5 + 0x10) == iVar10) {
            iVar11 = *piVar5;
          }
          piVar5 = piVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (iVar11 != 0) {
          *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) | 0x4000000;
        }
      }
    }
    local_50 = local_50 + 1;
    local_48 = local_48 + -1;
    if (local_48 == 0) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

