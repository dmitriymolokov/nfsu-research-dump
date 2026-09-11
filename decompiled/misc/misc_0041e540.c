/* Decompiled from Speed.exe @ 0041e540 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e540(float param_1,float param_2)

{
  float10 fVar1;
  float local_c;
  float local_8;
  
  param_2 = param_2 - _DAT_006ccb4c;
  param_1 = param_1 + _DAT_006cca94;
  FUN_004f7000(param_1,param_2);
  FUN_004f6e10(DAT_00736220,&local_8,&local_c);
  if (_DAT_006cc910 < local_8) {
    param_1 = param_1 - (local_8 - _DAT_006cc910);
  }
  if (_DAT_006cc91c < local_c) {
    param_2 = param_2 - (local_c - _DAT_006cc91c);
  }
  fVar1 = (float10)FUN_00401c40(0xc3700000,param_2);
  FUN_004f7000(param_1,(float)fVar1);
  return;
}

