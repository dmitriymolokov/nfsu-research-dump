/* spd-match: close pct=90.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055B5D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
void __fastcall FUN_0055b5d0(int obj)

{

  undefined4 local_34 [13];
  
  if (obj < 1) {
    obj = 1;
  }
  else if (0xc < obj) {
    obj = 0xc;
  }
  local_34[0] = 0xffffffff;
  local_34[1] = 0x1894d765;
  local_34[2] = 0x1894d766;
  local_34[3] = 0x1894d767;
  local_34[4] = 0x1894d768;
  local_34[5] = 0x1894d769;
  local_34[6] = 0x1894d76a;
  local_34[7] = 0x1894d76b;
  local_34[8] = 0x1894d76c;
  local_34[9] = 0x1894d76d;
  local_34[10] = 0x1894d785;
  local_34[0xb] = 0x1894d786;
  local_34[0xc] = 0x1894d787;
  FUN_00495f00(local_34[obj]);
  return;
}
