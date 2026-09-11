/* Decompiled from Speed.exe @ 005a71f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


float10 __fastcall FUN_005a71f0(int param_1,int param_2,float param_3)

{
  if (param_3 <= DAT_006cc7a4) {
    if ((-1 < param_1) && (param_1 < 5)) {
      return (float10)*(float *)(param_2 + 0x20) - (float10)param_3;
    }
    if ((10 < param_1) && (param_1 < 0x11)) {
      return (float10)*(float *)(param_2 + -8 + param_1 * 4) - (float10)param_3;
    }
    return (float10)DAT_006cc7a4 - (float10)param_3;
  }
  if ((-1 < param_1) && (param_1 < 5)) {
    return (float10)param_3 - (float10)*(float *)(param_2 + 0x3c);
  }
  if ((10 < param_1) && (param_1 < 0x11)) {
    return (float10)param_3 - (float10)*(float *)(param_2 + 0x14 + param_1 * 4);
  }
  return (float10)param_3 - (float10)DAT_006cc7a4;
}

