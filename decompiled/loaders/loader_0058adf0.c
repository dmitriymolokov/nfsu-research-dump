/* Decompiled from Speed.exe @ 0058adf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058adf0(void)

{
  int iVar1;
  
  if (DAT_007301e4 != 0) {
    iVar1 = FUN_00565810();
    if ((-1 < iVar1 + -0x58) && (0xf80 < iVar1 + -0x58)) {
      FUN_00565b60(0xf80,0,0,4);
      return;
    }
  }
  FUN_00565b60(0xf80,0,0,0);
  return;
}

