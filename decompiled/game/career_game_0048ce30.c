/* spd-match: far pct=5.44 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048CE30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040bc10();
int __cdecl FUN_0042ad10();
int __cdecl FUN_00480230();
int __cdecl FUN_00480310();
int __cdecl FUN_00483160();
int __cdecl FUN_004831c0();
int __cdecl FUN_00483220();
int __cdecl FUN_004833c0();
int __cdecl FUN_00483e30();
int __cdecl FUN_00483ea0();
int __cdecl FUN_00483fb0();
int __cdecl FUN_0048cbd0();
int __cdecl FUN_0048cd40();
int __cdecl FUN_00564db0();
int __cdecl FUN_00593bc0();
extern int DAT_007789f0;
extern int DAT_007796a8;
extern int _DAT_006b6c9c;
extern int _DAT_006b6ca0;
extern int _DAT_006cc7ac;
extern int _DAT_007796b0;
void __fastcall FUN_0048ce30(undefined4 val, int param_1, char param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;

  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 local_1bc;
  undefined4 local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  undefined2 local_182;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_40;
  undefined4 local_3c;
  
  FUN_0048cbd0(val);
  iVar4 = FUN_00480230(*(undefined4 *)(param_1 + 0x2c),param_1 + 0x48,param_1 + 0x4c);
  bVar7 = *(int *)(param_1 + 0x54) != iVar4;
  if ((param_2 != '\0') || (bVar7)) {
    *(int *)(param_1 + 0x54) = iVar4;
    *(bool *)(param_1 + 0x50) = *(char *)(iVar4 + 4) != '\0';
    *(bool *)(param_1 + 0x51) = *(char *)(iVar4 + 5) != '\0';
    FUN_00480310(&DAT_007789f0,&local_170,&local_1b0,&local_1bc,iVar4,0);
    FUN_00480310(&DAT_007789f0,&local_160,&local_1a0,&local_1b8,iVar4,1);
    fVar3 = _DAT_006b6c9c * _DAT_006b6ca0;
    local_1b4 = fVar3;
    uVar5 = FUN_00564db0(*(undefined4 *)(iVar4 + 0x3c),fVar3);
    pfVar2 = *(float **)(param_1 + 0x30);
    fVar1 = (float)((uVar5 & 0x7fff) << 1);
    *pfVar2 = fVar1;
    if (fVar1 != pfVar2[2]) {
      *(undefined2 *)(pfVar2 + 0xb) = 2;
    }
    fVar8 = (float10)FUN_004833c0(*(undefined4 *)(iVar4 + 0x3c),local_1bc);
    iVar6 = *(int *)(param_1 + 0x30);
    *(float *)(iVar6 + 4) = (float)fVar8;
    if (fVar8 != (float10)*(float *)(iVar6 + 0xc)) {
      *(undefined2 *)(iVar6 + 0x2c) = 2;
    }
    uVar5 = FUN_00564db0(*(undefined4 *)(iVar4 + 0x40),fVar3);
    pfVar2 = *(float **)(param_1 + 0x30);
    fVar1 = (float)((uVar5 & 0x7fff) << 1);
    pfVar2[2] = fVar1;
    if (fVar1 != *pfVar2) {
      *(undefined2 *)(pfVar2 + 0xb) = 2;
    }
    fVar8 = (float10)FUN_004833c0(*(undefined4 *)(iVar4 + 0x40),local_1b8);
    *(float *)(*(int *)(param_1 + 0x30) + 0xc) = (float)fVar8;
    FUN_00483160(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
                 *(undefined4 *)(iVar4 + 0x14));
    FUN_00593bc0(local_170,local_16c,local_168);
    FUN_004831c0(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c),
                 *(undefined4 *)(iVar4 + 0x20));
    iVar6 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar6 + 0xc) = local_160;
    *(undefined4 *)(iVar6 + 0x3c) = local_15c;
    *(undefined4 *)(iVar6 + 0x6c) = local_158;
    FUN_00483160(*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x28),
                 *(undefined4 *)(iVar4 + 0x2c));
    FUN_00593bc0(local_1b0,local_1ac,local_1a8);
    FUN_004831c0(*(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x34),
                 *(undefined4 *)(iVar4 + 0x38));
    iVar6 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(iVar6 + 0xc) = local_1a0;
    *(undefined4 *)(iVar6 + 0x3c) = local_19c;
    *(undefined4 *)(iVar6 + 0x6c) = local_198;
    if ((bVar7) && (*(char *)(iVar4 + 1) != '\0')) {
      FUN_0048cd40();
      FUN_0040bc10();
      local_1b0 = 0.0;
      local_1ac = 0.0;
      local_1a8 = 0;
      local_1a4 = 0;
      local_18c = 0x3f800000;
      local_188 = 0x3f800000;
      local_184 = 0;
      local_182 = 1;
      FUN_0042ad10(0x3f800000,0x3f800000);
      FUN_0042ad10(0x3f800000,0x3f800000);
      FUN_00483e30();
      if (*(char *)(iVar4 + 4) == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x2c) + 0x70;
      }
      FUN_00483ea0(&local_130,iVar6);
      if (*(char *)(iVar4 + 5) == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x2c) + 0x70;
      }
      FUN_00483fb0(&local_a0,iVar6);
      fVar1 = _DAT_007796b0;
      if (DAT_007796a8 < 1) {
        fVar1 = *(float *)(*(int *)(param_1 + 0x2c) + 0x814);
      }
      pfVar2 = *(float **)(param_1 + 0x30);
      if (ABS(fVar1 - *(float *)(param_1 + 0x4c)) <= ABS(fVar1 - *(float *)(param_1 + 0x48))) {
        pfVar2[2] = local_1b0;
        if (local_1b0 != *pfVar2) {
          *(undefined2 *)(pfVar2 + 0xb) = 2;
        }
        *(float *)(*(int *)(param_1 + 0x30) + 0xc) = local_1ac;
        FUN_004831c0(local_130,local_100,local_d0);
        iVar6 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar6 + 0xc) = local_12c;
        *(undefined4 *)(iVar6 + 0x3c) = local_fc;
        *(undefined4 *)(iVar6 + 0x6c) = local_cc;
        FUN_004831c0(local_a0,local_70,local_40);
        iVar6 = *(int *)(param_1 + 0x38);
        *(undefined4 *)(iVar6 + 0xc) = local_9c;
        *(undefined4 *)(iVar6 + 0x3c) = local_6c;
        *(undefined4 *)(iVar6 + 0x6c) = local_3c;
      }
      else {
        *pfVar2 = local_1b0;
        if (local_1b0 != pfVar2[2]) {
          *(undefined2 *)(pfVar2 + 0xb) = 2;
        }
        iVar6 = *(int *)(param_1 + 0x30);
        *(float *)(iVar6 + 4) = local_1ac;
        if (local_1ac != *(float *)(iVar6 + 0xc)) {
          *(undefined2 *)(iVar6 + 0x2c) = 2;
        }
        FUN_00483160(local_130,local_100,local_d0);
        FUN_00593bc0(local_12c,local_fc,local_cc);
        FUN_00483160(local_a0,local_70,local_40);
        FUN_00593bc0(local_9c,local_6c,local_3c);
      }
    }
    pfVar2 = *(float **)(param_1 + 0x30);
    fVar1 = pfVar2[2] - *pfVar2;
    pfVar2[6] = pfVar2[1];
    pfVar2[7] = *pfVar2;
    pfVar2[4] = (pfVar2[1] + pfVar2[3]) - (fVar1 + fVar1);
    pfVar2[5] = (fVar1 * _DAT_006cc7ac - pfVar2[3]) - (pfVar2[1] + pfVar2[1]);
    FUN_00483220();
    FUN_00483220();
    fVar1 = *(float *)(iVar4 + 0x44);
    pfVar2 = *(float **)(param_1 + 0x40);
    *pfVar2 = fVar1;
    if (fVar1 != pfVar2[2]) {
      *(undefined2 *)(pfVar2 + 0xb) = 2;
    }
    fVar1 = *(float *)(iVar4 + 0x48);
    pfVar2 = *(float **)(param_1 + 0x40);
    pfVar2[2] = fVar1;
    if (fVar1 != *pfVar2) {
      *(undefined2 *)(pfVar2 + 0xb) = 2;
    }
    pfVar2 = *(float **)(param_1 + 0x40);
    fVar1 = pfVar2[2] - *pfVar2;
    pfVar2[6] = pfVar2[1];
    pfVar2[7] = *pfVar2;
    pfVar2[4] = (pfVar2[3] + pfVar2[1]) - (fVar1 + fVar1);
    pfVar2[5] = (fVar1 * _DAT_006cc7ac - pfVar2[3]) - (pfVar2[1] + pfVar2[1]);
  }
  return;
}
