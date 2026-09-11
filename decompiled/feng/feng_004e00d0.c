/* Decompiled from Speed.exe @ 004e00d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e00d0(void)

{
  int iVar1;
  
  if (DAT_00735dd8 != 0) {
    DAT_00736124 = 1;
    return;
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x12347780,0,0,*(int *)(iVar1 + 0x18));
  }
  return;
}

