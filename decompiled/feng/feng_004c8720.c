/* Decompiled from Speed.exe @ 004c8720 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c8720(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int unaff_EBX;
  
  iVar3 = *(int *)(*(int *)(unaff_EBX + 0x7c) + 8);
  if (*(char *)(iVar3 + 0x10) == '\v') {
    pcVar5 = "NOHATCHBACK";
    iVar4 = -1;
    uVar2 = 0x4e;
    do {
      iVar4 = iVar4 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    if (*(int *)(iVar3 + 0xc) == iVar4) {
      FUN_004acce0();
      pcVar5 = "_STYLE03_SPOILER";
      iVar4 = FUN_00567c70();
      uVar2 = 0x5f;
      do {
        iVar4 = iVar4 * 0x21 + uVar2;
        pbVar1 = (byte *)(pcVar5 + 1);
        uVar2 = (uint)*pbVar1;
        pcVar5 = pcVar5 + 1;
      } while (*pbVar1 != 0);
      FUN_0057ce10(0,0xb,iVar4,0,0xffffffff);
      FUN_005a2620();
    }
  }
  FUN_005a2620();
  if (*(char *)(iVar3 + 0x10) == '\x1f') {
    FUN_005a3780();
  }
  FUN_004ac750(&DAT_0075eef8,unaff_EBX + 0x90);
  *(undefined1 *)(unaff_EBX + 0x88) = 1;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x12121212,0,0,*(int *)(iVar3 + 0x18));
  }
  return;
}

