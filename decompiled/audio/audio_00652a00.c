/* Decompiled from Speed.exe @ 00652a00 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00652a00(int param_1)

{
  int iVar1;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  iVar1 = *(int *)(DAT_00713f4c + param_1 * 8);
  return *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8);
}

