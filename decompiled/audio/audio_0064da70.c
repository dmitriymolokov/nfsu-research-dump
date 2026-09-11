/* Decompiled from Speed.exe @ 0064da70 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0064da70(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[6];
  fVar3 = (float)(int)fVar1;
  if (fVar3 == *param_1) {
    return fVar1;
  }
  if ((fVar1 != param_1[2]) || (param_1[4] != param_1[3])) {
    fVar2 = param_1[4];
    param_1[2] = fVar1;
    param_1[3] = fVar2;
    if ((int)fVar2 < 1) {
      *param_1 = (float)(int)fVar1;
      return fVar1;
    }
    param_1[1] = fVar3 - *param_1;
    param_1[1] = ((fVar3 - *param_1) / (float)(int)fVar2) * _DAT_00713ca0 * _DAT_006cc7c8;
  }
  fVar2 = (float)(int)param_1[5] * param_1[1] + *param_1;
  *param_1 = fVar2;
  if (param_1[1] < DAT_006cc7a4) {
    if (fVar3 <= fVar2) goto LAB_0064daff;
  }
  else if (fVar2 <= fVar3) goto LAB_0064daff;
  *param_1 = (float)(int)fVar1;
LAB_0064daff:
  return (float)(int)ROUND(*param_1);
}

