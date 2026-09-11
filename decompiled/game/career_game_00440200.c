/* Decompiled from Speed.exe @ 00440200 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


undefined4 __fastcall FUN_00440200(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  float local_b0 [6];
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  int local_64;
  float local_60 [6];
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  
  iVar8 = (int)*(char *)(unaff_EDI + 9);
  if (0 < iVar8) {
    pfVar5 = (float *)(unaff_EDI + 0x38);
    pfVar6 = local_b0 + 2;
    local_64 = iVar8;
    do {
      fVar1 = pfVar5[-1];
      fVar2 = param_2[1];
      fVar3 = *pfVar5;
      fVar4 = param_2[2];
      local_18 = fVar3 - fVar4;
      pfVar6[-2] = pfVar5[-2] - *param_2;
      *pfVar6 = fVar3 - fVar4;
      pfVar6[-1] = fVar1 - fVar2;
      local_64 = local_64 + -1;
      pfVar5 = pfVar5 + 4;
      pfVar6 = pfVar6 + 4;
    } while (local_64 != 0);
  }
  local_60[0] = local_98 * local_b0[1] - local_b0[5] * local_b0[2];
  local_60[1] = local_b0[4] * local_b0[2] - local_98 * local_b0[0];
  local_60[2] = local_b0[5] * local_b0[0] - local_b0[4] * local_b0[1];
  local_60[4] = local_88 * local_b0[5] - local_8c * local_98;
  local_60[5] = local_90 * local_98 - local_88 * local_b0[4];
  local_48 = local_8c * local_b0[4] - local_90 * local_b0[5];
  if (*(char *)(unaff_EDI + 9) == '\x04') {
    local_40 = local_78 * local_8c - local_7c * local_88;
    local_3c = local_80 * local_88 - local_78 * local_90;
    local_38 = local_7c * local_90 - local_80 * local_8c;
    local_30 = local_7c * local_b0[2] - local_78 * local_b0[1];
    local_2c = local_78 * local_b0[0] - local_80 * local_b0[2];
    local_28 = local_80 * local_b0[1] - local_7c * local_b0[0];
  }
  else {
    local_40 = local_8c * local_b0[2] - local_88 * local_b0[1];
    local_3c = local_88 * local_b0[0] - local_90 * local_b0[2];
    local_38 = local_90 * local_b0[1] - local_8c * local_b0[0];
  }
  iVar7 = 0;
  if (0 < iVar8) {
    pfVar5 = local_60 + 1;
    do {
      if (*(float *)(unaff_EDI + 0x74) * *pfVar5 +
          pfVar5[1] * *(float *)(unaff_EDI + 0x78) + pfVar5[-1] * *(float *)(unaff_EDI + 0x70) <
          DAT_006cc7a4) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      pfVar5 = pfVar5 + 4;
    } while (iVar7 < iVar8);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = -(local_b0[0] * *(float *)(unaff_EDI + 0x70) +
                local_b0[1] * *(float *)(unaff_EDI + 0x74) +
                local_b0[2] * *(float *)(unaff_EDI + 0x78));
  }
  return 1;
}

