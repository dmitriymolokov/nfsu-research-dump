/* Decompiled from Speed.exe @ 0045e370 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0045e370(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int unaff_ESI;
  float10 fVar6;
  
  sVar3 = FUN_00564db0(*(float *)(unaff_ESI + 500) - *(float *)(*(int *)(unaff_ESI + 0x1f0) + 0x60),
                       *(float *)(unaff_ESI + 0x1f8) - *(float *)(*(int *)(unaff_ESI + 0x1f0) + 100)
                      );
  fVar2 = (float)(ushort)(*(short *)(*(int *)(unaff_ESI + 0x1f0) + 0x3b4) - sVar3) * _DAT_006cc980;
  if (fVar2 <= _DAT_006cc97c) {
    if (fVar2 < _DAT_006ccab8) {
      fVar2 = fVar2 + _DAT_006cc978;
    }
  }
  else {
    fVar2 = fVar2 - _DAT_006cc978;
  }
  *param_1 = fVar2;
  iVar1 = *(int *)(unaff_ESI + 0x1f0);
  fVar6 = (float10)FUN_00583f20(&PTR_DAT_007060c0,*(undefined4 *)(iVar1 + 0x3d4));
  if (fVar6 <= (float10)DAT_006cc7a4) {
    *param_2 = fVar2;
  }
  else {
    sVar4 = FUN_00564db0(*(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x74));
    fVar2 = (float)(ushort)(sVar4 - sVar3) * _DAT_006cc980;
    if (fVar2 <= _DAT_006cc97c) {
      if (fVar2 < _DAT_006ccab8) {
        fVar2 = fVar2 + _DAT_006cc978;
      }
    }
    else {
      fVar2 = fVar2 - _DAT_006cc978;
    }
    *param_2 = fVar2 * (float)fVar6 + (_DAT_006cc7bc - (float)fVar6) * *param_1;
  }
  fVar6 = (float10)FUN_004592f0();
  uVar5 = FUN_00564db0(DAT_006b73b0,(float)fVar6);
  fVar2 = (float)uVar5 * _DAT_006cc980;
  if (fVar2 <= _DAT_006cc97c) {
    if (fVar2 < _DAT_006ccab8) {
      fVar2 = fVar2 + _DAT_006cc978;
    }
    *param_3 = fVar2;
    return sVar3;
  }
  *param_3 = fVar2 - _DAT_006cc978;
  return sVar3;
}

