/* Decompiled from Speed.exe @ 004d2f60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d2f60(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar2 = FUN_0059fb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0059fb80();
  }
  FUN_004f6850(iVar2);
  FUN_004f68c0(0x20,"OptionName_%d",1);
  FUN_00414a60();
  iVar2 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar8 = 1;
    FUN_004fd230(1);
    FUN_004f5f80(iVar2,uVar8);
  }
  FUN_004f68c0(0x20,"OptionNametext_%d",1);
  FUN_00414a60();
  FUN_004d1600(2,1,0);
  FUN_004d16d0(param_1,0);
  *(undefined4 *)(param_1 + 0x3d0) = 1;
  *(undefined1 **)(param_1 + 0x40) = &LAB_004d0350;
  *(undefined4 *)(param_1 + 0x3c8) = 2;
  *(undefined1 **)(param_1 + 0x44) = &LAB_004d02c0;
  FUN_004d0210(param_1);
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x42c,*(undefined4 *)(param_1 + 0x3d0));
  iVar2 = FUN_0059fb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar2);
  *(undefined1 *)(param_1 + 0x68) = 0;
  piVar3 = &DAT_0071d89c;
  do {
    if (*piVar3 != 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x71d8a4);
  if (*(char *)(param_1 + 0x68) == '\0') {
    pcVar5 = "OptionName_2";
    iVar2 = -1;
    bVar1 = 0x4f;
    do {
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 - 0x20;
      }
      uVar6 = (uint)bVar1;
      bVar1 = pcVar5[1];
      iVar2 = iVar2 * 0x21 + uVar6;
      pcVar5 = pcVar5 + 1;
    } while (bVar1 != 0);
    if ((((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
        (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) &&
       (iVar7 = *(int *)(iVar4 + 0x88), iVar7 != 0)) {
      piVar3 = *(int **)(iVar4 + 0x84);
      iVar4 = 0;
      do {
        if (*(int *)(*piVar3 + 0x10) == iVar2) {
          iVar4 = *piVar3;
        }
        piVar3 = piVar3 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x4000000;
      }
    }
    pcVar5 = "OptionNametext_2";
    iVar2 = -1;
    bVar1 = 0x4f;
    do {
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 - 0x20;
      }
      iVar2 = iVar2 * 0x21 + (uint)bVar1;
      bVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    } while (bVar1 != 0);
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
        (iVar4 = FUN_004ffb70(), iVar4 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(iVar2);
    }
    FUN_004f75b0(0xff606060);
    pcVar5 = "OptionData_2";
    iVar2 = -1;
    bVar1 = 0x4f;
    do {
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 - 0x20;
      }
      uVar6 = (uint)bVar1;
      bVar1 = pcVar5[1];
      iVar2 = iVar2 * 0x21 + uVar6;
      pcVar5 = pcVar5 + 1;
    } while (bVar1 != 0);
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
        (iVar4 = FUN_004ffb70(), iVar4 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(iVar2);
    }
    FUN_004f75b0(0xff606060);
    pcVar5 = "LeftArrow_2";
    iVar2 = -1;
    bVar1 = 0x4c;
    do {
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 - 0x20;
      }
      iVar2 = iVar2 * 0x21 + (uint)bVar1;
      bVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    } while (bVar1 != 0);
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
        (iVar4 = FUN_004ffb70(), iVar4 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(iVar2);
    }
    FUN_004f75b0(0xff606060);
    pcVar5 = "RightArrow_2";
    iVar2 = -1;
    bVar1 = 0x52;
    do {
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 - 0x20;
      }
      uVar6 = (uint)bVar1;
      bVar1 = pcVar5[1];
      iVar2 = iVar2 * 0x21 + uVar6;
      pcVar5 = pcVar5 + 1;
    } while (bVar1 != 0);
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
        (iVar4 = FUN_004ffb70(), iVar4 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(iVar2);
    }
    FUN_004f75b0(0xff606060);
  }
  return;
}

