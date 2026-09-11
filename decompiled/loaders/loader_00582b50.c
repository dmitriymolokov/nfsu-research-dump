/* Decompiled from Speed.exe @ 00582b50 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00582b50(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = (float10)FUN_004387e0(param_2,param_1);
  fVar4 = (float)fVar3;
  if ((float10)param_2 < fVar3) {
    fVar4 = fVar4 - _DAT_006cc7bc;
  }
  fVar1 = _DAT_006cc7a8 * (param_2 - fVar4);
  fVar2 = (param_2 - fVar4) * _DAT_006cccbc;
  FUN_005828e0(fVar4,(_DAT_006cc908 - fVar1) * _DAT_006cc7dc,(fVar2 - _DAT_006cca94) * _DAT_006cc7dc
               ,(_DAT_006cc7c0 - fVar2) * _DAT_006cc7dc,(fVar1 - _DAT_006ccc00) * _DAT_006cc7dc);
  return;
}

