/* spd-match: far pct=13.54 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054AA70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004388d0();
int __cdecl FUN_00438ae0();
int __cdecl FUN_004392a0();
int __cdecl FUN_0043cb60();
int __cdecl FUN_004ac0f0();
int __cdecl FUN_00549580();
int __cdecl FUN_0054cf40();
int __cdecl FUN_00565da0();
int __cdecl FUN_005ab2b0();
int __cdecl FUN_006497c0();
int __cdecl FUN_00664e00();
int __cdecl FUN_00667d70();
extern int DAT_0073d8d0;
void __fastcall FUN_0054aa70(int obj)

{

  undefined4 uVar1;
  undefined1 local_dc0 [2];
  undefined1 local_dbe [254];
  undefined1 local_cc0 [384];
  undefined1 local_b40 [1040];
  undefined1 local_730 [1836];
  
  if (*(int *)(obj + 0x68) != 0) {
    FUN_004392a0();
    FUN_00417600();
    FUN_004ac0f0(local_730);
    FUN_0043cb60(local_730,local_b40,1);
    FUN_00438ae0();
    uVar1 = FUN_00549580();
    FUN_00565da0(uVar1);
    uVar1 = FUN_004388d0(local_dbe,0xfe,1);
    uVar1 = FUN_006497c0(uVar1);
    FUN_005ab2b0(uVar1);
    local_cc0[0] = 0;
    FUN_00667d70(local_cc0,0x180,"TEXT=%s",local_dc0);
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0,0x61757869,local_cc0,FUN_0054cf40,0);
    }
  }
  return;
}
