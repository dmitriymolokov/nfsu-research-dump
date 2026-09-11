/* Decompiled from Speed.exe @ 00512690 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00512690(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_24 [8];
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar1 + 0x18));
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = FUN_0059fb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0059fb80();
  }
  puVar5 = local_24;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar4 = 0;
    piVar3 = &DAT_007066a0;
    do {
      if (*piVar3 == DAT_00735748) {
        puVar5 = &DAT_007066a0 + iVar4 * 8;
        goto LAB_00512737;
      }
      piVar3 = piVar3 + 8;
      iVar4 = iVar4 + 1;
    } while ((int)piVar3 < 0x706780);
    puVar5 = (undefined4 *)0x0;
LAB_00512737:
    iVar4 = *(int *)(iVar1 + 0x10);
    if (*(char *)(iVar4 + 0xc) == '\0') {
      iVar4 = *(int *)(iVar4 + 0x18);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x14);
    }
    if ((&DAT_00745b6c)[puVar5[3] + DAT_00735750] == iVar4) {
      FUN_00565da0(" (%s)",iVar2);
      puVar5 = local_24;
    }
    else {
      puVar5 = (undefined4 *)&DAT_006b9172;
    }
    FUN_004f6850(&DAT_006cc578,*(undefined4 *)(iVar1 + 0xc),puVar5);
  }
  else {
    FUN_00495f00(*(int *)(iVar1 + 0x14));
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_005127c3:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x5b32ee7c);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_005127c3;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_005127c3;
  }
  FUN_004f6910(iVar2);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_0051280d:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xaab7ee36);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0051280d;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0051280d;
  }
  FUN_004f6910(iVar2);
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (((iVar2 == 0) || (iVar4 = *(int *)(iVar2 + 0x18), iVar4 == 0)) ||
       (piVar3 = *(int **)(iVar2 + 0x14), piVar3 == (int *)0x0)) goto LAB_0051288e;
    uVar6 = 0x4c71900a;
  }
  else {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (((iVar2 == 0) || (iVar4 = *(int *)(iVar2 + 0x18), iVar4 == 0)) ||
       (piVar3 = *(int **)(iVar2 + 0x14), piVar3 == (int *)0x0)) goto LAB_0051288e;
    uVar6 = 0x4c71910b;
  }
  (**(code **)(*piVar3 + 8))(uVar6,0,0,iVar4);
LAB_0051288e:
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(*(int *)(iVar1 + 0x10) + 0xc) == '\0') {
      uVar6 = 0x4c75717a;
    }
    else {
      uVar6 = 0x54c56cbe;
    }
    FUN_004c96c0(uVar6);
    if (*(char *)(*(int *)(iVar1 + 0x10) + 0xc) != '\0') {
      FUN_00495f00(0xa39f11f8);
      return;
    }
    FUN_00495f00(0x3cc939b4);
  }
  return;
}

