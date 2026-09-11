/* Decompiled from Speed.exe @ 004a3690 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a3690(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_4;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0xf0) < 1) {
    return;
  }
  local_4 = param_1 + 0x14d;
  piVar7 = (int *)(param_1 + 0x124);
LAB_004a36c0:
  iVar1 = *piVar7;
  if (*(char *)(local_4 + -1) == '\0') {
    if (iVar1 != 0) {
      puVar5 = &DAT_006c7a3c;
      bVar2 = 0x49;
      iVar3 = -1;
      do {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar3 = iVar3 * 0x21 + (uint)bVar2;
        bVar2 = puVar5[1];
        puVar5 = puVar5 + 1;
      } while (bVar2 != 0);
      for (iVar8 = *(int *)(iVar1 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        if (*(int *)(iVar8 + 0x30) == iVar3) goto LAB_004a374f;
      }
    }
  }
  else if (iVar1 != 0) {
    pcVar4 = "SetPlayerColor";
    iVar3 = -1;
    bVar2 = 0x53;
    do {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      bVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (bVar2 != 0);
    for (iVar8 = *(int *)(iVar1 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
      if (*(int *)(iVar8 + 0x30) == iVar3) goto LAB_004a374f;
    }
  }
  goto LAB_004a3772;
LAB_004a374f:
  if (iVar8 != 0) {
    if (iVar8 != *(int *)(iVar1 + 0x54)) {
      *(int *)(iVar1 + 0x54) = iVar8;
      FUN_004ff030(iVar1);
      *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
    }
    *(undefined4 *)(iVar8 + 0x10) = 0;
  }
LAB_004a3772:
  FUN_004f68a0(&DAT_006cc568,local_4);
  iVar6 = iVar6 + 1;
  FUN_004f68a0(&DAT_006c7214,iVar6);
  local_4 = local_4 + 0x30;
  piVar7 = piVar7 + 1;
  if (*(int *)(param_1 + 0xf0) <= iVar6) {
    return;
  }
  goto LAB_004a36c0;
}

