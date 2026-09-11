/* spd-match: far pct=21.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00565AF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565310();
extern int DAT_007301d4;
extern unsigned char *DAT_007301f8;
void __fastcall FUN_00565af0(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  (&DAT_007301d4)[obj] = &DAT_007301f8 + obj * 0x58;
  FUN_00565310(param_3,param_2);
  return;
}
