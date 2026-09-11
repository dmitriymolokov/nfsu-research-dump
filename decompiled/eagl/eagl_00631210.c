/* Decompiled from Speed.exe @ 00631210 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00631210(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  if (_DAT_006cc7bc < fVar1) {
    param_2[3] = 0.0;
    fVar1 = _DAT_006cc7bc / SQRT(fVar1);
    *param_2 = fVar1 * *param_2;
    param_2[1] = fVar1 * param_2[1];
    param_2[2] = fVar1 * param_2[2];
    return;
  }
  fVar1 = _DAT_006cc7bc - fVar1;
  param_2[3] = SQRT(fVar1);
  if (0 < param_1) {
    param_2[3] = -SQRT(fVar1);
    return;
  }
  return;
}

