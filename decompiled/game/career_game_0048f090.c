/* spd-match: far pct=4.58 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0048f090 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0048f090(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_1a0 [72];
  float local_158;
  undefined1 local_150 [16];
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined1 local_110 [8];
  float local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  undefined4 *local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_28;
  float local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006863b7;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004834e0();
  local_44 = param_1 + 0x12;
  *param_1 = &PTR_FUN_006c7b98;
  param_1[0xb] = 0;
  local_14 = 0;
  param_1[0x17] = 1;
  param_1[0x14] = 2;
  *local_44 = 100;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0x4000;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_64 = param_1 + 0x1e;
  param_1[0x23] = 1;
  param_1[0x20] = 2;
  *local_64 = 100;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0x4000;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar7 = param_1 + 0x2a;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  FUN_00440740();
  local_14 = 3; // M4.0.2-CE: CONCAT31(local_14._1_3_,3) -> 3 (ScopeIndex)
  local_e0 = 1.0;
  local_dc = 0.0;
  local_d8 = 0.0;
  local_d4 = 0;
  local_d0 = 0.0;
  local_cc = 1.0;
  local_c8 = 0.0;
  local_c4 = 0;
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b4 = 0;
  local_b0 = 0.0;
  local_ac = 0.0;
  local_a8 = 0.0;
  local_a4 = 0x3f800000;
  local_b8 = 1.0;
  if (*(float *)(param_3 + 0x3d4) <= _DAT_006cc79c) {
    fVar8 = ABS(_DAT_006cc7bc - *(float *)(param_3 + 0x98));
    if (fVar8 < _DAT_006cc8bc == (fVar8 == _DAT_006cc8bc)) {
      local_e0 = *(float *)(param_3 + 0x90);
      local_dc = *(float *)(param_3 + 0x94);
    }
    else {
      local_e0 = -*(float *)(param_3 + 0xb0);
      local_dc = -*(float *)(param_3 + 0xb4);
    }
  }
  FUN_005672b0();
  local_d0 = local_bc * local_d8 - local_dc * local_b8;
  local_cc = local_e0 * local_b8 - local_d8 * local_c0;
  local_c8 = local_c0 * local_dc - local_bc * local_e0;
  local_b0 = DAT_0073457c * *(float *)(param_3 + 0x70) + *(float *)(param_3 + 0x60);
  local_ac = DAT_0073457c * *(float *)(param_3 + 0x74) + *(float *)(param_3 + 100);
  local_a8 = DAT_0073457c * *(float *)(param_3 + 0x78) + *(float *)(param_3 + 0x68);
  iVar6 = param_1[7];
  local_ec = DAT_0073457c * *(float *)(iVar6 + 0x1e4) + *(float *)(iVar6 + 0x44);
  local_e8 = DAT_0073457c * *(float *)(iVar6 + 0x1e8) + *(float *)(iVar6 + 0x48);
  local_f0 = DAT_0073457c * *(float *)(iVar6 + 0x1e0) + *(float *)(iVar6 + 0x40);
  local_a0 = DAT_0073457c * *(float *)(iVar6 + 0x200) + *(float *)(iVar6 + 0x60);
  local_9c = DAT_0073457c * *(float *)(iVar6 + 0x204) + *(float *)(iVar6 + 100);
  local_98 = DAT_0073457c * *(float *)(iVar6 + 0x208) + *(float *)(iVar6 + 0x68);
  FUN_0040bc10();
  FUN_005abda2(&local_90,&local_f0,local_1a0);
  cVar3 = (**(code **)(*param_4 + 0x24))();
  local_24 = 1.0;
  if (cVar3 == '\0') {
    local_24 = -1.0;
  }
  local_90 = local_90 * local_24;
  iVar6 = param_1[7];
  local_8c = local_8c * local_24;
  local_88 = local_88 * local_24;
  local_140 = *(float *)(iVar6 + 0x1e0) - *(float *)(param_3 + 0x70);
  local_13c = *(float *)(iVar6 + 0x1e4) - *(float *)(param_3 + 0x74);
  local_158 = *(float *)(iVar6 + 0x1e8) - *(float *)(param_3 + 0x78);
  local_134 = 0;
  local_138 = local_158;
  FUN_005ac436(&local_140,&local_140,local_1a0);
  local_f4 = _DAT_006cc8a8;
  if (DAT_006cc7a4 <=
      (local_90 * local_b8 - local_88 * local_c0) * local_13c +
      (local_c0 * local_8c - local_bc * local_90) * local_138 +
      (local_88 * local_bc - local_8c * local_b8) * local_140) {
    local_f4 = _DAT_006cc7bc;
  }
  local_f4 = local_f4 * local_24;
  uVar4 = FUN_00564db0(local_90,local_8c);
  local_68 = (float)(uVar4 & 0xffff);
  local_24 = 0.0;
  local_28 = local_f4 * (float)(int)_DAT_006b6bd0 + (float)(int)local_68 * (float)(int)_DAT_006cc83c;
  do {
    FUN_00674898();
    fVar10 = (float10)FUN_00564b10();
    local_68 = (float)fVar10;
    fVar10 = (float10)FUN_00564b10();
    local_f8 = (float)fVar10;
    local_80 = (float)(fVar10 * (float10)_DAT_006b6bbc);
    local_78 = (float)DAT_006b6bc0;
    local_7c = local_68 * _DAT_006b6bbc;
    FUN_005abda2(local_150,&local_80,&local_e0);
    FUN_005825e0(local_64,local_150);
    local_80 = local_f8 * _DAT_006b6bb0;
    local_78 = (float)DAT_006b6bb4;
    local_7c = local_68 * _DAT_006b6bb0;
    FUN_005abda2(local_110,&local_80,&local_e0);
    FUN_004407b0(local_150,DAT_006b6ba8 + _DAT_006b6bb0,0);
    FUN_00441030(puVar7,0,1,local_110,DAT_006b6ba8,DAT_006b6bac);
    FUN_00441030(puVar7,1,1,local_110,DAT_006b6ba8,DAT_006b6bac);
    FUN_00441030(puVar7,0,1,local_150,DAT_006b6ba8,DAT_006b6bac);
    FUN_00441030(puVar7,1,1,local_150,DAT_006b6ba8,DAT_006b6bac);
    FUN_004407b0(local_110,0x41200000,0);
    fVar10 = (float10)FUN_00440a40(puVar7,local_110,0,0,0);
    if ((fVar10 - (float10)_DAT_006b6bb8 < (float10)local_108) &&
       ((float10)local_108 < fVar10 + (float10)_DAT_006b6bb8)) {
      local_108 = (float)(fVar10 + (float10)_DAT_006b6bb8);
    }
    FUN_005825e0(local_44,local_110);
    puVar2 = local_44;
    local_24 = (float)((int)local_24 + 1);
  } while ((int)local_24 < 0x20);
  FUN_005829e0(0);
  FUN_00582a90(0);
  iVar6 = param_1[7];
  local_80 = *(float *)(iVar6 + 0x1e0) - *(float *)(param_3 + 0x70);
  local_7c = *(float *)(iVar6 + 0x1e4) - *(float *)(param_3 + 0x74);
  local_158 = *(float *)(iVar6 + 0x1e8) - *(float *)(param_3 + 0x78);
  iVar6 = puVar2[2];
  if (iVar6 == 0) {
LAB_0048f79c:
    local_28 = (float)(puVar2[1] + -1);
    fVar8 = (float)(int)local_28;
  }
  else if (iVar6 == 1) {
    fVar8 = (float)(int)puVar2[1];
  }
  else {
    fVar8 = DAT_006cc7a4;
    if (iVar6 == 2) goto LAB_0048f79c;
  }
  fVar8 = (fVar8 / _DAT_006b6bc8) * DAT_006b6bc4;
  local_60 = local_60 * fVar8;
  local_5c = local_5c * fVar8;
  local_58 = local_58 * fVar8;
  local_40 = local_80 * DAT_006b6bc4;
  local_3c = local_7c * DAT_006b6bc4;
  local_38 = local_158 * DAT_006b6bc4;
  local_78 = local_158;
  pvVar5 = _malloc(0x90);
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  puVar7 = local_64;
  fVar8 = DAT_006b6bc4;
  param_1[0xd] = iVar6;
  *(float *)(iVar6 + 0x24) = fVar8;
  *(float *)(iVar6 + 0x84) = fVar8;
  *(float *)(iVar6 + 0x54) = fVar8;
  iVar6 = param_1[0xd];
  *(undefined2 *)(iVar6 + 0x2e) = 0;
  *(undefined2 *)(iVar6 + 0x5e) = 0;
  *(undefined2 *)(iVar6 + 0x8e) = 0;
  pfVar1 = (float *)param_1[0xd];
  *pfVar1 = local_f0;
  if (local_f0 != pfVar1[2]) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xc] = local_ec;
  if (local_ec != pfVar1[0xe]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x18] = local_e8;
  if (local_e8 != pfVar1[0x1a]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0xd];
  *(float *)(iVar6 + 4) = local_40;
  if (local_40 != *(float *)(iVar6 + 0xc)) {
    *(undefined2 *)(iVar6 + 0x2c) = 2;
  }
  *(float *)(iVar6 + 0x34) = local_3c;
  if (local_3c != *(float *)(iVar6 + 0x3c)) {
    *(undefined2 *)(iVar6 + 0x5c) = 2;
  }
  *(float *)(iVar6 + 100) = local_38;
  if (local_38 != *(float *)(iVar6 + 0x6c)) {
    *(undefined2 *)(iVar6 + 0x8c) = 2;
  }
  pfVar1 = (float *)param_1[0xd];
  pfVar1[2] = local_120;
  if (local_120 != *pfVar1) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xe] = local_11c;
  if (local_11c != pfVar1[0xc]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x1a] = local_118;
  if (local_118 != pfVar1[0x18]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0xd];
  *(float *)(iVar6 + 0x3c) = local_5c;
  *(float *)(iVar6 + 0x6c) = local_58;
  *(float *)(iVar6 + 0xc) = local_60;
  FUN_005829e0(0);
  FUN_00582a90(0);
  iVar6 = param_1[7];
  local_80 = *(float *)(iVar6 + 0x200) - *(float *)(param_3 + 0x70);
  local_7c = *(float *)(iVar6 + 0x204) - *(float *)(param_3 + 0x74);
  local_158 = *(float *)(iVar6 + 0x208) - *(float *)(param_3 + 0x78);
  iVar6 = puVar7[2];
  if (iVar6 == 0) {
LAB_0048f9b2:
    local_28 = (float)(puVar7[1] + -1);
    fVar8 = (float)(int)local_28;
  }
  else if (iVar6 == 1) {
    fVar8 = (float)(int)puVar7[1];
  }
  else {
    fVar8 = DAT_006cc7a4;
    if (iVar6 == 2) goto LAB_0048f9b2;
  }
  fVar8 = (fVar8 / _DAT_006b6bc8) * DAT_006b6bc4;
  local_60 = local_60 * fVar8;
  local_5c = local_5c * fVar8;
  local_58 = local_58 * fVar8;
  local_40 = local_80 * DAT_006b6bc4;
  local_3c = local_7c * DAT_006b6bc4;
  local_38 = local_158 * DAT_006b6bc4;
  local_78 = local_158;
  pvVar5 = _malloc(0x90);
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar8 = DAT_006b6bc4;
  param_1[0xf] = iVar6;
  *(float *)(iVar6 + 0x24) = fVar8;
  *(float *)(iVar6 + 0x84) = fVar8;
  *(float *)(iVar6 + 0x54) = fVar8;
  iVar6 = param_1[0xf];
  *(undefined2 *)(iVar6 + 0x2e) = 0;
  *(undefined2 *)(iVar6 + 0x5e) = 0;
  *(undefined2 *)(iVar6 + 0x8e) = 0;
  pfVar1 = (float *)param_1[0xf];
  *pfVar1 = local_a0;
  if (local_a0 != pfVar1[2]) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xc] = local_9c;
  if (local_9c != pfVar1[0xe]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x18] = local_98;
  if (local_98 != pfVar1[0x1a]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0xf];
  *(float *)(iVar6 + 4) = local_40;
  if (local_40 != *(float *)(iVar6 + 0xc)) {
    *(undefined2 *)(iVar6 + 0x2c) = 2;
  }
  *(float *)(iVar6 + 0x34) = local_3c;
  if (local_3c != *(float *)(iVar6 + 0x3c)) {
    *(undefined2 *)(iVar6 + 0x5c) = 2;
  }
  *(float *)(iVar6 + 100) = local_38;
  if (local_38 != *(float *)(iVar6 + 0x6c)) {
    *(undefined2 *)(iVar6 + 0x8c) = 2;
  }
  pfVar1 = (float *)param_1[0xf];
  pfVar1[2] = local_120;
  if (local_120 != *pfVar1) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xe] = local_11c;
  if (local_11c != pfVar1[0xc]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x1a] = local_118;
  if (local_118 != pfVar1[0x18]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0xf];
  *(float *)(iVar6 + 0x3c) = local_5c;
  *(float *)(iVar6 + 0xc) = local_60;
  *(float *)(iVar6 + 0x6c) = local_58;
  iVar6 = local_44[2];
  if (iVar6 == 0) {
LAB_0048fb81:
    fVar8 = (float)(local_44[1] + -1);
    local_28 = fVar8;
LAB_0048fb8b:
    local_24 = (float)(int)fVar8;
  }
  else {
    if (iVar6 == 1) {
      fVar8 = (float)local_44[1];
      goto LAB_0048fb8b;
    }
    if (iVar6 == 2) goto LAB_0048fb81;
    local_24 = 0.0;
  }
  FUN_005829e0(local_24);
  iVar6 = local_44[2];
  if (iVar6 == 0) {
LAB_0048fbbe:
    fVar8 = (float)(local_44[1] + -1);
    local_28 = fVar8;
LAB_0048fbc8:
    local_24 = (float)(int)fVar8;
  }
  else {
    if (iVar6 == 1) {
      fVar8 = (float)local_44[1];
      goto LAB_0048fbc8;
    }
    if (iVar6 == 2) goto LAB_0048fbbe;
    local_24 = 0.0;
  }
  FUN_00582a90(local_24);
  iVar6 = local_44[2];
  if (iVar6 == 0) {
LAB_0048fbf6:
    local_28 = (float)(local_44[1] + -1);
    fVar8 = (float)(int)local_28;
  }
  else if (iVar6 == 1) {
    fVar8 = (float)(int)local_44[1];
  }
  else {
    fVar8 = DAT_006cc7a4;
    if (iVar6 == 2) goto LAB_0048fbf6;
  }
  iVar6 = param_1[7];
  fVar8 = (fVar8 / _DAT_006b6bc8) * DAT_006b6bc4;
  local_40 = local_40 * fVar8;
  local_3c = local_3c * fVar8;
  local_38 = local_38 * fVar8;
  local_60 = DAT_006b6bcc * *(float *)(iVar6 + 0x1e0);
  local_5c = *(float *)(iVar6 + 0x1e4) * DAT_006b6bcc;
  local_58 = *(float *)(iVar6 + 0x1e8) * DAT_006b6bcc;
  pvVar5 = _malloc(0x90);
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar8 = DAT_006b6bcc;
  param_1[0xe] = iVar6;
  *(float *)(iVar6 + 0x24) = fVar8;
  *(float *)(iVar6 + 0x84) = fVar8;
  *(float *)(iVar6 + 0x54) = fVar8;
  iVar6 = param_1[0xe];
  *(undefined2 *)(iVar6 + 0x2e) = 0;
  *(undefined2 *)(iVar6 + 0x5e) = 0;
  *(undefined2 *)(iVar6 + 0x8e) = 0;
  pfVar1 = (float *)param_1[0xe];
  *pfVar1 = local_130;
  if (local_130 != pfVar1[2]) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xc] = local_12c;
  if (local_12c != pfVar1[0xe]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x18] = local_128;
  if (local_128 != pfVar1[0x1a]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0xe];
  *(float *)(iVar6 + 4) = local_40;
  if (local_40 != *(float *)(iVar6 + 0xc)) {
    *(undefined2 *)(iVar6 + 0x2c) = 2;
  }
  *(float *)(iVar6 + 0x34) = local_3c;
  if (local_3c != *(float *)(iVar6 + 0x3c)) {
    *(undefined2 *)(iVar6 + 0x5c) = 2;
  }
  *(float *)(iVar6 + 100) = local_38;
  if (local_38 != *(float *)(iVar6 + 0x6c)) {
    *(undefined2 *)(iVar6 + 0x8c) = 2;
  }
  pfVar1 = (float *)param_1[0xe];
  pfVar1[2] = local_f0;
  if (local_f0 != *pfVar1) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xe] = local_ec;
  if (local_ec != pfVar1[0xc]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x1a] = local_e8;
  if (local_e8 != pfVar1[0x18]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0xe];
  *(float *)(iVar6 + 0x3c) = local_5c;
  *(float *)(iVar6 + 0xc) = local_60;
  *(float *)(iVar6 + 0x6c) = local_58;
  iVar6 = local_64[2];
  if (iVar6 == 0) {
LAB_0048fdc5:
    fVar8 = (float)(local_64[1] + -1);
    local_28 = fVar8;
LAB_0048fdcf:
    local_24 = (float)(int)fVar8;
  }
  else {
    if (iVar6 == 1) {
      fVar8 = (float)local_64[1];
      goto LAB_0048fdcf;
    }
    if (iVar6 == 2) goto LAB_0048fdc5;
    local_24 = 0.0;
  }
  FUN_005829e0(local_24);
  iVar6 = local_64[2];
  if (iVar6 == 0) {
LAB_0048fe02:
    fVar8 = (float)(local_64[1] + -1);
    local_28 = fVar8;
LAB_0048fe0c:
    local_24 = (float)(int)fVar8;
  }
  else {
    if (iVar6 == 1) {
      fVar8 = (float)local_64[1];
      goto LAB_0048fe0c;
    }
    if (iVar6 == 2) goto LAB_0048fe02;
    local_24 = 0.0;
  }
  FUN_00582a90(local_24);
  iVar6 = local_64[2];
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      fVar8 = (float)(int)local_64[1];
      goto LAB_0048fe44;
    }
    fVar8 = DAT_006cc7a4;
    if (iVar6 != 2) goto LAB_0048fe44;
  }
  local_28 = (float)(local_64[1] + -1);
  fVar8 = (float)(int)local_28;
LAB_0048fe44:
  iVar6 = param_1[7];
  fVar8 = (fVar8 / _DAT_006b6bc8) * DAT_006b6bc4;
  local_40 = local_40 * fVar8;
  local_3c = local_3c * fVar8;
  local_38 = local_38 * fVar8;
  local_60 = DAT_006b6bcc * *(float *)(iVar6 + 0x200);
  local_5c = *(float *)(iVar6 + 0x204) * DAT_006b6bcc;
  local_58 = *(float *)(iVar6 + 0x208) * DAT_006b6bcc;
  pvVar5 = _malloc(0x90);
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar8 = DAT_006b6bcc;
  param_1[0x10] = iVar6;
  *(float *)(iVar6 + 0x24) = fVar8;
  *(float *)(iVar6 + 0x84) = fVar8;
  *(float *)(iVar6 + 0x54) = fVar8;
  iVar6 = param_1[0x10];
  *(undefined2 *)(iVar6 + 0x2e) = 0;
  *(undefined2 *)(iVar6 + 0x5e) = 0;
  *(undefined2 *)(iVar6 + 0x8e) = 0;
  pfVar1 = (float *)param_1[0x10];
  *pfVar1 = local_130;
  if (local_130 != pfVar1[2]) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xc] = local_12c;
  if (local_12c != pfVar1[0xe]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x18] = local_128;
  if (local_128 != pfVar1[0x1a]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0x10];
  *(float *)(iVar6 + 4) = local_40;
  if (local_40 != *(float *)(iVar6 + 0xc)) {
    *(undefined2 *)(iVar6 + 0x2c) = 2;
  }
  *(float *)(iVar6 + 0x34) = local_3c;
  if (local_3c != *(float *)(iVar6 + 0x3c)) {
    *(undefined2 *)(iVar6 + 0x5c) = 2;
  }
  *(float *)(iVar6 + 100) = local_38;
  if (local_38 != *(float *)(iVar6 + 0x6c)) {
    *(undefined2 *)(iVar6 + 0x8c) = 2;
  }
  pfVar1 = (float *)param_1[0x10];
  pfVar1[2] = local_a0;
  if (local_a0 != *pfVar1) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  pfVar1[0xe] = local_9c;
  if (local_9c != pfVar1[0xc]) {
    *(undefined2 *)(pfVar1 + 0x17) = 2;
  }
  pfVar1[0x1a] = local_98;
  if (local_98 != pfVar1[0x18]) {
    *(undefined2 *)(pfVar1 + 0x23) = 2;
  }
  iVar6 = param_1[0x10];
  *(float *)(iVar6 + 0x3c) = local_5c;
  *(float *)(iVar6 + 0xc) = local_60;
  *(float *)(iVar6 + 0x6c) = local_58;
  puVar7 = _malloc(0x30);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[9] = 0x3f800000;
    puVar7[10] = 0x3f800000;
    *(undefined2 *)(puVar7 + 0xb) = 0;
    *(undefined2 *)((int)puVar7 + 0x2e) = 1;
  }
  param_1[0x11] = (undefined4)puVar7;
  *(undefined2 *)((int)puVar7 + 0x2e) = 0;
  *(float *)(param_1[0x11] + 0x24) = DAT_006b6bc4;
  puVar7 = (undefined4 *)param_1[0x11];
  *puVar7 = 0x3f800000;
  if (puVar7[2] != 0x3f800000) {
    *(undefined2 *)(puVar7 + 0xb) = 2;
  }
  pfVar1 = (float *)param_1[0x11];
  bVar9 = DAT_006b6bd8 != *pfVar1;
  pfVar1[2] = DAT_006b6bd8;
  if (bVar9) {
    *(undefined2 *)(pfVar1 + 0xb) = 2;
  }
  iVar6 = param_1[7];
  fVar10 = (float10)FUN_00564b10();
  local_28 = (float)fVar10;
  fVar10 = (float10)FUN_00564b10();
  bVar9 = DAT_00735f5c == 0;
  param_1[0xc] = (float)((float10)local_28 / fVar10);
  if (bVar9) {
    *(undefined4 *)(iVar6 + 0x280) = 0;
    *(undefined4 *)(param_1[7] + 0x284) = 0;
  }
  ExceptionList = local_1c;
  return param_1;
}

