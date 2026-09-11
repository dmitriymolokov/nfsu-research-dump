/* Decompiled from Speed.exe @ 00584cd0 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00584cd0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float local_18;
  
  fVar1 = *param_1;
  local_18 = param_1[2];
  fVar2 = param_1[1];
  fVar3 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  if (_DAT_006b5b44 < fVar3) {
    fVar3 = _DAT_006b5b44 / fVar3;
    fVar1 = fVar1 * fVar3;
    fVar2 = fVar2 * fVar3;
    local_18 = local_18 * fVar3;
  }
  *(float *)(param_2 + 0x110) = fVar1 + *(float *)(param_2 + 0x110);
  *(float *)(param_2 + 0x114) = fVar2 + *(float *)(param_2 + 0x114);
  *(float *)(param_2 + 0x118) = local_18 + *(float *)(param_2 + 0x118);
  fVar1 = param_1[2] * unaff_ESI[1] - param_1[1] * unaff_ESI[2];
  fVar3 = *param_1 * unaff_ESI[2] - param_1[2] * *unaff_ESI;
  local_18 = param_1[1] * *unaff_ESI - *param_1 * unaff_ESI[1];
  fVar2 = SQRT(fVar1 * fVar1 + local_18 * local_18 + fVar3 * fVar3);
  if (_DAT_006b5b48 < fVar2) {
    fVar2 = _DAT_006b5b48 / fVar2;
    fVar1 = fVar1 * fVar2;
    fVar3 = fVar3 * fVar2;
    local_18 = local_18 * fVar2;
  }
  *(float *)(param_2 + 0x120) = fVar1 + *(float *)(param_2 + 0x120);
  *(float *)(param_2 + 0x124) = fVar3 + *(float *)(param_2 + 0x124);
  *(float *)(param_2 + 0x128) = local_18 + *(float *)(param_2 + 0x128);
  return;
}

