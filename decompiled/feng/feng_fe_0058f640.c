/* spd-match: far pct=13.66 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0058f640 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f640(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,float param_11,float param_12)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 auStack_17c [12];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  undefined4 uStack_130;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_c8;
  float fStack_c4;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 local_50 [76];
  
  if ((&DAT_00737888)[*(int *)(param_1 + 0xc4) * 0x3c] != '\0') {
    local_1b8 = 0.0;
    local_1b4 = 0;
    FUN_00590ad0();
    cVar3 = FUN_005679b0(param_6,4);
    if (cVar3 != '\0') {
      FUN_0040be70();
      local_170 = 0x3f800000;
      local_16c = 0;
      local_168 = 0;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0x3f800000;
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_148 = 1.0;
      local_144 = 0.0;
      local_140 = 0;
      local_13c = 0;
      local_138 = 0.0;
      local_134 = 1.0;
      FUN_0040b930();
      FUN_005ac68f(&local_170,&local_170,local_50);
      fStack_1bc = fStack_1c4 - *param_4;
      local_1b4 = 0;
      local_1b8 = fStack_1c0 - param_4[1];
      FUN_005abda2(&fStack_1bc,&fStack_1bc,auStack_17c);
      FUN_004010a0(&fStack_1a8,8,4,FUN_004ad8d0);
      fStack_1ac = param_11 * _DAT_006cc7dc;
      fStack_1b0 = param_12 * _DAT_006cc7dc;
      FUN_00590b50(param_1,&stack0xfffffe30,fStack_1b0,fStack_1b0,fStack_1ac,fStack_1ac);
      iVar4 = *(int *)(param_1 + 0xc4) * 0x3c;
      uStack_120 = 0;
      uStack_130 = 0;
      fVar1 = *(float *)(&DAT_00737860 + iVar4) + *(float *)(param_1 + 0x70);
      fVar1 = fVar1 + fVar1;
      fVar2 = *(float *)(&DAT_00737864 + iVar4) + *(float *)(param_1 + 0x74);
      fVar2 = fVar2 + fVar2;
      fStack_128 = -(fStack_1a8 * fVar1);
      fStack_124 = -(fStack_1a4 * fVar2);
      local_138 = -(fStack_1a0 * fVar1);
      local_134 = -(fStack_19c * fVar2);
      local_148 = -(fStack_198 * fVar1);
      local_144 = -(fStack_194 * fVar2);
      fStack_118 = -(fStack_190 * fVar1);
      fStack_114 = -(fStack_18c * fVar2);
      local_140 = 0;
      uStack_110 = 0;
      fStack_f8 = fStack_128;
      fStack_f4 = fStack_124;
      fStack_e8 = local_138;
      fStack_e4 = local_134;
      fStack_d8 = local_148;
      fStack_d4 = local_144;
      fStack_c8 = fStack_118;
      fStack_c4 = fStack_114;
      FUN_00590dd0(param_1,&local_138,&local_148,&fStack_118);
      uStack_86 = param_7[2];
      uStack_88 = *param_7;
      uStack_87 = param_7[1];
      uStack_84 = uStack_88;
      uStack_83 = uStack_87;
      uStack_82 = uStack_86;
      uStack_80 = uStack_88;
      uStack_7f = uStack_87;
      uStack_7e = uStack_86;
      uStack_7c = uStack_88;
      uStack_7b = uStack_87;
      uStack_7a = uStack_86;
      FUN_0058fb10(param_2,auStack_108,param_9,param_8);
    }
  }
  return;
}

