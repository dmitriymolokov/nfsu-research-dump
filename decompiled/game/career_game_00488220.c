/* Decompiled from Speed.exe @ 00488220 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_00488220(float *param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (param_3 <= *param_1) {
    if ((param_3 < *param_1) &&
       (fVar1 = *param_1, *param_1 = fVar1 - param_4, fVar1 - param_4 < param_3)) {
      *param_1 = param_3;
    }
  }
  else {
    fVar1 = *param_1;
    *param_1 = param_4 + fVar1;
    if (param_3 < param_4 + fVar1) {
      *param_1 = param_3;
      return;
    }
  }
  return;
}

