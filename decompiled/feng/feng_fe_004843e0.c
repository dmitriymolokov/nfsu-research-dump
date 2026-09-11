/* spd-match: far pct=3.62 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b930();
int __cdecl FUN_0040b990();
int __cdecl FUN_0040ba40();
int __cdecl FUN_0040bb20();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0047d070();
int __cdecl FUN_00565020();
extern int DAT_006fbe40;
extern int DAT_00735ef4;
extern int DAT_00735f5c;
extern unsigned char *DAT_007361f0;
extern int DAT_0073ad38;
extern int _DAT_006fbe3c;
extern int _DAT_00735ef8;
extern int _DAT_00736800;
extern int _DAT_00736804;
extern int _DAT_00736808;
extern int _DAT_0073680c;

void __fastcall FUN_004843e0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [8];
  undefined1 local_110 [48];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  cVar4 = FUN_0043a2e0();
  if (((cVar4 != '\0') || (DAT_007361f0 == (int *)0x0)) ||
     ((*DAT_007361f0 != 7 && (*DAT_007361f0 != 0xb)))) {
    iVar6 = *(int *)(param_1 + 0xb0);
    local_d0 = 0x3f800000;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0x3f800000;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0x3f800000;
    local_a4 = 0;
    local_a0 = 0.0;
    local_9c = 0.0;
    local_98 = 0.0;
    local_94 = 0x3f800000;
    if (iVar6 == 0) {
      FUN_00565020();
      local_d8 = -_DAT_006fbe3c;
    }
    else {
      local_a0 = -*(float *)(iVar6 + 0x50);
      local_9c = -*(float *)(iVar6 + 0x54);
      local_98 = -*(float *)(iVar6 + 0x58) - _DAT_00735ef8;
      FUN_004843e0(local_50,iVar6 + 0x90);
      FUN_004843e0(auStack_118,&local_d8,auStack_58);
      fStack_e0 = fStack_e0 + _DAT_00736800;
      fStack_dc = fStack_dc + _DAT_00736804;
      local_d8 = ((int)(_DAT_00736808)) + local_d8;
      fStack_d4 = fStack_d4 + _DAT_0073680c;
    }
    if (*(int *)(param_1 + 0x58) != 0x3f800000) {
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x48);
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x48);
    if (*(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x50);
    }
    if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x2c)) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
    }
    if (*(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x50);
    }
    if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x48)) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
    }
    iVar6 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x60);
    if (iVar2 < iVar6) {
      if (iVar3 < iVar6 - iVar2) {
        iVar6 = iVar3 + iVar2;
      }
      *(int *)(param_1 + 0x38) = iVar6;
    }
    else {
      if (iVar3 < iVar2 - iVar6) {
        iVar6 = iVar2 - iVar3;
      }
      *(int *)(param_1 + 0x38) = iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 < iVar6) {
      if (iVar3 < iVar6 - iVar2) {
        iVar6 = iVar2 + iVar3;
      }
      *(int *)(param_1 + 0x3c) = iVar6;
    }
    else {
      if (iVar3 < iVar2 - iVar6) {
        iVar6 = iVar2 - iVar3;
      }
      *(int *)(param_1 + 0x3c) = iVar6;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x3c);
    uVar1 = *(ushort *)(param_1 + 0x32);
    if (*(int *)(param_1 + 0x68) != 0) {
      uVar5 = *(ushort *)(param_1 + 0x34);
      if (uVar1 < uVar5) {
        if (0x50 < (int)((uint)uVar5 - (uint)uVar1)) {
          uVar5 = uVar1 + 0x50;
        }
      }
      else if (0x50 < (int)((uint)uVar1 - (uint)uVar5)) {
        uVar5 = uVar1 - 0x50;
      }
      *(ushort *)(param_1 + 0x32) = uVar5;
    }
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x38);
    if (DAT_00735ef4 == 0) {
      FUN_0040b930();
      FUN_004843e0(local_110,local_110,auStack_90);
      FUN_0040ba40(auStack_11c,auStack_11c);
    }
    else {
      FUN_0040b930();
      FUN_004843e0(local_110,local_110,auStack_90);
      FUN_0040ba40(auStack_11c,auStack_11c);
    }
    FUN_0040bb20(auStack_11c,auStack_11c);
    FUN_0040b990(auStack_11c,auStack_11c);
    FUN_0040ba40(auStack_11c,auStack_11c);
    if (DAT_00735f5c == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = DAT_006fbe40;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb0) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0x41000000;
    }
    FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),auStack_11c,DAT_0073ad38);
  }
  return;
}
