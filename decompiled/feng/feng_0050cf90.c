/* Decompiled from Speed.exe @ 0050cf90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050cf90(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int unaff_ESI;
  
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar2 + 0x18));
  }
  FUN_005048e0(&DAT_00744ff0);
  iVar2 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x40) + 0xc) + 8);
  pcVar4 = "_BRAND_NAME";
  uVar3 = 0x5f;
  do {
    iVar2 = iVar2 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  FUN_00495f00(iVar2);
  return;
}

