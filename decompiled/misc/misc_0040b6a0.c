/* Decompiled from Speed.exe @ 0040b6a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b6a0(void)

{
  float fVar1;
  float fVar2;
  float *extraout_EDX;
  float *unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar3 = (float10)FUN_00564b10();
  fVar1 = (float)fVar3;
  fVar3 = (float10)FUN_00564b10();
  fVar4 = (float10)_DAT_006cc7bc - (float10)fVar1;
  fVar2 = unaff_ESI[2];
  fVar5 = (float10)*unaff_ESI;
  fVar6 = (float10)unaff_ESI[1];
  extraout_EDX[3] = 0.0;
  fVar7 = fVar5 * fVar4;
  extraout_EDX[7] = 0.0;
  extraout_EDX[0xb] = 0.0;
  extraout_EDX[0xc] = 0.0;
  extraout_EDX[0xd] = 0.0;
  extraout_EDX[0xe] = 0.0;
  extraout_EDX[0xf] = 1.0;
  *extraout_EDX = (float)(fVar7 * fVar5 + (float10)fVar1);
  extraout_EDX[1] = (float)(fVar7 * fVar6 - (float10)fVar2 * fVar3);
  extraout_EDX[2] = (float)(fVar6 * fVar3 + (float10)(float)(fVar7 * (float10)fVar2));
  extraout_EDX[4] = (float)((float10)fVar2 * fVar3 + fVar7 * fVar6);
  extraout_EDX[5] = (float)((float10)(float)(fVar6 * fVar4) * fVar6 + (float10)fVar1);
  fVar8 = (float10)(float)(fVar6 * fVar4) * (float10)fVar2;
  extraout_EDX[6] = (float)(fVar8 - fVar5 * fVar3);
  extraout_EDX[8] = (float)(fVar7 * (float10)fVar2) - (float)(fVar6 * fVar3);
  extraout_EDX[9] = (float)(fVar5 * fVar3 + fVar8);
  extraout_EDX[10] = (float)((float10)fVar2 * (float10)fVar2 * fVar4 + (float10)fVar1);
  return;
}

