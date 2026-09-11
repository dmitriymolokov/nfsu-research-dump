/* Decompiled from Speed.exe @ 00443e00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00443e00(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float local_28;
  float local_24;
  float local_1c;
  
  local_1c = param_3[1];
  fVar2 = *param_3;
  bVar9 = false;
  FUN_005672b0();
  iVar11 = *(int *)(param_1 + 0x38);
  if (0 < iVar11) {
    pfVar10 = (float *)(param_1 + 0x3c);
    iVar12 = 1;
    do {
      iVar11 = iVar12 % iVar11;
      fVar4 = *pfVar10 - *(float *)(param_1 + 0x3c + iVar11 * 8);
      fVar7 = pfVar10[1] - *(float *)(param_1 + 0x40 + iVar11 * 8);
      fVar6 = SQRT(fVar4 * fVar4 + fVar7 * fVar7);
      pfVar1 = (float *)(param_1 + 0x3c + iVar11 * 8);
      fVar5 = _DAT_006cc7bc;
      fVar8 = DAT_006cc7a4;
      if (fVar6 != DAT_006cc7a4) {
        fVar6 = _DAT_006cc7bc / fVar6;
        fVar5 = fVar4 * fVar6;
        fVar8 = fVar6 * fVar7;
      }
      if (local_28 * fVar5 + local_24 * fVar8 == _DAT_006cc7bc) {
        fVar2 = fVar2 - *pfVar10;
        local_1c = local_1c - pfVar10[1];
        fVar4 = SQRT(fVar2 * fVar2 + local_1c * local_1c);
        if (fVar4 == DAT_006cc7a4) {
          local_1c = 0.0;
          fVar2 = _DAT_006cc7bc;
        }
        else {
          fVar4 = _DAT_006cc7bc / fVar4;
          local_1c = fVar4 * local_1c;
          fVar2 = fVar2 * fVar4;
        }
        if (_DAT_006cc8bc < ABS(fVar2 - fVar5)) {
          return 0;
        }
        if (_DAT_006cc8bc < ABS(local_1c - fVar8)) {
          return 0;
        }
        fVar2 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = fVar2;
        return 1;
      }
      fVar4 = local_28 * fVar8 - local_24 * fVar5;
      if (((_DAT_006cc8bc <= fVar4) || (fVar4 <= _DAT_006ccca8)) &&
         (fVar4 = ((local_1c - pfVar10[1]) * fVar5 - (fVar2 - *pfVar10) * fVar8) / fVar4,
         DAT_006cc7a4 <= fVar4)) {
        fVar5 = local_28 * fVar4 + fVar2;
        fVar4 = fVar4 * local_24 + local_1c;
        if (((*pfVar1 - fVar5) * (*pfVar10 - fVar5) + (pfVar1[1] - fVar4) * (pfVar10[1] - fVar4) <
             DAT_006cc7a4) && (!bVar9)) {
          param_2[1] = fVar4;
          bVar9 = true;
          *param_2 = fVar5;
        }
      }
      iVar11 = *(int *)(param_1 + 0x38);
      pfVar10 = pfVar10 + 2;
      bVar3 = iVar12 < iVar11;
      iVar12 = iVar12 + 1;
    } while (bVar3);
    if (bVar9) {
      return 1;
    }
  }
  return 0;
}

