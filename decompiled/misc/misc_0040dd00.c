/* spd-match: far pct=8.33 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0040dd00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dd00(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  uint uVar6;
  undefined4 *unaff_ESI;
  bool bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST1;
  float local_c;
  
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[4] = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[7] = 0;
    unaff_ESI[8] = 0;
    unaff_ESI[9] = 0;
    unaff_ESI[0xb] = 0;
    unaff_ESI[0xc] = 0;
    unaff_ESI[0xd] = 0;
    unaff_ESI[0xe] = 0;
    *unaff_ESI = 0x3f800000;
    unaff_ESI[5] = 0x3f800000;
    unaff_ESI[10] = 0x3f800000;
    unaff_ESI[0xf] = 0x3f800000;
    unaff_ESI[0x11] = 0;
    unaff_ESI[0x12] = 0;
    unaff_ESI[0x13] = 0;
    unaff_ESI[0x14] = 0;
    unaff_ESI[0x16] = 0;
    unaff_ESI[0x17] = 0;
    unaff_ESI[0x18] = 0;
    unaff_ESI[0x19] = 0;
    unaff_ESI[0x1b] = 0;
    unaff_ESI[0x1c] = 0;
    unaff_ESI[0x1d] = 0;
    unaff_ESI[0x1e] = 0;
    unaff_ESI[0x10] = 0x3f800000;
    unaff_ESI[0x15] = 0x3f800000;
    unaff_ESI[0x1a] = 0x3f800000;
    unaff_ESI[0x1f] = 0x3f800000;
    return;
  }
  FUN_00401cd0();
  local_c = *(float *)(iVar4 + 0xbc);
  if (param_2 != (float)_DAT_006ccaf8) {
    local_c = param_2;
  }
  if (param_3 != (float)_DAT_006ccaf8) {
    local_c = param_3;
  }
  FUN_00674898();
  FUN_00674898();
  unaff_ESI[0x10] = 1.0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0x3f800000;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0x3f800000;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0x3f800000;
  fVar3 = (float)(extraout_ST1 / (extraout_ST1 - (float10)local_c));
  fVar9 = (float10)FUN_00564b10();
  fVar10 = (float10)FUN_00564b10();
  unaff_ESI[0x10] = (float)((float10)_DAT_006cc7bc / ((float10)(float)fVar9 / fVar10));
  fVar9 = (float10)FUN_00564b10();
  fVar10 = (float10)FUN_00564b10();
  unaff_ESI[0x1a] = fVar3;
  unaff_ESI[0x1b] = extraout_EDX;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x15] = (float)-((float10)_DAT_006cc7bc / ((float10)(float)fVar9 / fVar10));
  unaff_ESI[0x1e] = -(fVar3 * local_c);
  fVar9 = (float10)FUN_0040dcb0();
  *(float *)(param_1 + 0xc) = (float)fVar9;
  pfVar1 = (float *)(unaff_ESI + 0x20);
  unaff_ESI[3] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0xb] = 0;
  FUN_005ac68f(pfVar1);
  bVar7 = true;
  bVar8 = false;
  uVar5 = 0;
  do {
    if (bVar7 || bVar8) {
      switch(uVar5) {
      default:
        unaff_ESI[0x30] = (float)unaff_ESI[0x23] + *pfVar1;
        unaff_ESI[0x31] = (float)unaff_ESI[0x27] + (float)unaff_ESI[0x24];
        unaff_ESI[0x32] = (float)unaff_ESI[0x2b] + (float)unaff_ESI[0x28];
        unaff_ESI[0x33] = (float)unaff_ESI[0x2f] + (float)unaff_ESI[0x2c];
        break;
      case 1:
        unaff_ESI[0x34] = (float)unaff_ESI[0x23] - *pfVar1;
        unaff_ESI[0x35] = (float)unaff_ESI[0x27] - (float)unaff_ESI[0x24];
        unaff_ESI[0x36] = (float)unaff_ESI[0x2b] - (float)unaff_ESI[0x28];
        unaff_ESI[0x37] = (float)unaff_ESI[0x2f] - (float)unaff_ESI[0x2c];
        break;
      case 2:
        unaff_ESI[0x38] = (float)unaff_ESI[0x23] + (float)unaff_ESI[0x21];
        unaff_ESI[0x39] = (float)unaff_ESI[0x27] + (float)unaff_ESI[0x25];
        unaff_ESI[0x3a] = (float)unaff_ESI[0x2b] + (float)unaff_ESI[0x29];
        unaff_ESI[0x3b] = (float)unaff_ESI[0x2f] + (float)unaff_ESI[0x2d];
        break;
      case 3:
        unaff_ESI[0x3c] = (float)unaff_ESI[0x23] - (float)unaff_ESI[0x21];
        unaff_ESI[0x3d] = (float)unaff_ESI[0x27] - (float)unaff_ESI[0x25];
        unaff_ESI[0x3e] = (float)unaff_ESI[0x2b] - (float)unaff_ESI[0x29];
        unaff_ESI[0x3f] = (float)unaff_ESI[0x2f] - (float)unaff_ESI[0x2d];
        break;
      case 4:
        unaff_ESI[0x40] = unaff_ESI[0x22];
        unaff_ESI[0x41] = unaff_ESI[0x26];
        unaff_ESI[0x42] = unaff_ESI[0x2a];
        unaff_ESI[0x43] = unaff_ESI[0x2e];
        break;
      case 5:
        unaff_ESI[0x44] = (float)unaff_ESI[0x23] - (float)unaff_ESI[0x22];
        unaff_ESI[0x45] = (float)unaff_ESI[0x27] - (float)unaff_ESI[0x26];
        unaff_ESI[0x46] = (float)unaff_ESI[0x2b] - (float)unaff_ESI[0x2a];
        unaff_ESI[0x47] = (float)unaff_ESI[0x2f] - (float)unaff_ESI[0x2e];
      }
    }
    pfVar2 = (float *)(unaff_ESI + (uVar5 + 0xc) * 4);
    uVar6 = uVar5 + 1;
    bVar7 = uVar6 < 5;
    bVar8 = uVar6 == 5;
    fVar3 = _DAT_006cc7bc /
            SQRT((float)unaff_ESI[(uVar5 + 0xc) * 4 + 2] * (float)unaff_ESI[(uVar5 + 0xc) * 4 + 2] +
                 pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
    *pfVar2 = fVar3 * *pfVar2;
    unaff_ESI[uVar5 * 4 + 0x31] = fVar3 * (float)unaff_ESI[uVar5 * 4 + 0x31];
    unaff_ESI[uVar5 * 4 + 0x32] = fVar3 * (float)unaff_ESI[uVar5 * 4 + 0x32];
    unaff_ESI[uVar5 * 4 + 0x33] = fVar3 * (float)unaff_ESI[uVar5 * 4 + 0x33];
    uVar5 = uVar6;
  } while ((int)uVar6 < 6);
  return;
}

