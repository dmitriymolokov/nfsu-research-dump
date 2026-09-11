/* Decompiled from Speed.exe @ 00587740 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00587740(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (DAT_006f0868 == 0) {
    fVar5 = (float10)FUN_00583ea0(param_3);
    return fVar5 * (float10)*(float *)(param_1 + 0x158) * (float10)_DAT_006f0794 *
           (float10)_DAT_006f07b8;
  }
  pfVar1 = *(float **)(param_1 + 0x18);
  fVar2 = ((param_3 * _DAT_006cc9f4) / *pfVar1) * _DAT_006ccbb4 * _DAT_006cc7dc;
  iVar4 = FUN_00674898();
  fVar3 = (_DAT_006f0870 * param_2) / pfVar1[1];
  if (5 < iVar4) {
    fVar5 = (float10)FUN_00583ea0(fVar3);
    return fVar5 * (float10)*(float *)(*(int *)(param_1 + 0x18) + 8) * (float10)_DAT_006f086c;
  }
  fVar5 = (float10)FUN_00583ea0(fVar3);
  fVar6 = (float10)FUN_00583ea0(fVar3);
  return ((fVar6 - (float10)(float)fVar5) * ((float10)fVar2 - (float10)iVar4) +
         (float10)(float)fVar5) * (float10)*(float *)(*(int *)(param_1 + 0x18) + 8) *
         (float10)_DAT_006f086c;
}

