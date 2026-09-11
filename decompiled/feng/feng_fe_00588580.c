/* spd-match: far pct=13.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00564b10();
int __cdecl FUN_00586770();
int __cdecl FUN_00586820();
int __cdecl FUN_00587070();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006ccab0;
extern int _DAT_006f0738;
extern int _DAT_00734538;

void __fastcall FUN_00588580(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float *pfVar10;
  float fStack_d4;
  float local_d0 [2];
  undefined1 auStack_c8 [4];
  float fStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_7c [16];
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  pfVar10 = local_d0;
  FUN_00588580(pfVar10,param_1 + 0x90,*(int *)(param_1 + 0xa4) + 0x30);
  fStack_c4 = *(float *)(*(int *)(param_1 + 0xa4) + 0x28) + fStack_d4;
  fVar8 = (float10)FUN_00587070(*(int *)(param_1 + 0xa0),*(int *)(param_1 + 0xa0) + 0x150,
                                *(int *)(param_1 + 0xa4) + 0x30);
  fVar8 = fVar8 + (float10)*(float *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x14) + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x1c);
  if (fVar8 <= (float10)*(float *)(iVar4 + 0x14)) {
    if ((float10)*(float *)(iVar4 + 0x18) <= fVar8) {
      *(float *)(param_1 + 0x1c) = (float)fVar8;
      *(undefined4 *)(param_1 + 0x80) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar4 + 0x18);
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  if (_DAT_006ccab0 < _DAT_006f0738) {
    *(float *)(param_1 + 0x20) = (*(float *)(param_1 + 0x1c) - fVar5) / _DAT_006f0738;
  }
  puVar1 = (undefined4 *)(param_1 + 0x30);
  *puVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x94);
  uStack_bc = 0x3f800000;
  uStack_b8 = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x98);
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0x3f800000;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x1c);
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0x3f800000;
  uStack_90 = 0;
  uStack_8c = 0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  fStack_80 = 1.0;
  if (*(float *)(*(int *)(param_1 + 0xa0) + 0x16c) != DAT_006cc7a4) {
    fStack_6c = 1.0;
    fStack_68 = 0.0;
    uStack_64 = 0;
    uStack_60 = 0;
    fStack_5c = 0.0;
    fStack_58 = 1.0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0x3f800000;
    uStack_40 = 0;
    uStack_3c = 0;
    fStack_38 = 0.0;
    uStack_34 = 0;
    uStack_30 = 0x3f800000;
    FUN_00674898();
    FUN_00564b10();
    FUN_00674898();
    fVar8 = (float10)FUN_00564b10();
    FUN_00674898();
    fVar9 = (float10)FUN_00564b10();
    fStack_5c = (float)-fVar9;
    fStack_68 = (float)fVar9;
    fStack_6c = (float)fVar8;
    fStack_58 = (float)fVar8;
    FUN_00588580(&uStack_bc,&fStack_6c,&uStack_bc);
  }
  fStack_88 = *(float *)(param_1 + 0x34);
  uStack_8c = *puVar1;
  fStack_84 = *(float *)(param_1 + 0x38);
  fStack_80 = 1.0;
  FUN_00401cd0();
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00588580(&uStack_bc,
                       *(int *)(param_1 + 0xac) * 0x40 + *(int *)(*(int *)(param_1 + 0xa8) + 8),
                       &uStack_bc);
  }
  FUN_00586820();
  FUN_00588580(auStack_7c,puVar1,*(int *)(param_1 + 0xa4) + 0x30);
  iVar4 = *(int *)(param_1 + 0xa4);
  fVar5 = *(float *)(iVar4 + 200);
  fVar2 = *(float *)(iVar4 + 0xc0);
  fStack_38 = (fStack_80 * *(float *)(iVar4 + 0xc4) - fStack_84 * *(float *)(iVar4 + 200)) +
              *(float *)(iVar4 + 0xa0);
  fVar3 = *(float *)(iVar4 + 0xa4);
  iVar6 = *(int *)(param_1 + 0xa0);
  local_d0[0] = *(float *)(iVar4 + 0xa8) +
                (fStack_84 * *(float *)(iVar4 + 0xc0) - fStack_88 * *(float *)(iVar4 + 0xc4));
  *(float *)(iVar6 + 0xf0) = fStack_38;
  *(float *)(iVar6 + 0xf4) = fVar3 + (fStack_88 * fVar5 - fStack_80 * fVar2);
  *(float *)(iVar6 + 0xf8) = local_d0[0];
  FUN_00588580(auStack_c8,auStack_c8,*(int *)(param_1 + 0xa4) + 0xd0);
  FUN_00586770();
  if (*(int *)(param_1 + 0x80) != 0) {
    fVar5 = DAT_006cc7a4;
    if (DAT_006cc7a4 < *(float *)(param_1 + 0x1c)) {
      fVar5 = *(float *)(param_1 + 0x1c);
    }
    pfVar7 = *(float **)(param_1 + 0x14);
    fVar5 = (fVar5 * *pfVar7 + _DAT_006cc7bc) * pfVar7[1] * *(float *)(param_1 + 0x1c) +
            pfVar7[(*(float *)(param_1 + 0x20) <= DAT_006cc7a4) + 2] * *(float *)(param_1 + 0x20) +
            *(float *)(param_1 + 0x88);
    *(float *)(param_1 + 0x24) = fVar5;
    fVar5 = _DAT_00734538 * (float)(unsigned int)pfVar10 +
            (*(float *)(param_1 + 0x1c) - *(float *)(*(int *)(param_1 + 0x18) + 0x1c)) * pfVar7[4] +
            fVar5;
    *(float *)(param_1 + 0x24) = fVar5;
    if (DAT_006cc7a4 <= fVar5) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}
