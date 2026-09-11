/* Decompiled from Speed.exe @ 0065ada0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0065ada0(int param_1,float param_2)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *unaff_EBX;
  float *unaff_ESI;
  
  fVar2 = param_2 * (float)param_1;
  pbVar1 = (byte *)*unaff_EBX;
  iVar6 = param_1 / 2 + (uint)*pbVar1;
  fVar3 = ((float)param_1 + *unaff_ESI) - fVar2;
  if (param_2 < _DAT_006cc7bc) {
    fVar2 = ((float)(param_1 * 2 - iVar6) + *unaff_ESI) - (fVar2 + fVar2);
    fVar5 = fVar3;
    if (fVar3 < DAT_006cc7a4) {
      fVar5 = -fVar3;
    }
    fVar4 = fVar2;
    if (fVar2 < DAT_006cc7a4) {
      fVar4 = -fVar2;
    }
    if (fVar5 < fVar4) {
      *unaff_EBX = pbVar1 + 1;
      *unaff_ESI = fVar3;
      return 0;
    }
    *unaff_EBX = pbVar1 + 2;
    *unaff_ESI = fVar2;
    return -iVar6;
  }
  fVar2 = ((float)(iVar6 + param_1) + *unaff_ESI) - fVar2;
  fVar5 = fVar3;
  if (fVar3 < DAT_006cc7a4) {
    fVar5 = -fVar3;
  }
  fVar4 = fVar2;
  if (fVar2 < DAT_006cc7a4) {
    fVar4 = -fVar2;
  }
  if (fVar5 < fVar4) {
    *unaff_EBX = pbVar1 + 1;
    *unaff_ESI = fVar3;
    return 0;
  }
  *unaff_EBX = pbVar1 + 1;
  *unaff_ESI = fVar2;
  return iVar6;
}

