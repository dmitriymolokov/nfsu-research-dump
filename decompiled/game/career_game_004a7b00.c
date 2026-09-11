/* spd-match: far pct=9.92 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A7B00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6a70();
int __cdecl FUN_00674898();
extern int DAT_006ca778;
extern int DAT_006cc7a4;
extern int _DAT_006cccd4;
void __fastcall FUN_004a7b00(int val, float param_1, float param_2)

{

  undefined4 uVar1;
  
  if (val == 0) {
    param_1 = DAT_006cc7a4;
  }
  if (param_2 < DAT_006cc7a4) {
    param_1 = DAT_006cc7a4;
  }
  param_1 = ABS(param_1);
  if (_DAT_006cccd4 < param_1) {
    param_1 = 90.0;
  }
  uVar1 = FUN_00674898();
  FUN_004f68a0(&DAT_006ca778,uVar1);
  FUN_004f6a70(param_1 + _DAT_006cccd4);
  return;
}
