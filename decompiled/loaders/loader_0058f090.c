/* spd-match: far pct=6.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0040be70();
int __cdecl FUN_00414a10();
int __cdecl FUN_00414a60();
int __cdecl FUN_0058fb10();
int __cdecl FUN_00590ad0();
int __cdecl FUN_00590b50();
int __cdecl FUN_00590dd0();
int __cdecl FUN_00674898();
extern int DAT_007361a8;
extern int DAT_00737854;
extern int DAT_00737860;
extern int DAT_00737864;
extern int DAT_00737868;
extern int DAT_0073786c;
extern int DAT_00737870;
extern int DAT_00737881;
extern int DAT_00737888;
extern int DAT_0078a320;
extern int DAT_0078a344;
extern int _DAT_006b5ad4;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cca58;

void FUN_0058f090(int param_1,undefined4 param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float local_128;
  float local_124;
  float local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_b0 [80];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_2d;
  undefined1 local_29;
  undefined1 local_25;
  undefined1 local_21;
  
  if (DAT_0078a320 == 2) {
    FUN_00414a10();
    FUN_00414a10();
  }
  if ((&DAT_00737888)[*(int *)(param_1 + 0xc4) * 0x3c] == '\0') {
    if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
      if (DAT_0078a320 == 1) {
        FUN_00414a10();
        FUN_00414a10();
        return;
      }
      if (DAT_0078a320 == 2) {
        FUN_00414a10();
        FUN_00414a10();
        return;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0xc4) == 0xb) && ((DAT_0078a344 != '\0' || (DAT_007361a8 != 0)))) {
      if (DAT_0078a320 == 1) {
        FUN_00414a60();
      }
      else {
        FUN_00414a60();
      }
      FUN_00414a60();
    }
    FUN_0040be70();
    local_118 = 0;
    local_114 = 0.0;
    FUN_00590ad0();
    local_54 = _DAT_006cc7bc;
    iVar4 = *(int *)(param_1 + 0xc4) * 0x3c;
    if ((&DAT_00737881)[iVar4] == '\0') {
      *param_4 = 0;
      local_110 = 0.0;
      param_4[1] = 0;
      local_10c = 0.0;
      param_4[2] = 0x3f800000;
      param_4[3] = 0;
      local_104 = 0.0;
      param_4[4] = 0x3f800000;
      local_100 = 1.0;
      param_4[5] = 0x3f800000;
      local_fc = 1.0;
      param_4[6] = 0;
      local_f8 = 0.0;
      param_4[7] = 0x3f800000;
      local_f4 = 1.0;
    }
    else {
      if (((&DAT_00737870)[iVar4] == '\0') || (iVar2 = *(int *)(param_1 + 0xa8), iVar2 == 0)) {
        local_128 = *(float *)(&((int)DAT_00737868) + iVar4);
        local_124 = *(float *)(&((int)DAT_0073786c) + iVar4);
        local_11c = (*(float *)(&((int)DAT_00737868) + iVar4) + *(float *)(&((int)DAT_0073786c) + iVar4)) * ((int)_DAT_006cc7dc);
      }
      else {
        fVar1 = *(float *)(*(int *)(param_1 + 0x9c) + 0x60) - *(float *)(iVar2 + 0x60);
        fVar3 = *(float *)(*(int *)(param_1 + 0x9c) + 100) - *(float *)(iVar2 + 100);
        local_128 = ((*(float *)(&((int)DAT_00737860) + iVar4) + *(float *)(param_1 + 0x70)) /
                    *(float *)(param_1 + 0x70)) *
                    (SQRT(fVar1 * fVar1 + fVar3 * fVar3) /
                    *(float *)(*(int *)(param_1 + 0xa4) + 0x94)) + _DAT_006cc7b8;
        local_124 = local_128;
        local_11c = local_128;
      }
      *(float *)(param_1 + 0xac) = local_128;
      *(float *)(param_1 + 0xb0) = local_124;
      FUN_00590b50(param_1,&local_118,local_128,local_124,local_11c,local_11c);
      FUN_00590b50(param_1,&local_118,((int)_DAT_006b5ad4) * local_128,((int)_DAT_006b5ad4) * local_124,
                   ((int)_DAT_006b5ad4) * local_11c,((int)_DAT_006b5ad4) * local_11c);
      local_54 = local_108;
    }
    local_5c = local_10c;
    local_44 = local_fc;
    local_60 = local_110;
    local_50 = local_104;
    local_48 = local_100;
    local_3c = local_f8;
    fVar1 = (local_fc + local_104 + local_10c) * ((int)_DAT_006cca58);
    local_38 = local_f4;
    local_e8 = 0.0;
    local_c8 = 0.0;
    local_b8 = 0.0;
    local_d8 = 0.0;
    local_114 = (local_f4 + local_fc + local_10c) * ((int)_DAT_006cca58);
    *param_3 = ((local_f8 + local_100 + local_110) * ((int)_DAT_006cca58) +
               (local_54 + local_100 + local_110) * ((int)_DAT_006cca58)) * ((int)_DAT_006cc7dc);
    param_3[1] = (local_114 + fVar1) * ((int)_DAT_006cc7dc);
    iVar4 = *(int *)(param_1 + 0xc4) * 0x3c;
    local_d0 = *(float *)(&((int)DAT_00737860) + iVar4) + *(float *)(param_1 + 0x70);
    local_dc = *(float *)(&((int)DAT_00737864) + iVar4) + *(float *)(param_1 + 0x74);
    local_f0 = -local_d0;
    local_ec = -local_dc;
    local_e0 = local_f0;
    local_cc = local_ec;
    local_c0 = local_d0;
    local_bc = local_dc;
    FUN_00590dd0(param_1,&local_d0,&local_c0,&local_e0);
    iVar4 = *(int *)(param_1 + 0xc4);
    local_2d = FUN_00674898();
    local_29 = FUN_00674898();
    local_25 = FUN_00674898();
    local_21 = FUN_00674898();
    fVar1 = *(float *)(&((int)DAT_00737854) + iVar4 * 0x3c);
    fVar3 = ((int)_DAT_006cc7bc) / (local_e8 + fVar1);
    local_60 = local_60 * fVar3;
    local_5c = local_5c * fVar3;
    local_58 = local_58 * fVar3;
    fVar3 = ((int)_DAT_006cc7bc) / (local_c8 + fVar1);
    local_54 = local_54 * fVar3;
    local_50 = local_50 * fVar3;
    local_4c = local_4c * fVar3;
    fVar3 = ((int)_DAT_006cc7bc) / (local_b8 + fVar1);
    local_48 = local_48 * fVar3;
    local_44 = local_44 * fVar3;
    local_40 = local_40 * fVar3;
    fVar1 = ((int)_DAT_006cc7bc) / (fVar1 + local_d8);
    local_3c = local_3c * fVar1;
    local_38 = local_38 * fVar1;
    local_34 = local_34 * fVar1;
    FUN_0058fb10(param_2,local_b0,*(undefined4 *)(param_1 + 0x78),0xe);
  }
  return;
}
