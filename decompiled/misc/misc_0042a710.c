/* spd-match: far pct=7.94 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042A710 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
void __fastcall FUN_0042a710(int val, undefined4 *param_1)

{

  int unaff_ESI;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [36];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_00401cd0();
  local_5c = *(undefined4 *)(unaff_ESI + 100);
  local_60 = *(undefined4 *)(unaff_ESI + 0x60);
  local_58 = *(undefined4 *)(unaff_ESI + 0x68);
  local_54 = 0x3f800000;
  FUN_0042a710(local_50,val * 0x40 + 0xf0 + unaff_ESI,local_90);
  *param_1 = uStack_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  return;
}
