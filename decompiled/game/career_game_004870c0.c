/* spd-match: far pct=7.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_0047d070();
int __cdecl FUN_00487680();
int __cdecl FUN_00487f50();
int __cdecl FUN_00564b10();
int __cdecl FUN_00674898();
extern int DAT_006b6cf8;
extern int DAT_006b6cfc;
extern int DAT_006b6d28;
extern int DAT_006b6d2c;
extern int DAT_006cc7a4;
extern int DAT_006fbe54;
extern int DAT_006fbe58;
extern int DAT_006fbe5c;
extern int DAT_006fbe60;
extern int DAT_006fbe64;
extern int DAT_006fbe68;
extern int DAT_00735f0c;
extern int DAT_00735f10;
extern int DAT_00735f14;
extern int DAT_00735f18;
extern int DAT_00735f1c;
extern int DAT_00735f20;
extern int DAT_00735f5c;
extern int DAT_0073ad38;
extern int DAT_007788e0;
extern int _DAT_006b6d00;
extern int _DAT_006b6d08;
extern int _DAT_006b6d30;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8b0;
extern int _DAT_006cc934;
extern int _DAT_00735f24;
extern int _DAT_00735f28;
extern int _DAT_00735f2c;

void __fastcall FUN_004870c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_a8;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  fVar1 = DAT_006cc7a4;
  pfVar4 = (float *)(param_1 + 0x40);
  if (DAT_00735f0c == '\0') {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 == 3) {
      fVar1 = ((int)DAT_0073ad38) * ((int)_DAT_006cc8b0);
      fVar3 = _DAT_006b6d00 * *(float *)(param_1 + 0x184) * fVar1 + *pfVar4;
      *pfVar4 = fVar3;
      fVar2 = _DAT_006b6d08 * *(float *)(param_1 + 0x188) * fVar1 + *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x44) = fVar2;
      fVar1 = _DAT_006b6d30 * *(float *)(param_1 + 0x180) * fVar1 + *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x48) = fVar1;
      if (_DAT_006cc934 < fVar2) {
        *(float *)(param_1 + 0x44) = fVar2 - _DAT_006cc934;
      }
      if (*(float *)(param_1 + 0x44) < DAT_006cc7a4) {
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + _DAT_006cc934;
      }
      if (DAT_006b6cf8 < fVar3) {
        *pfVar4 = DAT_006b6cf8;
      }
      if (*pfVar4 < DAT_006b6cfc) {
        *pfVar4 = DAT_006b6cfc;
      }
      if (DAT_006b6d2c < fVar1) {
        *(float *)(param_1 + 0x48) = DAT_006b6d2c;
      }
      if (*(float *)(param_1 + 0x48) < DAT_006b6d28) {
        *(float *)(param_1 + 0x48) = DAT_006b6d28;
      }
      FUN_00487f50();
    }
    else if (iVar5 == 1) {
      if (*(int *)(param_1 + 0x30) < 4) {
        pfVar4 = (float *)(((unsigned char *)&DAT_007788e0) + *(int *)(param_1 + 0x30) * 0x40);
      }
    }
    else if ((iVar5 == 0) || (iVar5 == 2)) {
      local_a8 = 1.0;
      fVar2 = ((int)DAT_0073ad38) + *(float *)(param_1 + 0x18c);
      *(float *)(param_1 + 0x18c) = fVar2;
      if ((fVar1 < *(float *)(param_1 + 400)) && (fVar2 < *(float *)(param_1 + 400))) {
        local_a8 = fVar2 / *(float *)(param_1 + 400);
      }
      FUN_00674898();
      fVar6 = (float10)FUN_00564b10();
      fVar6 = (fVar6 + (float10)((int)_DAT_006cc7bc)) * (float10)((int)_DAT_006cc7dc);
      fVar7 = (float10)((int)_DAT_006cc7bc) - fVar6;
      *pfVar4 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xc0) +
                       fVar7 * (float10)*(float *)(param_1 + 0x80));
      *(float *)(param_1 + 0x44) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xc4) +
                  fVar7 * (float10)*(float *)(param_1 + 0x84));
      *(float *)(param_1 + 0x48) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 200) +
                  fVar7 * (float10)*(float *)(param_1 + 0x88));
      *(float *)(param_1 + 0x4c) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xcc) +
                  fVar7 * (float10)*(float *)(param_1 + 0x8c));
      *(float *)(param_1 + 0x50) =
           (float)(fVar6 * (float10)*(float *)(param_1 + 0xd0) +
                  fVar7 * (float10)*(float *)(param_1 + 0x90));
      *(float *)(param_1 + 0x60) =
           (float)(((float10)*(float *)(param_1 + 0xe0) - (float10)*(float *)(param_1 + 0xa0)) *
                  fVar6) + *(float *)(param_1 + 0xa0);
      *(float *)(param_1 + 0x68) =
           (float)((float10)*(float *)(param_1 + 0xa8) +
                  (float10)(*(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xa8)) * fVar6);
      *(float *)(param_1 + 100) =
           *(float *)(param_1 + 0xa4) +
           (float)(((float10)*(float *)(param_1 + 0xe4) - (float10)*(float *)(param_1 + 0xa4)) *
                  fVar6);
      *(float *)(param_1 + 0x70) =
           (float)(((float10)*(float *)(param_1 + 0xf0) - (float10)*(float *)(param_1 + 0xb0)) *
                  fVar6) + *(float *)(param_1 + 0xb0);
      *(float *)(param_1 + 0x78) =
           (float)((float10)*(float *)(param_1 + 0xb8) +
                  fVar6 * (float10)(*(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0xb8)));
      *(float *)(param_1 + 0x74) =
           *(float *)(param_1 + 0xb4) +
           (float)(((float10)*(float *)(param_1 + 0xf4) - (float10)*(float *)(param_1 + 0xb4)) *
                  fVar6);
      if (_DAT_006cc934 < *(float *)(param_1 + 0x44)) {
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - _DAT_006cc934;
      }
      if (*(float *)(param_1 + 0x44) < DAT_006cc7a4) {
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + _DAT_006cc934;
      }
      if (_DAT_006cc934 < *(float *)(param_1 + 0x4c)) {
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - _DAT_006cc934;
      }
      if (*(float *)(param_1 + 0x4c) < DAT_006cc7a4) {
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + _DAT_006cc934;
      }
      if (*(int *)(param_1 + 0x2c) == 2) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x194);
      }
      if ((*(int *)(param_1 + 0x2c) == 0) && (_DAT_006cc7bc <= local_a8)) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else if ((iVar5 != 4) && (iVar5 == 5)) {
      pfVar4 = (float *)(param_1 + 0x140);
    }
  }
  else {
    local_90 = DAT_006fbe54;
    local_8c = DAT_006fbe58;
    local_88 = DAT_006fbe5c;
    local_84 = DAT_00735f10;
    local_80 = DAT_006fbe60;
    local_70 = DAT_00735f14;
    local_6c = DAT_006fbe64;
    local_68 = DAT_00735f18;
    local_60 = DAT_00735f1c;
    local_5c = DAT_00735f20;
    local_58 = DAT_006fbe68;
    pfVar4 = &local_90;
  }
  _DAT_00735f24 = pfVar4[0xc];
  _DAT_00735f28 = pfVar4[0xd];
  _DAT_00735f2c = pfVar4[0xe];
  FUN_00487680(local_50);
  if (DAT_00735f5c == 0) {
    iVar5 = FUN_00674898();
    *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) =
         (short)((ulonglong)((longlong)iVar5 * 0xb60b60b7) >> 0x28) -
         ((short)(char)((char)(iVar5 / 0x1680000) + (char)(iVar5 >> 0x1f)) >> 0xf);
    *(float *)(*(int *)(param_1 + 0x1c) + 0xb0) = pfVar4[2];
  }
  FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),local_50,DAT_0073ad38);
  return;
}
