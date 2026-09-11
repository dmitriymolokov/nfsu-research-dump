/* Decompiled from Speed.exe @ 006425b0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void fn_006425b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_0070fe38)[iVar1] == param_1) {
      (&DAT_0070fe38)[iVar1] = 0;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

