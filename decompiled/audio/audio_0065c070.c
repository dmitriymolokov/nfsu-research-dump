/* Decompiled from Speed.exe @ 0065c070 */
/* Module: Audio */
/* Ghidra DecompileAll */


int fn_0065c070(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x10001) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x10000;
  }
  uVar1 = FUN_006511b0();
  return (int)(((uVar1 & 0x7fff) - 0x4000) * param_1) >> 0xe;
}

