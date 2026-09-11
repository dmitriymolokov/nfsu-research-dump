/* spd-match: far pct=14.17 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057CD80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057ce10();
int __cdecl FUN_0057cf20();
extern int DAT_006f227c;
undefined4 __fastcall FUN_0057cd80(undefined4 val, undefined4 param_1, uint param_2)

{
  undefined4 uVar1;

  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  
  uVar1 = param_2;
  uVar2 = FUN_0057cf20(param_1,param_2,unaff_ESI,0);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = DAT_006f227c % uVar2;
    uVar5 = DAT_006f227c ^ 0x1d872b41;
    uVar3 = uVar5 >> 5 ^ uVar5;
    DAT_006f227c = uVar3 << 0x1b ^ uVar3 ^ uVar5;
    uVar4 = FUN_0057ce10(param_2,unaff_ESI,0,0,val);
    param_2 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar4 = FUN_0057ce10(uVar1,unaff_ESI,0,uVar4,val);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return uVar4;
    }
  }
  return uVar4;
}
