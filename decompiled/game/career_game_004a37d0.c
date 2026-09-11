/* Decompiled from Speed.exe @ 004a37d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a37d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined4 *local_8;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0xf0) < 1) {
    return;
  }
  local_8 = (undefined4 *)(param_1 + 0x170);
  piVar8 = (int *)(param_1 + 0x124);
LAB_004a3800:
  iVar1 = *piVar8;
  if (*(char *)(local_8 + -9) == '\0') {
    if (iVar1 != 0) {
      puVar7 = &DAT_006c7a3c;
      bVar4 = 0x49;
      iVar5 = -1;
      do {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        iVar5 = iVar5 * 0x21 + (uint)bVar4;
        bVar4 = puVar7[1];
        puVar7 = puVar7 + 1;
      } while (bVar4 != 0);
      for (iVar9 = *(int *)(iVar1 + 0x4c); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
        if (*(int *)(iVar9 + 0x30) == iVar5) goto LAB_004a388f;
      }
    }
  }
  else if (iVar1 != 0) {
    pcVar6 = "SetPlayerColor";
    iVar5 = -1;
    bVar4 = 0x53;
    do {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      iVar5 = iVar5 * 0x21 + (uint)bVar4;
      bVar4 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (bVar4 != 0);
    for (iVar9 = *(int *)(iVar1 + 0x4c); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      if (*(int *)(iVar9 + 0x30) == iVar5) goto LAB_004a388f;
    }
  }
  goto LAB_004a38aa;
LAB_004a388f:
  if (iVar9 != 0) {
    if (iVar9 != *(int *)(iVar1 + 0x54)) {
      *(int *)(iVar1 + 0x54) = iVar9;
      FUN_004ff030(iVar1);
      *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
    }
    *(undefined4 *)(iVar9 + 0x10) = 0;
  }
LAB_004a38aa:
  iVar1 = piVar8[-0xc];
  uVar2 = *local_8;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    puVar3 = DAT_00735710;
    bVar10 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar1 + 0x5c) = uVar2;
    if (bVar10) {
      (**(code **)*puVar3)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  local_4 = local_4 + 1;
  FUN_004f68a0(&DAT_006c7214,local_4);
  local_8 = local_8 + 0xc;
  piVar8 = piVar8 + 1;
  if (*(int *)(param_1 + 0xf0) <= local_4) {
    return;
  }
  goto LAB_004a3800;
}

