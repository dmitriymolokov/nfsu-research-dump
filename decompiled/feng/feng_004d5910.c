/* Decompiled from Speed.exe @ 004d5910 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004d5910(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x5073ef13) {
    DAT_0075892c = DAT_0075892c + -1;
    if (DAT_0075892c < 0) {
      DAT_0075892c = 1;
    }
  }
  else if ((param_1 == -0x260113a7) && (DAT_0075892c = DAT_0075892c + 1, 1 < DAT_0075892c)) {
    DAT_0075892c = 0;
  }
  uVar1 = 0;
  if (DAT_0075892c == 0) {
    uVar1 = 0x197392b;
  }
  else if (DAT_0075892c == 1) {
    uVar1 = 0x1a4e8ad1;
  }
  FUN_00416bb0(uVar1);
  return;
}

