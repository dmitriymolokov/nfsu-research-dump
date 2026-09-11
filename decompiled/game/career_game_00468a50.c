/* spd-match: far pct=4.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_004665e0();
int __cdecl FUN_004733a0();
extern int _DAT_006b7278;
extern int _DAT_006cc7dc;
int unaff_EDI;

void FUN_00468a50(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int unaff_EDI;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  local_80 = 0.0;
  local_98 = 0.0;
  local_84 = 0.0;
  local_90 = 0.0;
  local_88 = 0.0;
  local_9c = 0.0;
  local_78 = 0.0;
  local_94 = 0.0;
  local_7c = 0.0;
  local_8c = 0.0;
  FUN_004665e0();
  iVar4 = 0;
  if (0 < *(int *)(*(int *)(unaff_EDI + 0x10) + 0x14)) {
    do {
      (**(code **)(*(int *)(unaff_EDI + 0x10) + 0xc))(*(int *)(unaff_EDI + 0x10),iVar4,local_50);
      fVar2 = fStack_3c * fStack_3c + fStack_40 * fStack_40;
      fVar3 = SQRT(fVar2);
      fVar2 = SQRT(fStack_38 * fStack_38 + fVar2);
      if (local_80 < fVar2) {
        local_80 = fVar2;
      }
      if (local_98 < fVar3) {
        local_98 = fVar3;
      }
      if (fStack_38 <= local_84) {
        if (fStack_38 < local_90) {
          local_90 = fStack_38;
        }
      }
      else {
        local_84 = fStack_38;
      }
      if (fStack_40 <= local_9c) {
        if (fStack_40 < local_88) {
          local_88 = fStack_40;
        }
      }
      else {
        local_9c = fStack_40;
      }
      if (fStack_3c <= local_94) {
        if (fStack_3c < local_78) {
          local_78 = fStack_3c;
        }
      }
      else {
        local_94 = fStack_3c;
      }
      if (fStack_38 <= local_8c) {
        if (fStack_38 < local_7c) {
          local_7c = fStack_38;
        }
      }
      else {
        local_8c = fStack_38;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int *)(unaff_EDI + 0x10) + 0x14));
  }
  iVar4 = *(int *)(unaff_EDI + 0x10);
  *(float *)(unaff_EDI + 0xe8) = ((int)(_DAT_006b7278)) + local_98;
  *(float *)(unaff_EDI + 0xec) = local_80;
  local_84 = ((int)(_DAT_006b7278)) + local_84;
  *(float *)(unaff_EDI + 0xf8) = local_7c;
  *(float *)(unaff_EDI + 0xf0) = local_88;
  *(float *)(unaff_EDI + 0xe4) = local_84;
  fVar2 = _DAT_006b7278;
  *(float *)(unaff_EDI + 0xf4) = local_78;
  *(float *)(unaff_EDI + 0x108) = local_8c;
  *(float *)(unaff_EDI + 0x100) = local_9c;
  *(float *)(unaff_EDI + 0xe0) = fVar2 - local_90;
  *(float *)(unaff_EDI + 0x104) = local_94;
  iVar1 = *(int *)(iVar4 + 0x10);
  if (iVar1 == 1) {
    FUN_004733a0(&fStack_60);
  }
  else if (iVar1 == 3) {
    fStack_60 = *(float *)(iVar4 + 0x20) - *(float *)(iVar4 + 0x30);
    fStack_5c = *(float *)(iVar4 + 0x24) - *(float *)(iVar4 + 0x34);
    fStack_58 = *(float *)(iVar4 + 0x28) - *(float *)(iVar4 + 0x38);
    fStack_70 = *(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x30);
    fStack_6c = *(float *)(iVar4 + 0x34) + *(float *)(iVar4 + 0x24);
    fStack_68 = *(float *)(iVar4 + 0x38) + *(float *)(iVar4 + 0x28);
  }
  else if (iVar1 == 4) {
    fStack_5c = *(float *)(iVar4 + 0x34);
    fStack_70 = *(float *)(iVar4 + 0x30);
    fStack_58 = *(float *)(iVar4 + 0x38);
    fStack_6c = *(float *)(iVar4 + 0x34);
    fStack_68 = *(float *)(iVar4 + 0x38);
    fStack_60 = fStack_70;
  }
  *(float *)(unaff_EDI + 0x120) = (fStack_70 + fStack_60) * _DAT_006cc7dc;
  *(float *)(unaff_EDI + 0x124) = (fStack_6c + fStack_5c) * _DAT_006cc7dc;
  *(float *)(unaff_EDI + 0x128) = (fStack_68 + fStack_58) * _DAT_006cc7dc;
  return;
}
