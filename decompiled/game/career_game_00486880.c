/* spd-match: far pct=6.44 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b780();
int __cdecl FUN_0047d070();
int __cdecl FUN_00483860();
int __cdecl FUN_00564db0();
int __cdecl FUN_005829e0();
int __cdecl FUN_00674898();
extern int DAT_006b6cf0;
extern int DAT_006cc7a4;
extern int DAT_0073457c;
extern int DAT_00735f5c;
extern int DAT_0073ad38;
extern int DAT_0078a2fc;
extern int _DAT_006b6c6c;
extern int _DAT_006b6c94;
extern int _DAT_006cc79c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc9f8;
extern int _DAT_006ccc00;
extern int _DAT_006ccd34;

void __fastcall FUN_00486880(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  undefined1 local_70 [32];
  undefined1 local_50 [76];
  
  iVar7 = *(int *)(param_1 + 0x198);
  fVar1 = DAT_006cc7a4;
  if (iVar7 != 0) {
    fVar1 = *(float *)(iVar7 + 0x810);
    if (DAT_0078a2fc != 0) {
      fVar1 = (((int)_DAT_006cc9f8) - fVar1 * ((int)_DAT_006cc9f8)) * ((int)_DAT_006cc79c);
    }
    fVar1 = (fVar1 - *(float *)(param_1 + 0x54)) /
            (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x54));
    if (fVar1 < DAT_006cc7a4) {
      fVar1 = DAT_006cc7a4;
    }
  }
  if ((*(int *)(param_1 + 0x50) == 0) || (iVar7 == 0)) {
    fVar2 = _DAT_006b6c6c * *(float *)(param_1 + 0x44) * ((int)DAT_0073457c) + *(float *)(param_1 + 0x194);
  }
  else {
    fVar2 = (float)(*(int *)(param_1 + 0x88) + -1) * fVar1;
  }
  *(float *)(param_1 + 0x194) = fVar2;
  fVar2 = (float)(*(int *)(param_1 + 0x88) + -1);
  if (fVar2 < *(float *)(param_1 + 0x194)) {
    *(float *)(param_1 + 0x194) = fVar2;
  }
  if ((*(int *)(param_1 + 0x4c) == 0) || (iVar7 == 0)) {
    *(float *)(param_1 + 400) =
         _DAT_006b6c6c * *(float *)(param_1 + 0x40) * ((int)DAT_0073457c) + *(float *)(param_1 + 400);
  }
  else {
    *(float *)(param_1 + 400) = (float)(*(int *)(param_1 + 0x7c) + -1) * fVar1;
  }
  fVar1 = (float)(*(int *)(param_1 + 0x7c) + -1);
  if (fVar1 < *(float *)(param_1 + 400)) {
    *(float *)(param_1 + 400) = fVar1;
  }
  FUN_005829e0(*(undefined4 *)(param_1 + 400));
  FUN_005829e0(*(undefined4 *)(param_1 + 0x194));
  FUN_005829e0(*(undefined4 *)(param_1 + 400));
  FUN_00674898();
  FUN_00483860(local_70);
  FUN_0040b780(local_70);
  iVar7 = DAT_00735f5c;
  if (*(int *)(param_1 + 0x198) == 0) {
    if (DAT_00735f5c == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = 0x32dc;
    }
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 0x198) + 0x810);
    if (DAT_0078a2fc != 0) {
      fVar1 = (((int)_DAT_006cc9f8) - fVar1 * ((int)_DAT_006cc9f8)) * ((int)_DAT_006cc79c);
    }
    fVar1 = (fVar1 - *(float *)(param_1 + 0x38)) /
            (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38));
    fVar2 = DAT_006cc7a4;
    if ((DAT_006cc7a4 <= fVar1) && (fVar2 = fVar1, _DAT_006cc7bc < fVar1)) {
      fVar2 = _DAT_006cc7bc;
    }
    FUN_005829e0(fVar2 * ((int)_DAT_006ccd34));
    iVar7 = DAT_00735f5c;
    if (*(int *)(param_1 + 0x34) == 0) {
      if (DAT_00735f5c == 0) {
        uVar6 = FUN_00674898();
        *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar6;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x198);
      fVar1 = local_a0 - *(float *)(iVar7 + 0x60);
      fVar3 = local_9c - *(float *)(iVar7 + 100);
      fVar2 = local_98 - *(float *)(iVar7 + 0x68);
      local_a4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
      if (local_a4 < _DAT_006cc7bc) {
        local_a4 = 1.0;
      }
      sVar5 = FUN_00564db0(local_a4,((int)_DAT_006b6c94) * local_80);
      iVar7 = DAT_00735f5c;
      if (DAT_00735f5c == 0) {
        *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) = sVar5 << 1;
      }
    }
  }
  fVar1 = SQRT((local_98 - local_88) * (local_98 - local_88) +
               (local_9c - local_8c) * (local_9c - local_8c) +
               (local_a0 - local_90) * (local_a0 - local_90));
  if (iVar7 == 0) {
    *(float *)(*(int *)(param_1 + 0x1c) + 0xb0) = fVar1;
  }
  uVar4 = DAT_006b6cf0;
  if (fVar1 < _DAT_006ccc00) {
    fVar1 = _DAT_006ccc00;
  }
  if (iVar7 == 0) {
    *(float *)(*(int *)(param_1 + 0x1c) + 0xb4) = fVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = uVar4;
  }
  FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),local_50,DAT_0073ad38);
  return;
}
