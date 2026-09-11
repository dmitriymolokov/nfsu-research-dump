/* Decompiled from Speed.exe @ 0040f6e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040f6e0(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_006cc7a4;
  fVar1 = _DAT_006cc7bc;
  if (*param_1 < _DAT_006cc7bc) {
    fVar1 = *param_1;
  }
  *param_1 = fVar1;
  if (fVar1 <= fVar2) {
    fVar1 = DAT_006cc7a4;
  }
  *param_1 = fVar1;
  fVar2 = DAT_006cc7a4;
  fVar1 = _DAT_006cc7bc;
  if (param_1[1] < _DAT_006cc7bc) {
    fVar1 = param_1[1];
  }
  param_1[1] = fVar1;
  if (fVar1 <= fVar2) {
    fVar1 = DAT_006cc7a4;
  }
  param_1[1] = fVar1;
  fVar2 = DAT_006cc7a4;
  fVar1 = _DAT_006cc7bc;
  if (param_1[2] < _DAT_006cc7bc) {
    fVar1 = param_1[2];
  }
  param_1[2] = fVar1;
  if (fVar1 <= fVar2) {
    fVar1 = DAT_006cc7a4;
  }
  param_1[2] = fVar1;
  fVar2 = DAT_006cc7a4;
  fVar1 = _DAT_006cc7bc;
  if (param_1[3] < _DAT_006cc7bc) {
    fVar1 = param_1[3];
  }
  param_1[3] = fVar1;
  if (fVar1 <= fVar2) {
    param_1[3] = 0.0;
    return;
  }
  param_1[3] = fVar1;
  return;
}

