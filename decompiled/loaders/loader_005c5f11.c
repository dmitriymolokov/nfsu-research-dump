/* Decompiled from Speed.exe @ 005c5f11 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c5f11(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  char *local_4;
  
  piVar1 = (int *)(param_1 + 0x60);
  iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),piVar1);
  if (iVar2 < 0) goto LAB_005c6023;
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    iVar3 = 2;
    bVar6 = true;
    pcVar4 = (char *)(param_1 + 0x68);
    pcVar5 = "(";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) goto LAB_005c600d;
    iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),piVar1);
    if (iVar2 < 0) goto LAB_005c6023;
    if (*piVar1 == 9) {
      local_4 = *(char **)(param_1 + 0x68);
      iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),piVar1);
      if (iVar2 < 0) goto LAB_005c6023;
    }
    else {
      local_4 = (char *)0x0;
    }
    iVar2 = *piVar1;
    if (iVar2 != 1) goto LAB_005c600d;
    iVar3 = 2;
    bVar6 = true;
    pcVar4 = (char *)(param_1 + 0x68);
    pcVar5 = ")";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) goto LAB_005c600d;
    iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),piVar1);
    if (iVar2 < 0) goto LAB_005c6023;
    iVar2 = *piVar1;
    if ((iVar2 != 0xc) && (iVar2 != 0xd)) goto LAB_005c600d;
    if (local_4 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      iVar3 = 10;
      bVar6 = true;
      pcVar4 = local_4;
      pcVar5 = "row_major";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        *(undefined4 *)(param_1 + 0x24) = 0x400;
      }
      else {
        iVar3 = 0xd;
        bVar6 = true;
        pcVar4 = "column_major";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *local_4 == *pcVar4;
          local_4 = local_4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar6);
        if (!bVar6) goto LAB_005c600d;
        *(undefined4 *)(param_1 + 0x24) = 0x800;
      }
    }
  }
  else {
LAB_005c600d:
    if ((iVar2 != 0xc) && (iVar2 != 0xd)) {
      FUN_005b1a6c();
    }
  }
  iVar2 = 0;
LAB_005c6023:
  *(undefined4 *)(param_1 + 0x28) = 1;
  return iVar2;
}

