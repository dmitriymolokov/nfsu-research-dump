/* spd-match: far pct=25.76 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B14E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00487ba0();
extern int DAT_006b6b28;
extern int DAT_006b6b2c;
extern int DAT_006fb02c;
extern int DAT_00735e84;
extern int DAT_0073ad3c;
extern int DAT_0074810c;
extern int _DAT_00746de0;
void __fastcall FUN_004b14e0(int val, int param_1)

{

  _DAT_00746de0 = DAT_006b6b2c;
  *(int *)(param_1 + 0x124) = val;
  if (val == 0) {
    _DAT_00746de0 = DAT_006b6b28;
  }
  *(int *)(param_1 + 0x8c) = val;
  FUN_00487ba0();
  DAT_006fb02c = 0;
  DAT_00735e84 = 0;
  DAT_0074810c = DAT_0073ad3c;
  return;
}
