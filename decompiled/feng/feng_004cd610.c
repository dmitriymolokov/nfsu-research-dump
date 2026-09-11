/* Decompiled from Speed.exe @ 004cd610 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


bool FUN_004cd610(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_007361f0 + 0x1c);
  if (DAT_007361b4 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(DAT_007361b4 + 8);
  }
  if (iVar1 == iVar2) {
    return false;
  }
  if (DAT_007361b8 != 0) {
    return iVar1 == *(int *)(DAT_007361b8 + 8);
  }
  return iVar1 == -1;
}

