/* Decompiled from Speed.exe @ 0058d420 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058d420(void)

{
  int iVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  iVar1 = FUN_00674898();
  iVar2 = FUN_00674898();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (7 < iVar1) {
    iVar1 = 7;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (7 < iVar2) {
    iVar2 = 7;
  }
  if (extraout_ST0 < extraout_ST1) {
    if ((float10)_DAT_006cc7bc - extraout_ST0 < extraout_ST1) {
      return 8 - iVar2;
    }
    return 0x10 - iVar1;
  }
  iVar1 = iVar1 + 0x18;
  if (extraout_ST1 <= (float10)_DAT_006cc7bc - extraout_ST0) {
    iVar1 = iVar2 + 0x10;
  }
  return iVar1;
}

