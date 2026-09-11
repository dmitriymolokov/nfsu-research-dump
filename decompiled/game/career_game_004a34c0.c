/* Decompiled from Speed.exe @ 004a34c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a34c0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined4 *local_8;
  
  iVar12 = 0;
  if (*(int *)(param_1 + 0xf0) < 1) {
    return;
  }
  local_8 = (undefined4 *)(param_1 + 0x144);
  piVar4 = (int *)(param_1 + 0x124);
LAB_004a34f0:
  iVar10 = *piVar4;
  if (*(char *)(local_8 + 2) == '\0') {
    if (iVar10 != 0) {
      puVar9 = &DAT_006c7a3c;
      bVar2 = 0x49;
      iVar7 = -1;
      do {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar7 = iVar7 * 0x21 + (uint)bVar2;
        bVar2 = puVar9[1];
        puVar9 = puVar9 + 1;
      } while (bVar2 != 0);
      for (iVar11 = *(int *)(iVar10 + 0x4c); iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
        if (*(int *)(iVar11 + 0x30) == iVar7) goto LAB_004a357f;
      }
    }
  }
  else if (iVar10 != 0) {
    pcVar8 = "SetPlayerColor";
    iVar7 = -1;
    bVar2 = 0x53;
    do {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar7 = iVar7 * 0x21 + (uint)bVar2;
      bVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    } while (bVar2 != 0);
    for (iVar11 = *(int *)(iVar10 + 0x4c); iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
      if (*(int *)(iVar11 + 0x30) == iVar7) goto LAB_004a357f;
    }
  }
  goto LAB_004a359a;
LAB_004a357f:
  if (iVar11 != 0) {
    if (iVar11 != *(int *)(iVar10 + 0x54)) {
      *(int *)(iVar10 + 0x54) = iVar11;
      FUN_004ff030(iVar10);
      *(undefined4 *)(*(int *)(iVar10 + 0x54) + 0x10) = 0;
    }
    *(undefined4 *)(iVar11 + 0x10) = 0;
  }
LAB_004a359a:
  iVar10 = 0;
  cVar3 = FUN_0043a2e0();
  if (((cVar3 != '\0') && (piVar5 = (int *)FUN_0043b850(*local_8), piVar5 != (int *)0x0)) &&
     (((iVar7 = *piVar5, iVar7 == 3 || (((iVar7 == 4 || (iVar7 == 5)) || (iVar7 == 0)))) ||
      (iVar7 == 6)))) {
    if (piVar5[0xc] == 9) {
      iVar10 = 0x1ce129e0;
    }
    else if (piVar5[0xc] == 10) {
      iVar10 = -0x58248e81;
    }
    else {
      iVar10 = -0x2bd6cbb7;
    }
  }
  iVar12 = iVar12 + 1;
  FUN_004f68a0(&DAT_006c7214,iVar12);
  if (iVar10 == 0) {
    uVar6 = FUN_00674898();
    FUN_004f68a0(&DAT_006ca778,uVar6);
  }
  else {
    iVar7 = piVar4[-0xc];
    if (iVar7 != 0) {
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
      puVar1 = DAT_00735710;
      bVar13 = DAT_00735710 != (undefined4 *)0x0;
      *(int *)(iVar7 + 0x5c) = iVar10;
      if (bVar13) {
        (**(code **)*puVar1)(iVar7);
      }
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffffd | 0x400000;
    }
  }
  local_8 = local_8 + 0xc;
  piVar4 = piVar4 + 1;
  if (*(int *)(param_1 + 0xf0) <= iVar12) {
    return;
  }
  goto LAB_004a34f0;
}

