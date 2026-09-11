/* Decompiled from Speed.exe @ 004e31c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e31c0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int unaff_EDI;
  
  pcVar4 = "CAR_THUMB";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  iVar3 = FUN_00567c70();
  if ((DAT_007454d4 != 0) && (*(byte *)(DAT_007454d4 + 0x12) < 0x13)) {
    iVar3 = *(int *)(&DAT_00746918 + (uint)*(byte *)(DAT_007454d4 + 0x12) * 4);
  }
  iVar2 = *(int *)(unaff_EDI + 100);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != iVar3)) {
    *(int *)(iVar2 + 0x24) = iVar3;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  pcVar4 = "CAR_THUMB";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  iVar3 = FUN_00567c70();
  if ((DAT_007454d0 != 0) && (*(byte *)(DAT_007454d0 + 0x12) < 0x13)) {
    iVar3 = *(int *)(&DAT_00746918 + (uint)*(byte *)(DAT_007454d0 + 0x12) * 4);
  }
  iVar2 = *(int *)(unaff_EDI + 0x68);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != iVar3)) {
    *(int *)(iVar2 + 0x24) = iVar3;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  pcVar4 = "CAR_THUMB";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  iVar3 = FUN_00567c70();
  if ((DAT_007454cc != 0) && (*(byte *)(DAT_007454cc + 0x12) < 0x13)) {
    iVar3 = *(int *)(&DAT_00746918 + (uint)*(byte *)(DAT_007454cc + 0x12) * 4);
  }
  iVar2 = *(int *)(unaff_EDI + 0x6c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != iVar3)) {
    *(int *)(iVar2 + 0x24) = iVar3;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  pcVar4 = "CAR_THUMB";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  iVar3 = FUN_00567c70();
  if ((DAT_007454c8 != 0) && (*(byte *)(DAT_007454c8 + 0x12) < 0x13)) {
    iVar3 = *(int *)(&DAT_00746918 + (uint)*(byte *)(DAT_007454c8 + 0x12) * 4);
  }
  iVar2 = *(int *)(unaff_EDI + 0x70);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != iVar3)) {
    *(int *)(iVar2 + 0x24) = iVar3;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  return;
}

