/* spd-match: far pct=5.27 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F2000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f1810();
int __cdecl FUN_004f2db0();
int __cdecl FUN_005146d0();
int __cdecl FUN_00514b90();
int __cdecl FUN_00514bf0();
int __cdecl FUN_005461c0();
extern int _DAT_006cc858;
void __fastcall FUN_004f2000(int obj, undefined4 param_1, int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  int iStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [3];
  undefined1 local_50 [76];
  
  iVar10 = *(int *)(param_2 + 0x2c);
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_5c[2] = 0x3f800000;
  local_60 = 0x43a00000;
  local_5c[0] = 0x43700000;
  local_5c[1] = 0;
  local_98 = FUN_004f1810(param_1,&local_b0,*(undefined2 *)(param_2 + 0x20),0x3f800000);
  FUN_004f2000(local_50,local_50,&local_90);
  iVar7 = FUN_005461c0(*(undefined4 *)(param_2 + 0x24),1,0);
  iStack_ac = iVar7;
  if (obj == 0) {
    obj = FUN_004f2db0(param_1,param_2,iVar7);
  }
  else {
    FUN_00514bf0(obj);
  }
  iVar8 = (int)*(short *)(iVar7 + 0x44);
  iVar7 = (int)*(short *)(iVar7 + 0x46);
  fVar3 = (float)iVar8;
  if (iVar8 < 0) {
    fVar3 = fVar3 + _DAT_006cc858;
  }
  fVar5 = (float)iVar7;
  if (iVar7 < 0) {
    fVar5 = fVar5 + _DAT_006cc858;
  }
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    uVar9 = iVar8 - 1;
    iVar8 = 2;
    while (uVar9 = uVar9 >> 1, uVar9 != 0) {
      iVar8 = iVar8 << 1;
    }
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar9 = iVar7 - 1;
    iVar7 = 2;
    while (uVar9 = uVar9 >> 1, uVar9 != 0) {
      iVar7 = iVar7 << 1;
    }
  }
  fVar4 = (float)iVar8;
  if (iVar8 < 0) {
    fVar4 = fVar4 + _DAT_006cc858;
  }
  fVar6 = (float)iVar7;
  if (iVar7 < 0) {
    fVar6 = fVar6 + _DAT_006cc858;
  }
  uStack_bc = (((int)local_b0 / 2 << 8 | (int)uStack_bc / 2) << 8 | (int)uStack_b8 / 2) << 8 |
              (int)uStack_b4 / 2;
  fVar1 = *(float *)(iVar10 + 0x44);
  fStack_a0 = (fVar3 / fVar4) * *(float *)(iVar10 + 0x4c);
  fStack_a8 = (fVar5 / fVar6) * *(float *)(iVar10 + 0x48);
  fVar2 = *(float *)(iVar10 + 0x50);
  puVar11 = local_5c;
  puVar12 = (undefined4 *)(obj + 0x20);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  uStack_b8 = uStack_bc;
  uStack_b4 = uStack_bc;
  local_b0 = uStack_bc;
  FUN_005146d0(obj,0xbf000000,0xbf000000,0x3f000000,0x3f000000,0x3f800000,(fVar3 / fVar4) * fVar1
               ,fStack_a8,fStack_a0,(fVar5 / fVar6) * fVar2,&uStack_bc,uStack_a4);
  *(int *)(obj + 0x14) = iStack_ac;
  FUN_00514b90(obj);
  return;
}
