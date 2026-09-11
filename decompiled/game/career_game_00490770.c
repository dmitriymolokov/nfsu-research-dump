/* spd-match: far pct=5.06 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00490770 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490770(int *param_1,undefined4 param_2,float param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  uint local_1b4;
  float local_190;
  float local_18c;
  float local_188;
  int local_170;
  uint local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_a0 [17];
  float afStack_5c [11];
  undefined1 auStack_30 [44];
  
  puVar9 = DAT_007355b4;
  puVar1 = DAT_007355b4 + 0x10;
  if (DAT_007355b8 <= puVar1) {
    DAT_007355c4 = 1;
    DAT_007355c8 = DAT_007355c8 + 0x40;
    return;
  }
  bVar14 = DAT_007355b4 != (undefined4 *)0x0;
  DAT_007355b4 = puVar1;
  if (bVar14) {
    FUN_0040be70();
    local_1b4 = 0;
    local_168 = 1;
    if (param_4 == 0) {
      *puVar9 = 0x3f800000;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0x3f800000;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0x3f800000;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 0x3f800000;
    }
    else {
      FUN_00401cd0();
    }
    fVar15 = (float10)FUN_00583f20(param_1 + 9,param_3);
    fVar16 = (float10)FUN_00583f20(param_1 + 0xb,param_3);
    iVar2 = *(int *)(param_1[2] + 4);
    fVar4 = param_3 * *(float *)(param_1[2] + 8);
    fVar17 = (float10)FUN_004387e0(fVar4);
    if ((float10)fVar4 < fVar17) {
      fVar17 = fVar17 - (float10)_DAT_006cc7bc;
    }
    local_170 = 0;
    if (-1 < *(int *)(param_1[2] + 4)) {
      do {
        uVar10 = local_1b4;
        iVar13 = *param_1;
        if (iVar13 == 0) {
          fVar6 = *(float *)(param_1[1] + 0xc);
        }
        else {
          iVar3 = *(int *)(iVar13 + 8);
          if (iVar3 == 0) {
LAB_004908d1:
            fVar6 = (float)(*(int *)(iVar13 + 4) + -1);
          }
          else if (iVar3 == 1) {
            fVar6 = (float)*(int *)(iVar13 + 4);
          }
          else {
            fVar6 = DAT_006cc7a4;
            if (iVar3 == 2) goto LAB_004908d1;
          }
        }
        fVar6 = ((float)local_170 * (float)((fVar16 - (float10)(float)fVar15) / (float10)iVar2) +
                (float)fVar15) * fVar6;
        if (iVar13 == 0) {
          FUN_0059d350(&fStack_d0,fVar6,0);
          local_160 = fStack_d0;
          local_15c = fStack_cc;
          local_158 = fStack_c8;
          FUN_0059d350(&fStack_e0,fVar6,1);
          local_190 = fStack_e0;
          local_18c = fStack_dc;
          local_188 = fStack_d8;
          FUN_0059d350(&fStack_c0,fVar6,2);
          local_130 = fStack_c0;
          local_12c = fStack_bc;
          local_128 = fStack_b8;
        }
        else {
          FUN_005829e0(fVar6);
          FUN_00582a90(fVar6);
          FUN_00582b50(fVar6);
        }
        local_158 = local_158 + *(float *)(param_1[2] + 0x18);
        FUN_00567370();
        fVar6 = local_188 * DAT_006cc7a4 - local_18c;
        fVar5 = local_190 - local_188 * DAT_006cc7a4;
        fVar7 = local_18c * DAT_006cc7a4 - local_190 * DAT_006cc7a4;
        FUN_00567370();
        fVar8 = (local_130 * fVar6 + local_12c * fVar5 + local_128 * fVar7) *
                *(float *)(param_1[2] + 0x1c);
        fVar6 = fVar6 * fVar8;
        fVar5 = fVar8 * fVar5;
        fVar7 = fVar8 * fVar7 + _DAT_006cc7bc;
        fVar8 = local_188 * fVar5 - local_18c * fVar7;
        fVar7 = local_190 * fVar7 - local_188 * fVar6;
        fVar6 = local_18c * fVar6 - local_190 * fVar5;
        FUN_00567370();
        FUN_00567370();
        if (local_170 == 0) {
          local_100 = local_190;
          local_fc = local_18c;
          local_f0 = local_160;
          local_ec = local_15c;
          local_f8 = local_188;
          local_114 = 0;
          local_104 = 0;
          local_f4 = 0;
          local_e4 = 0x3f800000;
          local_120 = fVar8;
          local_11c = fVar7;
          local_118 = fVar6;
          local_110 = local_18c * fVar6 - local_188 * fVar7;
          local_10c = local_188 * fVar8 - local_190 * fVar6;
          local_108 = local_190 * fVar7 - local_18c * fVar8;
          local_e8 = local_158;
          FUN_005ac68f(&local_120,&local_120,puVar9);
          iVar13 = 0;
          local_1b4 = 0;
          if (0 < param_1[4]) {
            do {
              if (*(int *)(param_1[3] + iVar13 + 0x10) == 1) {
                if (*(float *)(param_1[2] + 0x58) <= param_3) {
                  *(undefined4 *)(param_1[3] + iVar13 + 0x10) = 0;
                }
                else {
                  FUN_00401cd0();
                }
              }
              local_1b4 = local_1b4 + 1;
              iVar13 = iVar13 + 0xc0;
            } while ((int)local_1b4 < param_1[4]);
          }
        }
        iVar13 = param_1[2];
        fVar5 = (float)local_170 / (float)*(int *)(iVar13 + 4);
        fVar18 = (float10)FUN_00583f20(param_1 + 7,fVar5);
        fVar18 = fVar18 * (float10)*(float *)(iVar13 + 0x10) * (float10)_DAT_006cc7dc;
        afStack_a0[uVar10 * 4] = (float)((float10)local_160 + (float10)fVar8 * fVar18);
        afStack_a0[uVar10 * 4 + 1] = local_15c + (float)(fVar18 * (float10)fVar7);
        afStack_a0[uVar10 * 4 + 2] =
             (float)(fVar18 * (float10)fVar6) + *(float *)(iVar13 + 0x14) + local_158;
        afStack_a0[local_168 * 4] = (float)((float10)local_160 - (float10)fVar8 * fVar18);
        afStack_a0[local_168 * 4 + 1] = local_15c - (float)(fVar18 * (float10)fVar7);
        afStack_a0[local_168 * 4 + 2] =
             (local_158 - (float)(fVar18 * (float10)fVar6)) + *(float *)(iVar13 + 0x14);
        fVar5 = fVar5 + (float)((float10)fVar4 - fVar17);
        afStack_5c[uVar10 * 3] = fVar5;
        afStack_5c[local_168 * 3] = fVar5;
        uVar11 = FUN_00674898();
        auStack_30[uVar10 * 4] = uVar11;
        uVar12 = FUN_00674898();
        auStack_30[uVar10 * 4 + 1] = uVar12;
        uVar12 = FUN_00674898();
        auStack_30[uVar10 * 4 + 2] = uVar12;
        uVar12 = FUN_00674898();
        auStack_30[uVar10 * 4 + 3] = uVar12;
        auStack_30[local_168 * 4] = uVar11;
        auStack_30[local_168 * 4 + 1] = auStack_30[uVar10 * 4 + 1];
        auStack_30[local_168 * 4 + 2] = auStack_30[uVar10 * 4 + 2];
        auStack_30[local_168 * 4 + 3] = auStack_30[uVar10 * 4 + 3];
        local_1b4 = uVar10 ^ 3;
        local_168 = local_168 ^ 3;
        if (0 < local_170) {
          FUN_0040c300(param_1[6],puVar9,0);
        }
        local_170 = local_170 + 2;
      } while (local_170 <= *(int *)(param_1[2] + 4));
    }
  }
  return;
}

