/* Decompiled from Speed.exe @ 00433650 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00433650(int param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  param_2 = param_2 - param_3;
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if (_DAT_006ccabc <= param_2) {
      if (_DAT_006cc93c < param_2) {
        param_2 = param_2 - _DAT_006cc9f8;
      }
    }
    else {
      param_2 = param_2 + _DAT_006cc9f8;
    }
  }
  param_3 = *(float *)(param_1 + 0x1c) - param_3;
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if (_DAT_006ccabc <= param_3) {
      if (_DAT_006cc93c < param_3) {
        param_3 = param_3 - _DAT_006cc9f8;
      }
    }
    else {
      param_3 = param_3 + _DAT_006cc9f8;
    }
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  if (_DAT_006ccb18 < ABS(param_2)) {
    return 0;
  }
  if ((DAT_006cc7a4 <= param_3) || (param_2 < DAT_006cc7a4)) {
    if (param_3 < DAT_006cc7a4) {
      return 0;
    }
    if (DAT_006cc7a4 <= param_2) {
      return 0;
    }
    *unaff_ESI = 0;
    unaff_ESI[1] = 1;
  }
  else {
    *unaff_ESI = 1;
    unaff_ESI[1] = 0;
  }
  uVar1 = FUN_00674898();
  unaff_ESI[2] = uVar1;
  return 1;
}

