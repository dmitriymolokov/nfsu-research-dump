/* spd-match: far pct=4.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b930();
int __cdecl FUN_00440a40();
int __cdecl FUN_00577060();
int __cdecl FUN_005abda2();
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc90c;

void FUN_004273d0(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  byte bStack_161;
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [4];
  float fStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_50 [76];
  
  local_100 = 0x3f800000;
  local_fc = 0.0;
  local_f8 = 0.0;
  local_f4 = 0.0;
  local_f0 = 0;
  local_ec = 1.0;
  local_e8 = 0.0;
  local_e4 = 0.0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0x3f800000;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0.0;
  local_c8 = 0.0;
  local_c4[0] = 1.0;
  FUN_0040b930();
  FUN_005abda2(&local_100,&local_100,local_50);
  local_d8 = param_3[1];
  local_dc = *param_3;
  local_d4 = param_3[2];
  local_d0 = 0x3f800000;
  iVar5 = 0;
  pfVar6 = &local_cc;
  do {
    FUN_005abda2(pfVar6,*(int *)(param_1 + 0x20) + 0x10 + iVar5,&fStack_10c);
    iVar5 = iVar5 + 0x30;
    pfVar6 = pfVar6 + 4;
  } while (iVar5 < 0xc0);
  bVar4 = 1;
  fStack_134 = 0.0;
  fStack_130 = 0.0;
  iVar5 = 0;
  pfVar6 = &local_cc;
  do {
    fVar7 = (float10)FUN_00440a40(param_4,pfVar6,0,0,&bStack_161);
    fStack_160 = (float)fVar7;
    fVar7 = (float10)FUN_00577060(param_1 + 0x828,param_4,fStack_160,pfVar6,0,0,&bStack_161);
    pfVar2 = (float *)(*(int *)(param_1 + 0x20) + 0x20 + iVar5);
    iVar1 = *(int *)(param_1 + 0x20) + iVar5;
    iVar5 = iVar5 + 0x30;
    fStack_134 = (*pfVar2 - *(float *)(iVar1 + 0x18)) + fStack_134;
    bVar4 = bVar4 & bStack_161;
    pfVar6[2] = (float)fVar7;
    fStack_130 = (float)(fVar7 + (float10)fStack_130);
    pfVar6 = pfVar6 + 4;
  } while (iVar5 < 0xc0);
  fStack_14c = fStack_10c;
  fStack_148 = fStack_108;
  fStack_144 = fStack_104;
  fStack_158 = local_f8;
  fStack_154 = local_f4;
  fStack_12c = local_ec;
  fStack_128 = local_e8;
  fStack_124 = local_e4;
  if (bVar4 != 0) {
    fStack_14c = (local_c4[2] - fStack_ac) + (local_cc - fStack_9c);
    fStack_148 = (local_c4[3] - fStack_a8) + (local_c8 - fStack_98);
    fStack_144 = (fStack_b4 - fStack_a4) + (local_c4[0] - fStack_94);
    local_fc = (fStack_9c - fStack_ac) + (local_cc - local_c4[2]);
    fStack_158 = (fStack_98 - fStack_a8) + (local_c8 - local_c4[3]);
    fStack_154 = (fStack_94 - fStack_a4) + (local_c4[0] - fStack_b4);
    fVar3 = SQRT(fStack_14c * fStack_14c + fStack_148 * fStack_148 + fStack_144 * fStack_144);
    if (fVar3 == DAT_006cc7a4) {
      fStack_14c = 1.0;
      fStack_148 = 0.0;
      fStack_144 = 0.0;
    }
    else {
      fVar3 = _DAT_006cc7bc / fVar3;
      fStack_14c = fStack_14c * fVar3;
      fStack_148 = fStack_148 * fVar3;
      fStack_144 = fStack_144 * fVar3;
    }
    fVar3 = SQRT(local_fc * local_fc + fStack_158 * fStack_158 + fStack_154 * fStack_154);
    if (fVar3 == DAT_006cc7a4) {
      fStack_158 = 0.0;
      fStack_154 = 0.0;
      local_fc = _DAT_006cc7bc;
    }
    else {
      fVar3 = _DAT_006cc7bc / fVar3;
      local_fc = fVar3 * local_fc;
      fStack_158 = fStack_158 * fVar3;
      fStack_154 = fStack_154 * fVar3;
    }
    fStack_12c = fStack_154 * fStack_148 - fStack_158 * fStack_144;
    fStack_128 = fStack_144 * local_fc - fStack_154 * fStack_14c;
    fStack_124 = fStack_158 * fStack_14c - fStack_148 * local_fc;
    param_3[2] = fStack_130 * _DAT_006cc90c +
                 (fStack_134 * _DAT_006cc90c + *(float *)(*(int *)(param_1 + 0x20) + 8)) /
                 fStack_124;
  }
  *param_2 = fStack_14c;
  param_2[2] = fStack_144;
  param_2[1] = fStack_148;
  param_2[3] = 0.0;
  param_2[4] = local_fc;
  param_2[5] = fStack_158;
  param_2[6] = fStack_154;
  param_2[7] = 0.0;
  param_2[8] = fStack_12c;
  param_2[9] = fStack_128;
  param_2[10] = fStack_124;
  param_2[0xb] = 0.0;
  return;
}
