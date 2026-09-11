/* Decompiled from Speed.exe @ 005a0dc0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a0dc0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int unaff_EDI;
  
  if (((param_1 < 0x100) && ((&DAT_00733ff8)[param_1] != 0)) ||
     ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
      ((puVar1 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar1 != (uint *)0x0 &&
       (param_1 == *puVar1)))))) {
    puVar6 = (undefined1 *)(param_1 + 0x34c + unaff_EDI);
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  if (((0xff < param_1) || (puVar1 = (uint *)(&DAT_00733ff8)[param_1], puVar1 == (uint *)0x0)) &&
     ((*(int *)(unaff_EDI + 0x88b0) == 0 ||
      ((puVar1 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar1 == (uint *)0x0 ||
       (param_1 != *puVar1)))))) {
    puVar1 = (uint *)0x0;
  }
  FUN_005a3f00(puVar1);
  iVar2 = FUN_00674898();
  *(int *)(unaff_EDI + 0x1374) = *(int *)(unaff_EDI + 0x1374) + iVar2;
  *(int *)(unaff_EDI + 0x1378) = *(int *)(unaff_EDI + 0x1378) + iVar2;
  *puVar6 = 2;
  iVar2 = 0;
  if (0 < (int)puVar1[0x1d]) {
    puVar7 = puVar1 + 0xe;
    do {
      if (*puVar7 == 1) {
        iVar3 = 0;
        do {
          if ((&DAT_00744ab0)[iVar3 * 2] == puVar7[1]) {
            iVar3 = *(int *)(&DAT_00744ab4 + iVar3 * 8);
            goto LAB_005a0e91;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x1b);
        iVar3 = 0;
LAB_005a0e91:
        FUN_0051ad30(puVar7[1],iVar3 * 0x454 + 0x13a8 + unaff_EDI);
      }
      iVar2 = iVar2 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar2 < (int)puVar1[0x1d]);
  }
  iVar2 = 0xb;
  pcVar4 = &DAT_0076323d;
  while ((*pcVar4 == '\0' || ((&DAT_0076777c)[iVar2] != '\0'))) {
    pcVar4 = pcVar4 + 0x454;
    iVar2 = iVar2 + 1;
    if (0x76777c < (int)pcVar4) goto LAB_005a0f27;
  }
  iVar2 = 0xb;
  pcVar4 = (char *)(unaff_EDI + 0x4344);
  do {
    if (((*pcVar4 == '\0') && (pcVar4[1] != '\0')) &&
       (*(char *)(iVar2 + 0x8884 + unaff_EDI) == '\0')) {
      uVar5 = FUN_004e93b0(pcVar4);
      FUN_0051ad30(uVar5);
    }
    iVar2 = iVar2 + 1;
    pcVar4 = pcVar4 + 0x454;
  } while (iVar2 < 0x1b);
LAB_005a0f27:
  if (param_1 == 0x71) {
    DAT_007677ac = 1;
  }
  if (*(undefined4 **)(unaff_EDI + 0x88b0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EDI + 0x88b0))(1);
  }
  *(undefined4 *)(unaff_EDI + 0x88b0) = 0;
  return;
}

