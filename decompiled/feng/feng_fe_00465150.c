/* spd-match: far pct=14.06 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00465150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040b930();
int __cdecl FUN_0040ba40();
int __cdecl FUN_00674898();
void __fastcall FUN_00465150(int obj, int *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  int iVar3;
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
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
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
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
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
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0.0;
  local_94 = 0x3f800000;
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
  local_60 = 0;
  local_5c = 0;
  local_58 = 0.0;
  local_54 = 0x3f800000;
  FUN_00674898();
  FUN_0040ba40(&local_d0,&local_d0);
  if (obj < 2) {
    FUN_0040b930();
    FUN_00465150(&local_d0,&local_d0,local_50);
    FUN_0040b930();
    FUN_00465150(&local_9c,&local_9c,&local_5c);
  }
  iVar2 = *param_1;
  iVar3 = obj * 0x30;
  local_5c = *(undefined4 *)(iVar3 + 0x14 + iVar2);
  puVar1 = (undefined4 *)(iVar3 + 0x10 + iVar2);
  local_60 = *puVar1;
  local_54 = 0x3f800000;
  local_9c = puVar1[1];
  local_a0 = *puVar1;
  local_58 = *(float *)(iVar3 + 0x18 + iVar2) + (float)param_1[obj + 0xc0];
  local_94 = 0x3f800000;
  local_98 = (float)puVar1[2] + (float)param_1[obj + 0xc0];
  FUN_00401cd0();
  FUN_00401cd0();
  return;
}
