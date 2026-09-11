/* Decompiled from Speed.exe @ 0050c4d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050c4d0(void)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar1 + 0x18));
  }
  iVar1 = *(int *)(unaff_EBX + 0x40);
  FUN_005048e0(&DAT_00744ff0);
  if (iVar1 != 0) {
    FUN_00495f00(*(undefined4 *)(iVar1 + 0xc));
  }
  return;
}

