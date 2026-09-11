/* Decompiled from Speed.exe @ 0042a5c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a5c0(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *extraout_EDX;
  int unaff_ESI;
  
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  *param_2 = 1.0;
  param_2[5] = 1.0;
  param_2[0xf] = 1.0;
  param_2[10] = 1.0;
  fVar1 = ABS(_DAT_006cc7bc - *(float *)(unaff_ESI + 0x98));
  if (fVar1 < _DAT_006cc8bc == (fVar1 == _DAT_006cc8bc)) {
    *param_2 = *(float *)(unaff_ESI + 0x90);
    param_2[1] = *(float *)(unaff_ESI + 0x94);
  }
  else {
    *param_2 = -*(float *)(unaff_ESI + 0xb0);
    param_2[1] = -*(float *)(unaff_ESI + 0xb4);
  }
  FUN_005672b0();
  extraout_EDX[4] = extraout_EDX[2] * extraout_EDX[9] - extraout_EDX[1] * extraout_EDX[10];
  extraout_EDX[5] = *extraout_EDX * extraout_EDX[10] - extraout_EDX[2] * extraout_EDX[8];
  extraout_EDX[6] = extraout_EDX[8] * extraout_EDX[1] - *extraout_EDX * extraout_EDX[9];
  fVar3 = *(float *)(unaff_ESI + 0x60);
  fVar1 = *(float *)(unaff_ESI + 100);
  fVar2 = *(float *)(unaff_ESI + 0x68);
  extraout_EDX[0xf] = 1.0;
  extraout_EDX[0xc] = fVar3;
  extraout_EDX[0xd] = fVar1;
  extraout_EDX[0xe] = fVar2;
  return;
}

