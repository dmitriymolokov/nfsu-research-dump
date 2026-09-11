/* Decompiled from Speed.exe @ 00583ea0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00583ea0(float param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *unaff_ESI;
  float10 fVar5;
  
  iVar2 = *unaff_ESI;
  fVar3 = (param_1 - (float)unaff_ESI[1]) * (float)unaff_ESI[3];
  iVar4 = FUN_00674898();
  if (iVar4 < 0) {
    return (float10)*(float *)unaff_ESI[4];
  }
  if (iVar2 + -1 <= iVar4) {
    return (float10)*(float *)(unaff_ESI[4] + -4 + iVar2 * 4);
  }
  fVar5 = (float10)FUN_004387e0(fVar3);
  if ((float10)fVar3 < fVar5) {
    fVar5 = fVar5 - (float10)_DAT_006cc7bc;
  }
  pfVar1 = (float *)(unaff_ESI[4] + iVar4 * 4);
  return ((float10)fVar3 - fVar5) * (float10)pfVar1[1] +
         ((float10)_DAT_006cc7bc - ((float10)fVar3 - fVar5)) * (float10)*pfVar1;
}

