/* spd-match: far pct=13.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-ce_arity_c2198/va_00584B80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00565230();
int __cdecl thunk_FUN_005ac68f();
int __cdecl thunk_FUN_005abda2();
extern int _DAT_006cc7bc;
void __fastcall FUN_00584b80(undefined4 * obj, undefined4 param_1, int param_2, float *param_3, undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;

  float local_110 [6];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [52];
  undefined1 auStack_9c [52];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  uVar1 = obj[2];
  uVar4 = *obj;
  *(undefined4 *)(param_2 + 0x24) = obj[1];
  *(undefined4 *)(param_2 + 0x20) = uVar4;
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  FUN_00401cd0();
  fVar2 = *(float *)(param_2 + 0x144);
  fVar3 = param_3[1];
  fVar5 = param_3[2];
  local_110[1] = 0.0;
  *(float *)(param_2 + 0x70) = fVar2 * *param_3;
  local_110[2] = 0.0;
  local_110[3] = 0.0;
  local_110[4] = 0.0;
  local_f8 = 0;
  local_f4 = 0;
  *(float *)(param_2 + 0x74) = fVar3 * fVar2;
  local_f0 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  *(float *)(param_2 + 0x78) = fVar5 * fVar2;
  local_d8 = 0;
  local_d4 = 0x3f800000;
  local_110[0] = _DAT_006cc7bc / *(float *)(param_2 + 0x150);
  local_110[5] = _DAT_006cc7bc / *(float *)(param_2 + 0x164);
  local_e8 = _DAT_006cc7bc / *(float *)(param_2 + 0x178);
  FUN_00565230();
  thunk_FUN_005ac68f(local_d0,local_110,param_2 + 0x30);
  thunk_FUN_005ac68f(auStack_5c,auStack_9c,&local_dc);
  thunk_FUN_005abda2(param_2 + 0x80,param_4,auStack_68);
  return;
}
