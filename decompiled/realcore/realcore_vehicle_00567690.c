/* Decompiled from Speed.exe @ 00567690 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00567690(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  float *unaff_EDI;
  
  fVar1 = *unaff_ESI;
  if (*param_1 < *unaff_ESI) {
    fVar1 = *param_1;
  }
  fVar2 = unaff_ESI[1];
  if (param_1[1] < unaff_ESI[1]) {
    fVar2 = param_1[1];
  }
  fVar3 = *unaff_EDI;
  if (*unaff_EDI < *param_2) {
    fVar3 = *param_2;
  }
  fVar4 = unaff_EDI[1];
  if (unaff_EDI[1] < param_2[1]) {
    fVar4 = param_2[1];
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  *param_2 = fVar3;
  param_2[1] = fVar4;
  return;
}

