/* Decompiled from Speed.exe @ 004f6650 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004f6650(void)

{
  int iVar1;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)*(int *)(iVar1 + 0x18) >> 8),*(int *)(iVar1 + 0x18) != 0);
  }
  return 0;
}

