/* Decompiled from Speed.exe @ 004685a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004685a0(float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  fVar1 = *(float *)(unaff_EDI + 0x2c) - *(float *)(unaff_EDI + 0x24);
  if (param_1 != fVar1) {
    if ((fVar1 < param_1) && (_DAT_00736054 < param_1)) {
      _DAT_00736054 = param_1;
      return;
    }
    if ((param_1 < fVar1) && (fVar1 == _DAT_00736054)) {
      param_1 = 0.0;
      if (DAT_00779c70 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_00779c70 + -4;
      }
      iVar2 = FUN_0040cb70();
      _DAT_00736054 = param_1;
      while (iVar3 != iVar2) {
        param_1 = _DAT_00736054;
        if ((iVar3 != unaff_EDI) &&
           (fVar1 = *(float *)(iVar3 + 0x2c) - *(float *)(iVar3 + 0x24), param_1 = _DAT_00736054,
           _DAT_00736054 < fVar1)) {
          param_1 = fVar1;
        }
        _DAT_00736054 = param_1;
        if (*(int *)(iVar3 + 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 4) + -4;
        }
      }
    }
  }
  return;
}

