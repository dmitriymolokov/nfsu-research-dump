/* Decompiled from Speed.exe @ 00488380 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00488380(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(param_2 - (param_3 + _DAT_006cc934));
  fVar2 = ABS(param_2 - (param_3 - _DAT_006cc934));
  if ((fVar1 < ABS(param_2 - param_3)) && (fVar1 < fVar2)) {
    return (float10)(param_3 + _DAT_006cc934);
  }
  if ((fVar2 < ABS(param_2 - param_3)) && (fVar2 < fVar1)) {
    return (float10)(param_3 - _DAT_006cc934);
  }
  return (float10)param_3;
}

