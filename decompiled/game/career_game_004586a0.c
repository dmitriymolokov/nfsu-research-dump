/* Decompiled from Speed.exe @ 004586a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_004586a0(undefined4 param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float *unaff_ESI;
  
  if (_DAT_006ccab0 <= ABS(param_3)) {
    fVar1 = _DAT_006cc7bc / param_3;
    *param_2 = (param_5 - param_4) * fVar1;
    *unaff_ESI = -((param_4 + param_5) * fVar1);
    if (param_3 < DAT_006cc7a4) {
      fVar1 = *unaff_ESI;
      *unaff_ESI = *param_2;
      *param_2 = fVar1;
    }
    return;
  }
  if (param_5 < ABS(param_4)) {
    *unaff_ESI = 9999.0;
    *param_2 = 9999.0;
    return;
  }
  *unaff_ESI = -9999.0;
  *param_2 = 9999.0;
  return;
}

