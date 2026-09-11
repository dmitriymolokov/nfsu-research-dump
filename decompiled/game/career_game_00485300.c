/* spd-match: far pct=14.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b930();
int __cdecl FUN_0040b990();
int __cdecl FUN_0040ba40();
int __cdecl FUN_0047d070();
int __cdecl FUN_00575040();
extern int DAT_006b6cbc;
extern int DAT_006b6cc0;
extern int DAT_00735f5c;
extern int DAT_0073ad38;
extern int _DAT_00705b30;
extern int _DAT_00705b34;
extern int _DAT_00705b38;

void __fastcall FUN_00485300(int param_1)

{
  int iVar1;
  int iStack_124;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [8];
  undefined1 local_90 [56];
  undefined1 auStack_58 [84];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_d4 = 0x3f800000;
  local_e0 = -*(float *)(iVar1 + 0x50);
  iStack_124 = iVar1 + 0x90;
  local_dc = -*(float *)(iVar1 + 0x54);
  local_d8 = -*(float *)(iVar1 + 0x58);
  FUN_00485300(local_90);
  FUN_0040b990(auStack_98,auStack_98);
  FUN_0040ba40(auStack_98,auStack_98);
  FUN_0040b930();
  FUN_00485300(auStack_98,auStack_98,auStack_58);
  FUN_00485300(&local_e4,&iStack_124,auStack_a4);
  fStack_c0 = ((int)(_DAT_00705b30)) + fStack_c0;
  fStack_bc = ((int)(_DAT_00705b34)) + fStack_bc;
  fStack_b8 = ((int)(_DAT_00705b38)) + fStack_b8;
  if (DAT_00735f5c == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = 20000;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xbc) = DAT_006b6cbc;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc0) = DAT_006b6cc0;
  FUN_00575040(*(undefined4 *)(param_1 + 0x10));
  FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),&local_f0,DAT_0073ad38);
  return;
}
