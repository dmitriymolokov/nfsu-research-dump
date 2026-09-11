/* Decompiled from Speed.exe @ 00480310 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480310(int param_1,float *param_2,float *param_3,float *param_4,char *param_5,int param_6
                 )

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char cVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float10 fVar30;
  float10 fVar31;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  fVar2 = DAT_006cc7a4;
  fVar30 = (float10)DAT_006cc7a4;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_70 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  if (*param_5 == '\x14') {
    uVar28 = (uint)(param_6 != 0) * 2 + -1 + (int)(param_5 + (-0xd0 - param_1)) / 0x4c;
    uVar27 = *(int *)(param_1 + 0xcb0) - 1;
    uVar29 = ((int)uVar28 < 1) - 1 & uVar28;
    if ((int)uVar29 <= (int)uVar27) {
      uVar27 = uVar29;
    }
    if (uVar28 == uVar27) {
      iVar1 = uVar28 * 0x4c + 0xd0 + param_1;
      if (*(char *)(uVar28 * 0x4c + 0xd0 + param_1) == '\x14') {
        cVar26 = FUN_00481790(param_1,param_5,iVar1);
        if (cVar26 == '\0') {
          fVar30 = (float10)fVar2;
        }
        else {
          fVar10 = *(float *)(iVar1 + 0x10);
          fVar2 = *(float *)(iVar1 + 0xc);
          fVar3 = *(float *)(iVar1 + 0x18);
          fVar11 = *(float *)(iVar1 + 0x14);
          fVar12 = *(float *)(iVar1 + 0x1c);
          fVar13 = *(float *)(iVar1 + 0x20);
          fVar14 = *(float *)(iVar1 + 0x28);
          fVar15 = *(float *)(iVar1 + 0x34);
          fVar16 = *(float *)(param_5 + 0x10);
          fVar17 = *(float *)(iVar1 + 0x2c);
          fVar4 = *(float *)(iVar1 + 0x24);
          fVar18 = *(float *)(iVar1 + 0x38);
          fVar5 = *(float *)(iVar1 + 0x30);
          fVar19 = *(float *)(param_5 + 0x14);
          fVar20 = *(float *)(param_5 + 0x20);
          fVar21 = *(float *)(param_5 + 0x2c);
          fVar22 = *(float *)(param_5 + 0x1c);
          fVar6 = *(float *)(param_5 + 0xc);
          fVar23 = *(float *)(param_5 + 0x28);
          fVar7 = *(float *)(param_5 + 0x18);
          fVar24 = *(float *)(param_5 + 0x38);
          fVar25 = *(float *)(param_5 + 0x34);
          fVar8 = *(float *)(param_5 + 0x24);
          fVar9 = *(float *)(param_5 + 0x30);
          fVar30 = (float10)FUN_004801c0();
          fVar31 = (float10)FUN_004801c0();
          fVar30 = (float10)(float)fVar30 / (fVar31 + (float10)(float)fVar30);
          fVar31 = (float10)_DAT_006cc7bc - fVar30;
          local_80 = (float)((float10)(fVar7 - fVar6) * fVar31 + (float10)(fVar3 - fVar2) * fVar30);
          local_7c = (float)((float10)(fVar22 - fVar16) * fVar31 +
                            (float10)(fVar12 - fVar10) * fVar30);
          local_78 = (float)((float10)(fVar20 - fVar19) * fVar31 +
                            (float10)(float)((float10)(fVar13 - fVar11) * fVar30));
          local_70 = (float)((float10)(fVar9 - fVar8) * fVar31 + (float10)(fVar5 - fVar4) * fVar30);
          local_6c = (float)((float10)(fVar25 - fVar23) * fVar31 +
                            (float10)(fVar15 - fVar14) * fVar30);
          local_68 = (float)((float10)(fVar24 - fVar21) * fVar31 +
                            (float10)(float)((float10)(fVar18 - fVar17) * fVar30));
          fVar30 = ((float10)*(float *)(param_5 + 0x40) - (float10)*(float *)(param_5 + 0x3c)) *
                   fVar31 + ((float10)*(float *)(iVar1 + 0x40) - (float10)*(float *)(iVar1 + 0x3c))
                            * fVar30;
        }
      }
    }
  }
  *param_2 = local_80;
  param_2[1] = local_7c;
  param_2[2] = local_78;
  *param_3 = local_70;
  param_3[1] = local_6c;
  param_3[2] = local_68;
  *param_4 = (float)fVar30;
  return;
}

