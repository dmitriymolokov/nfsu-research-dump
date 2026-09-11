/* Decompiled from Speed.exe @ 004c98e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x004c9a47) */

void FUN_004c98e0(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
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
    piVar7 = _malloc(0x14);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar1 = piVar7 + 2;
      *piVar1 = (int)piVar1;
      piVar7[3] = (int)piVar1;
      piVar7[4] = 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x90);
    *puVar3 = piVar7;
    *(int **)(param_1 + 0x90) = piVar7;
    piVar7[1] = (int)puVar3;
    *piVar7 = param_1 + 0x8c;
    if (*(int *)(param_1 + 0xa4) == 0) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x8c);
    }
    iVar4 = *(int *)(param_1 + 0x90);
    FUN_004f68c0(0x20,"Player_DATA_0%d",local_50);
    iVar11 = -1;
    pbVar10 = &local_2c;
    bVar6 = local_2c;
    while (bVar6 != 0) {
      if (('`' < (char)bVar6) && ((char)bVar6 < '{')) {
        bVar6 = bVar6 - 0x20;
      }
      iVar11 = iVar11 * 0x21 + (uint)bVar6;
      pbVar2 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar6 = *pbVar2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004c9a4b:
      if (DAT_0073578c == 0) goto LAB_004c9a63;
      iVar11 = FUN_004ef050(iVar11);
    }
    else {
      iVar8 = FUN_004f3f90(&DAT_00746104);
      if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) {
LAB_004c9a0b:
        if (iVar8 != 0) {
          local_4 = 0;
          FUN_004ffb00(iVar8);
          local_4 = 0xffffffff;
        }
        goto LAB_004c9a4b;
      }
      if (DAT_0073578c != 0) {
        iVar5 = *(int *)(DAT_0073578c + 8);
        if ((iVar5 == 0) ||
           ((iVar8 = FUN_004fd1e0(iVar5 + 0xdc), iVar8 == 0 &&
            (iVar8 = FUN_004fd1e0(iVar5 + 0xec), iVar8 == 0)))) goto LAB_004c9a4b;
        goto LAB_004c9a0b;
      }
LAB_004c9a63:
      iVar11 = 0;
    }
    piVar7 = _malloc(0xc);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7[2] = iVar11;
    }
    puVar3 = *(undefined4 **)(iVar4 + 0xc);
    *puVar3 = piVar7;
    *(int **)(iVar4 + 0xc) = piVar7;
    *piVar7 = iVar4 + 8;
    piVar7[1] = (int)puVar3;
    FUN_004f68c0(0x20,"HighLight0%d",local_50);
    iVar11 = -1;
    pbVar10 = &local_2c;
    bVar6 = local_2c;
    while (bVar6 != 0) {
      if (('`' < (char)bVar6) && ((char)bVar6 < '{')) {
        bVar6 = bVar6 - 0x20;
      }
      iVar11 = iVar11 * 0x21 + (uint)bVar6;
      pbVar2 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar6 = *pbVar2;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004c9b79:
      if (DAT_0073578c == 0) goto LAB_004c9b8f;
      uVar9 = FUN_004ef050(iVar11);
    }
    else {
      iVar8 = FUN_004f3f90(&DAT_00746104);
      if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) {
LAB_004c9b3b:
        local_4 = 1;
        FUN_004ffb00(iVar8);
        local_4 = 0xffffffff;
        goto LAB_004c9b79;
      }
      if (DAT_0073578c != 0) {
        iVar5 = *(int *)(DAT_0073578c + 8);
        if ((iVar5 == 0) ||
           ((iVar8 = FUN_004fd1e0(iVar5 + 0xdc), iVar8 == 0 &&
            (iVar8 = FUN_004fd1e0(iVar5 + 0xec), iVar8 == 0)))) goto LAB_004c9b79;
        goto LAB_004c9b3b;
      }
LAB_004c9b8f:
      uVar9 = 0;
    }
    *(undefined4 *)(iVar4 + 0x10) = uVar9;
    local_50 = local_50 + 1;
    local_48 = local_48 + -1;
    if (local_48 == 0) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

