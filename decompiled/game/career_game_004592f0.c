/* Decompiled from Speed.exe @ 004592f0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


float10 __fastcall FUN_004592f0(char *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  int iVar18;
  float10 fVar19;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  cVar10 = *param_1;
  if (cVar10 < '\x01') {
    return (float10)DAT_006cc7a4;
  }
  fVar19 = (float10)*param_2 - (float10)*(float *)(param_1 + 0x10);
  if (cVar10 == '\x01') {
    return SQRT(fVar19 * fVar19 +
                ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) *
                ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) +
                ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) *
                ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)));
  }
  local_40 = (float)fVar19;
  iVar18 = 2;
  local_3c = param_2[1] - *(float *)(param_1 + 0x14);
  local_38 = param_2[2] - *(float *)(param_1 + 0x18);
  local_50 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
  local_4c = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14);
  local_48 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
  if (DAT_006cc7a4 < local_50 * local_40 + local_4c * local_3c + local_48 * local_38) {
    pfVar17 = (float *)(param_1 + 0x38);
    fVar11 = local_50;
    fVar12 = local_4c;
    fVar13 = local_48;
    fVar14 = local_40;
    fVar15 = local_3c;
    fVar16 = local_38;
    do {
      local_38 = fVar16;
      local_3c = fVar15;
      local_40 = fVar14;
      local_48 = fVar13;
      local_4c = fVar12;
      local_50 = fVar11;
      if (cVar10 <= iVar18) break;
      pfVar1 = pfVar17 + -6;
      pfVar2 = pfVar17 + -5;
      pfVar3 = pfVar17 + -4;
      pfVar4 = pfVar17 + -2;
      pfVar5 = pfVar17 + -6;
      pfVar6 = pfVar17 + -1;
      pfVar7 = pfVar17 + -5;
      fVar9 = *pfVar17;
      pfVar8 = pfVar17 + -4;
      pfVar17 = pfVar17 + 4;
      iVar18 = iVar18 + 1;
      fVar11 = *pfVar4 - *pfVar5;
      fVar12 = *pfVar6 - *pfVar7;
      fVar13 = fVar9 - *pfVar8;
      fVar14 = *param_2 - *pfVar1;
      fVar15 = param_2[1] - *pfVar2;
      fVar16 = param_2[2] - *pfVar3;
    } while (DAT_006cc7a4 <
             (*pfVar4 - *pfVar5) * (*param_2 - *pfVar1) +
             (*pfVar6 - *pfVar7) * (param_2[1] - *pfVar2) +
             (fVar9 - *pfVar8) * (param_2[2] - *pfVar3));
  }
  local_48 = local_48 * DAT_006cc7a4;
  fVar11 = local_50 * DAT_006cc7a4;
  fVar12 = local_4c * DAT_006cc7a4;
  FUN_00567370();
  return (float10)(local_4c - local_48) * (float10)local_40 +
         (float10)(local_48 - local_50) * (float10)local_3c +
         (float10)(fVar11 - fVar12) * (float10)local_38;
}

