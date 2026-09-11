/* Decompiled from Speed.exe @ 00471d60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00471d60(float *param_1,float *param_2)

{
  if (((ABS(*param_2 - *param_1) <= _DAT_006cc8bc) &&
      (ABS(param_2[1] - param_1[1]) <= _DAT_006cc8bc)) &&
     (ABS(param_2[2] - param_1[2]) <= _DAT_006cc8bc)) {
    return 1;
  }
  return 0;
}

