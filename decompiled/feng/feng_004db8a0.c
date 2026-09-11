/* Decompiled from Speed.exe @ 004db8a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004db8a0(void)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int unaff_EBX;
  undefined *puVar9;
  
  iVar4 = FUN_004dbad0();
  puVar9 = &DAT_006c7a38;
  iVar7 = -1;
  uVar5 = 0x52;
  do {
    iVar7 = iVar7 * 0x21 + uVar5;
    pbVar1 = puVar9 + 1;
    uVar5 = (uint)*pbVar1;
    puVar9 = puVar9 + 1;
  } while (*pbVar1 != 0);
  piVar6 = *(int **)(*(int *)(iVar4 + 0x10) + 0x14);
  iVar4 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0x1c);
  piVar2 = piVar6;
  if (piVar6 != (int *)0x0) {
    for (; ((piVar2 < piVar6 + iVar4 * 2 && (iVar7 != 0)) && (*piVar2 != iVar7));
        piVar2 = piVar2 + 2) {
    }
  }
  pcVar8 = "GREEN";
  iVar7 = -1;
  uVar5 = 0x47;
  do {
    iVar7 = iVar7 * 0x21 + uVar5;
    pbVar1 = (byte *)(pcVar8 + 1);
    uVar5 = (uint)*pbVar1;
    pcVar8 = pcVar8 + 1;
  } while (*pbVar1 != 0);
  piVar2 = piVar6;
  if (piVar6 != (int *)0x0) {
    for (; ((piVar2 < piVar6 + iVar4 * 2 && (iVar7 != 0)) && (*piVar2 != iVar7));
        piVar2 = piVar2 + 2) {
    }
  }
  puVar9 = &DAT_006c7a28;
  iVar7 = -1;
  uVar5 = 0x42;
  do {
    iVar7 = iVar7 * 0x21 + uVar5;
    pbVar1 = puVar9 + 1;
    uVar5 = (uint)*pbVar1;
    puVar9 = puVar9 + 1;
  } while (*pbVar1 != 0);
  piVar2 = piVar6 + iVar4 * 2;
  if (piVar6 != (int *)0x0) {
    for (; ((piVar6 < piVar2 && (iVar7 != 0)) && (*piVar6 != iVar7)); piVar6 = piVar6 + 2) {
    }
  }
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x3a26931c);
    }
  }
  FUN_004f6910(iVar4);
  iVar4 = *(int *)(unaff_EBX + 0xaf8);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) < 0x100)) {
    cVar3 = FUN_004feb50();
    if (cVar3 == '\0') {
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    }
    FUN_004ff2f0(iVar4,0,0);
  }
  return;
}

