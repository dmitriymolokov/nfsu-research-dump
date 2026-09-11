/* spd-match: far pct=7.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F2280 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f1810();
int __cdecl FUN_004f2db0();
int __cdecl FUN_005146d0();
int __cdecl FUN_00514b90();
int __cdecl FUN_00514bf0();
int __cdecl FUN_005461c0();
extern int _DAT_006cc858;
void __fastcall FUN_004f2280(int obj, undefined4 param_1, int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uStack_c8;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_a4;
  undefined1 local_a0 [16];
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
  
  iVar12 = *(int *)(param_2 + 0x2c);
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
  local_bc = FUN_004f1810(param_1,local_a0,*(undefined2 *)(param_2 + 0x20),0x3f800000);
  FUN_004f2280(local_50,local_50,&local_90);
  iVar9 = FUN_005461c0(*(undefined4 *)(param_2 + 0x24),1,0);
  if (obj == 0) {
    obj = FUN_004f2db0(param_1,param_2,iVar9);
  }
  else {
    FUN_00514bf0(obj);
  }
  iVar10 = (int)*(short *)(iVar9 + 0x44);
  iVar13 = (int)*(short *)(iVar9 + 0x46);
  fVar5 = (float)iVar10;
  if (iVar10 < 0) {
    fVar5 = fVar5 + _DAT_006cc858;
  }
  fVar7 = (float)iVar13;
  if (iVar13 < 0) {
    fVar7 = fVar7 + _DAT_006cc858;
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    uVar11 = iVar10 - 1;
    iVar10 = 2;
    while (uVar11 = uVar11 >> 1, uVar11 != 0) {
      iVar10 = iVar10 << 1;
    }
  }
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    uVar11 = iVar13 - 1;
    iVar13 = 2;
    while (uVar11 = uVar11 >> 1, uVar11 != 0) {
      iVar13 = iVar13 << 1;
    }
  }
  fVar6 = (float)iVar10;
  if (iVar10 < 0) {
    fVar6 = fVar6 + _DAT_006cc858;
  }
  fVar8 = (float)iVar13;
  if (iVar13 < 0) {
    fVar8 = fVar8 + _DAT_006cc858;
  }
  local_bc = ((*(int *)(iVar12 + 0x60) / 2 << 8 | *(int *)(iVar12 + 0x54) / 2) << 8 |
             *(int *)(iVar12 + 0x58) / 2) << 8 | *(int *)(iVar12 + 0x5c) / 2;
  uStack_b8 = ((*(int *)(iVar12 + 0x70) / 2 << 8 | *(int *)(iVar12 + 100) / 2) << 8 |
              *(int *)(iVar12 + 0x68) / 2) << 8 | *(int *)(iVar12 + 0x6c) / 2;
  fVar1 = *(float *)(iVar12 + 0x44);
  fVar2 = *(float *)(iVar12 + 0x4c);
  fVar3 = *(float *)(iVar12 + 0x48);
  uStack_b4 = ((*(int *)(iVar12 + 0x80) / 2 << 8 | *(int *)(iVar12 + 0x74) / 2) << 8 |
              *(int *)(iVar12 + 0x78) / 2) << 8 | *(int *)(iVar12 + 0x7c) / 2;
  fVar4 = *(float *)(iVar12 + 0x50);
  iStack_a4 = *(int *)(iVar12 + 0x8c);
  uStack_b0 = ((*(int *)(iVar12 + 0x90) / 2 << 8 | *(int *)(iVar12 + 0x84) / 2) << 8 |
              *(int *)(iVar12 + 0x88) / 2) << 8 | iStack_a4 / 2;
  puVar14 = local_5c;
  puVar15 = (undefined4 *)(obj + 0x20);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_005146d0(obj,0xbf000000,0xbf000000,0x3f000000,0x3f000000,0x3f800000,(fVar5 / fVar6) * fVar1
               ,(fVar7 / fVar8) * fVar3,(fVar5 / fVar6) * fVar2,(fVar7 / fVar8) * fVar4,&local_bc,
               uStack_c8);
  *(int *)(obj + 0x14) = iVar9;
  FUN_00514b90(obj);
  return;
}
