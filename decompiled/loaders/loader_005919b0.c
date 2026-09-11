/* Decompiled from Speed.exe @ 005919b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005919b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_006f03e8)[iVar1] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return -1;
}

