/* Decompiled from Speed.exe @ 00653fe0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00653fe0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00714010 != 0) {
    while (*(int *)(DAT_00714014 + iVar1 * 8) != param_1) {
      iVar1 = iVar1 + 1;
      if ((int)(uint)DAT_00714010 <= iVar1) {
        return;
      }
    }
    *(undefined4 *)(DAT_00714014 + iVar1 * 8) = 0;
  }
  return;
}

