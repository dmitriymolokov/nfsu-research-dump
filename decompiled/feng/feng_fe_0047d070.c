/* spd-match: far pct=8.24 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0047d070 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d070(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 extraout_ST0;
  undefined4 local_90 [12];
  float local_60;
  float local_5c;
  float local_58 [2];
  undefined1 local_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  
  if (DAT_00735f5c == 0) {
    puVar5 = param_1;
    puVar6 = param_1 + 0x34;
    for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    param_1[0x9d] = param_3;
    if ((DAT_00779730 == 0) || (DAT_00734958 != 0)) {
      if (DAT_0078eb40 != 0) {
        DAT_0078eb40 = 0;
      }
    }
    else {
      if (DAT_0078eb40 == 0) {
        DAT_0078eb40 = 1;
      }
      puVar5 = &DAT_00779734;
      puVar6 = local_90;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_60 = local_60 * _DAT_006cc79c;
      local_5c = local_5c * _DAT_006cc79c;
      local_58[0] = local_58[0] * _DAT_006cc79c;
      local_58[1] = 1.0;
    }
    FUN_00401cd0();
    FUN_005ac8d8(local_50,param_1);
    pfVar1 = (float *)(param_1 + 0x10);
    uStack_4c = 0;
    uStack_3c = 0;
    uStack_2c = 0;
    FUN_005abda2(pfVar1,param_1 + 0xc,local_58);
    *pfVar1 = -*pfVar1;
    param_1[0x11] = -(float)param_1[0x11];
    param_1[0x12] = -(float)param_1[0x12];
    FUN_00567370();
    fVar2 = (float)param_1[0x2c];
    param_1[0x18] = fVar2 * (float)param_1[0x14];
    param_1[0x19] = (float)param_1[0x15] * fVar2;
    param_1[0x1a] = (float)param_1[0x16] * fVar2;
    param_1[0x18] = *pfVar1 + (float)param_1[0x18];
    param_1[0x19] = (float)param_1[0x11] + (float)param_1[0x19];
    param_1[0x1a] = (float)param_1[0x12] + (float)param_1[0x1a];
    if (*(char *)(param_1 + 0x9c) != '\0') {
      *(undefined1 *)(param_1 + 0x9c) = 0;
      puVar5 = param_1;
      puVar6 = param_1 + 0x34;
      for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1[0x9d] = 0x3f800000;
    }
    if (DAT_006cc7a4 < (float)param_1[0x9d]) {
      fVar2 = _DAT_006cc7bc / (float)param_1[0x9d];
      param_1[0x7b] = 0;
      param_1[0x78] = (float)param_1[0x10] - (float)param_1[0x44];
      param_1[0x7a] = (float)param_1[0x12] - (float)param_1[0x46];
      param_1[0x79] = (float)param_1[0x11] - (float)param_1[0x45];
      param_1[0x78] = fVar2 * (float)param_1[0x78];
      param_1[0x79] = fVar2 * (float)param_1[0x79];
      param_1[0x7a] = fVar2 * (float)param_1[0x7a];
      param_1[0x7f] = 0;
      param_1[0x7c] = (float)param_1[0x14] - (float)param_1[0x48];
      param_1[0x7e] = (float)param_1[0x16] - (float)param_1[0x4a];
      param_1[0x7d] = (float)param_1[0x15] - (float)param_1[0x49];
      param_1[0x7c] = fVar2 * (float)param_1[0x7c];
      param_1[0x7d] = fVar2 * (float)param_1[0x7d];
      param_1[0x7e] = fVar2 * (float)param_1[0x7e];
      param_1[0x80] = (float)param_1[0x18] - (float)param_1[0x4c];
      param_1[0x82] = (float)param_1[0x1a] - (float)param_1[0x4e];
      param_1[0x83] = 0;
      param_1[0x81] = (float)param_1[0x19] - (float)param_1[0x4d];
      param_1[0x80] = fVar2 * (float)param_1[0x80];
      param_1[0x81] = fVar2 * (float)param_1[0x81];
      param_1[0x82] = fVar2 * (float)param_1[0x82];
      param_1[0x94] = ((float)param_1[0x2c] - (float)param_1[0x60]) * fVar2;
      param_1[0x95] = ((float)param_1[0x2d] - (float)param_1[0x61]) * fVar2;
      param_1[0x96] = ((float)param_1[0x2e] - (float)param_1[0x62]) * fVar2;
      param_1[0x97] = ((float)param_1[0x2f] - (float)param_1[99]) * fVar2;
      param_1[0x98] = ((float)param_1[0x30] - (float)param_1[100]) * fVar2;
      uVar3 = FUN_00674898();
      *(undefined2 *)(param_1 + 0x99) = uVar3;
      param_1[0x86] = (float)param_1[0x1e] - (float)param_1[0x52];
      param_1[0x84] = (float)param_1[0x1c] - (float)param_1[0x50];
      param_1[0x87] = (float)param_1[0x1f] - (float)param_1[0x53];
      param_1[0x85] = (float)param_1[0x1d] - (float)param_1[0x51];
      param_1[0x84] = (float)(extraout_ST0 * (float10)(float)param_1[0x84]);
      param_1[0x85] = (float)(extraout_ST0 * (float10)(float)param_1[0x85]);
      param_1[0x86] = (float)(extraout_ST0 * (float10)(float)param_1[0x86]);
      param_1[0x87] = (float)(extraout_ST0 * (float10)(float)param_1[0x87]);
      param_1[0x8e] = (float)param_1[0x26] - (float)param_1[0x5a];
      param_1[0x8c] = (float)param_1[0x24] - (float)param_1[0x58];
      param_1[0x8f] = (float)param_1[0x27] - (float)param_1[0x5b];
      param_1[0x8d] = (float)param_1[0x25] - (float)param_1[0x59];
      param_1[0x8c] = (float)(extraout_ST0 * (float10)(float)param_1[0x8c]);
      param_1[0x8d] = (float)(extraout_ST0 * (float10)(float)param_1[0x8d]);
      param_1[0x8e] = (float)(extraout_ST0 * (float10)(float)param_1[0x8e]);
      param_1[0x8f] = (float)(extraout_ST0 * (float10)(float)param_1[0x8f]);
      param_1[0x8a] = (float)param_1[0x22] - (float)param_1[0x56];
      param_1[0x88] = (float)param_1[0x20] - (float)param_1[0x54];
      param_1[0x8b] = (float)param_1[0x23] - (float)param_1[0x57];
      param_1[0x89] = (float)param_1[0x21] - (float)param_1[0x55];
      param_1[0x88] = (float)(extraout_ST0 * (float10)(float)param_1[0x88]);
      param_1[0x89] = (float)(extraout_ST0 * (float10)(float)param_1[0x89]);
      param_1[0x8a] = (float)(extraout_ST0 * (float10)(float)param_1[0x8a]);
      param_1[0x8b] = (float)(extraout_ST0 * (float10)(float)param_1[0x8b]);
      param_1[0x92] = (float)param_1[0x2a] - (float)param_1[0x5e];
      param_1[0x90] = (float)param_1[0x28] - (float)param_1[0x5c];
      param_1[0x93] = (float)param_1[0x2b] - (float)param_1[0x5f];
      param_1[0x91] = (float)param_1[0x29] - (float)param_1[0x5d];
      param_1[0x90] = (float)(extraout_ST0 * (float10)(float)param_1[0x90]);
      param_1[0x91] = (float)(extraout_ST0 * (float10)(float)param_1[0x91]);
      param_1[0x92] = (float)(extraout_ST0 * (float10)(float)param_1[0x92]);
      param_1[0x93] = (float)(extraout_ST0 * (float10)(float)param_1[0x93]);
    }
  }
  return;
}

