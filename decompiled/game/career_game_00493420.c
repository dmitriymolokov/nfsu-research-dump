/* spd-match: far pct=5.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00493420 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005829e0();
void __fastcall FUN_00493420(int obj, int param_1, int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;

  int iVar5;
  int iVar6;
  int iVar7;
  int local_44;
  float local_40;
  int local_38;
  float local_28;
  float local_18;
  
  if (obj < *(int *)(param_2 + 4) / 2) {
    iVar7 = obj + 2;
    local_44 = 0;
  }
  else {
    local_44 = obj + -2;
    iVar7 = *(int *)(param_2 + 4) + -1;
  }
  local_40 = 1000.0;
  for (iVar5 = local_44; iVar5 <= iVar7; iVar5 = iVar5 + 1) {
    FUN_005829e0((float)iVar5);
    FUN_005829e0((float)iVar5);
    if (local_28 - local_18 < local_40) {
      local_40 = local_28 - local_18;
    }
  }
  if (3 < (iVar7 - local_44) + 1) {
    iVar6 = local_44 << 4;
    iVar5 = local_44 + 2;
    local_38 = local_44;
    do {
      if ((1 < iVar5) && (local_38 < *(int *)(param_2 + 4))) {
        iVar4 = *(int *)(param_2 + 0xc);
        uVar2 = *(undefined4 *)(iVar4 + iVar6);
        puVar1 = (undefined4 *)(iVar4 + iVar6);
        fVar3 = *(float *)(*(int *)(param_1 + 0xc) + 8 + iVar6);
        if (local_40 < (float)puVar1[2] - fVar3) {
          puVar1[1] = *(undefined4 *)(iVar4 + 4 + iVar6);
          *puVar1 = uVar2;
          puVar1[2] = fVar3 + local_40;
        }
      }
      if ((-1 < iVar5 + -1) && (iVar5 + -1 < *(int *)(param_2 + 4))) {
        iVar4 = *(int *)(param_2 + 0xc);
        uVar2 = *(undefined4 *)(iVar4 + 0x10 + iVar6);
        puVar1 = (undefined4 *)(iVar4 + 0x10 + iVar6);
        fVar3 = *(float *)(*(int *)(param_1 + 0xc) + 0x18 + iVar6);
        if (local_40 < (float)puVar1[2] - fVar3) {
          puVar1[1] = *(undefined4 *)(iVar4 + 0x14 + iVar6);
          *puVar1 = uVar2;
          puVar1[2] = fVar3 + local_40;
        }
      }
      if ((-1 < iVar5) && (iVar5 < *(int *)(param_2 + 4))) {
        iVar4 = *(int *)(param_2 + 0xc);
        uVar2 = *(undefined4 *)(iVar4 + 0x20 + iVar6);
        puVar1 = (undefined4 *)(iVar4 + 0x20 + iVar6);
        fVar3 = *(float *)(*(int *)(param_1 + 0xc) + 0x28 + iVar6);
        if (local_40 < (float)puVar1[2] - fVar3) {
          puVar1[1] = *(undefined4 *)(iVar4 + 0x24 + iVar6);
          *puVar1 = uVar2;
          puVar1[2] = fVar3 + local_40;
        }
      }
      if ((-1 < iVar5 + 1) && (iVar5 + 1 < *(int *)(param_2 + 4))) {
        iVar4 = *(int *)(param_2 + 0xc);
        uVar2 = *(undefined4 *)(iVar4 + 0x30 + iVar6);
        puVar1 = (undefined4 *)(iVar4 + 0x30 + iVar6);
        fVar3 = *(float *)(*(int *)(param_1 + 0xc) + 0x38 + iVar6);
        if (local_40 < (float)puVar1[2] - fVar3) {
          puVar1[1] = *(undefined4 *)(iVar4 + 0x34 + iVar6);
          *puVar1 = uVar2;
          puVar1[2] = fVar3 + local_40;
        }
      }
      local_44 = local_38 + 4;
      iVar4 = iVar5 + 5;
      iVar6 = iVar6 + 0x40;
      iVar5 = iVar5 + 4;
      local_38 = local_44;
    } while (iVar4 < iVar7);
  }
  if (local_44 <= iVar7) {
    iVar5 = local_44 << 4;
    do {
      if ((-1 < iVar5) && (local_44 < *(int *)(param_2 + 4))) {
        uVar2 = *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar5);
        puVar1 = (undefined4 *)(*(int *)(param_2 + 0xc) + iVar5);
        fVar3 = *(float *)(*(int *)(param_1 + 0xc) + 8 + iVar5);
        if (local_40 < (float)puVar1[2] - fVar3) {
          puVar1[1] = puVar1[1];
          *puVar1 = uVar2;
          puVar1[2] = fVar3 + local_40;
        }
      }
      local_44 = local_44 + 1;
      iVar5 = iVar5 + 0x10;
    } while (local_44 <= iVar7);
  }
  return;
}
