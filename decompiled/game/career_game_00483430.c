/* Decompiled from Speed.exe @ 00483430 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


float * __fastcall FUN_00483430(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  
  fVar1 = *unaff_ESI;
  if (*unaff_ESI < *param_1) {
    fVar1 = *param_1;
  }
  if (*param_2 < fVar1) {
    fVar1 = *param_2;
  }
  fVar2 = unaff_ESI[1];
  if (unaff_ESI[1] < param_1[1]) {
    fVar2 = param_1[1];
  }
  if (param_2[1] < fVar2) {
    fVar2 = param_2[1];
  }
  fVar3 = unaff_ESI[2];
  if (unaff_ESI[2] < param_1[2]) {
    fVar3 = param_1[2];
  }
  if (param_2[2] < fVar3) {
    fVar3 = param_2[2];
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  return param_1;
}

