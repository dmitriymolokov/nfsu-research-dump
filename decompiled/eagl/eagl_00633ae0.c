/* Decompiled from Speed.exe @ 00633ae0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


float10 FUN_00633ae0(float param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_3 - param_2;
  if (param_1 < param_2) {
    iVar2 = FUN_00629350((param_2 - param_1) / fVar1);
    return (float10)param_3 - ((float10)(param_2 - param_1) - (float10)iVar2 * (float10)fVar1);
  }
  if (param_3 <= param_1) {
    iVar2 = FUN_00629350((param_1 - param_3) / fVar1);
    return ((float10)(param_1 - param_3) - (float10)iVar2 * (float10)fVar1) + (float10)param_2;
  }
  return (float10)param_1;
}

