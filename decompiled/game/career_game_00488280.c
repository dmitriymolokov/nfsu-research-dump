/* Decompiled from Speed.exe @ 00488280 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00488280(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (((_DAT_006cc8bc < ABS(*param_1 - *param_2)) || (_DAT_006cc8bc < ABS(param_1[1] - param_2[1])))
     || (_DAT_006cc8bc < ABS(param_1[2] - param_2[2]))) {
    fVar1 = *param_2 - *param_1;
    fVar3 = param_2[1] - param_1[1];
    fVar2 = param_2[2] - param_1[2];
    fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    if (fVar4 < param_4) {
      fVar1 = param_2[1];
      fVar2 = param_2[2];
      *param_1 = *param_2;
      param_1[1] = fVar1;
      param_1[2] = fVar2;
      return;
    }
    fVar4 = _DAT_006cc7bc / fVar4;
    *param_1 = fVar1 * fVar4 * param_4 + *param_1;
    param_1[2] = fVar4 * fVar2 * param_4 + param_1[2];
    param_1[1] = fVar3 * fVar4 * param_4 + param_1[1];
  }
  return;
}

