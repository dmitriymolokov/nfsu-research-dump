/* Decompiled from Speed.exe @ 004f1d80 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1d80(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  undefined4 uStack_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [3];
  undefined1 local_50 [76];
  
  if (DAT_00733f74 != 0) {
    if (DAT_00733f6c == 0) {
      puVar9 = DAT_0073551c;
      if (DAT_0073551c == (undefined *)0x0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      puVar9 = &DAT_00737320;
    }
    local_90 = 0x3f800000;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0x3f800000;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0x3f800000;
    local_64 = 0;
    local_5c[2] = 0x3f800000;
    local_60 = 0x43a00000;
    local_5c[0] = 0x43700000;
    local_5c[1] = 0;
    local_94 = FUN_004f1810(param_1,&local_a4,*(undefined2 *)(param_2 + 0x20),0x3f800000);
    thunk_FUN_005ac68f(local_50,local_50,&local_90);
    if (param_3 == 0) {
      param_3 = FUN_004f2db0(param_1,param_2,puVar9);
    }
    else {
      FUN_00514bf0(param_3);
    }
    iVar6 = (int)*(short *)(puVar9 + 0x44);
    iVar8 = (int)*(short *)(puVar9 + 0x46);
    fVar2 = (float)iVar6;
    if (iVar6 < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    fVar4 = (float)iVar8;
    if (iVar8 < 0) {
      fVar4 = fVar4 + _DAT_006cc858;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      uVar7 = iVar6 - 1;
      iVar6 = 2;
      while (uVar7 = uVar7 >> 1, uVar7 != 0) {
        iVar6 = iVar6 << 1;
      }
    }
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      uVar7 = iVar8 - 1;
      iVar8 = 2;
      while (uVar7 = uVar7 >> 1, uVar7 != 0) {
        iVar8 = iVar8 << 1;
      }
    }
    fVar3 = (float)iVar6;
    if (iVar6 < 0) {
      fVar3 = fVar3 + _DAT_006cc858;
    }
    fVar5 = (float)iVar8;
    if (iVar8 < 0) {
      fVar5 = fVar5 + _DAT_006cc858;
    }
    uStack_b0 = (((int)local_a4 / 2 << 8 | (int)uStack_b0 / 2) << 8 | (int)uStack_ac / 2) << 8 |
                (int)uStack_a8 / 2;
    puVar10 = local_5c;
    puVar11 = (undefined4 *)(param_3 + 0x20);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    uStack_ac = uStack_b0;
    uStack_a8 = uStack_b0;
    local_a4 = uStack_b0;
    FUN_005146d0(param_3,0xbf000000,0xbf000000,0x3f000000,0x3f000000,0x3f800000,
                 (fVar2 / fVar3) * DAT_006cc7a4,(fVar4 / fVar5) * DAT_006cc7a4,fVar2 / fVar3,
                 fVar4 / fVar5,&uStack_b0,uStack_a0);
    *(undefined **)(param_3 + 0x14) = puVar9;
    FUN_00514b90(param_3);
  }
  return;
}

