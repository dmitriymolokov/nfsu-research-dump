/* Decompiled from Speed.exe @ 00567600 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00567600(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  
  fVar1 = *param_1 - param_3;
  if (*unaff_ESI < *param_1 - param_3) {
    fVar1 = *unaff_ESI;
  }
  fVar2 = param_1[1] - param_3;
  if (unaff_ESI[1] < param_1[1] - param_3) {
    fVar2 = unaff_ESI[1];
  }
  fVar3 = param_3 + *param_1;
  if (param_3 + *param_1 < *param_2) {
    fVar3 = *param_2;
  }
  fVar4 = param_3 + param_1[1];
  if (param_3 + param_1[1] < param_2[1]) {
    fVar4 = param_2[1];
  }
  *unaff_ESI = fVar1;
  unaff_ESI[1] = fVar2;
  *param_2 = fVar3;
  param_2[1] = fVar4;
  return;
}

