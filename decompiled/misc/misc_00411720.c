/* Decompiled from Speed.exe @ 00411720 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00411720(int param_1)

{
  uint uVar1;
  
  if (DAT_007363a8 != 0) {
    uVar1 = DAT_007363a4 + param_1;
    if ((int)DAT_007363a0 <= (int)(DAT_007363a4 + param_1)) {
      uVar1 = DAT_007363a0;
    }
    DAT_007363a4 = uVar1 & ((int)uVar1 < 1) - 1;
  }
  return;
}

