/* spd-match: far pct=6.38 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00482870 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00454f30();
extern int DAT_0073b4a4;
extern int _DAT_006cc7c4;
float10 __fastcall FUN_00482870(int obj)

{

  float local_4;
  
  local_4 = (float)(uint)(byte)(&DAT_0073b4a4)[obj];
  FUN_00454f30(&local_4,(float)(int)local_4 - _DAT_006cc7c4);
  return (float10)local_4;
}
