/* spd-match: far pct=4.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048EE20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00441030();
extern int DAT_006b6ba8;
extern int DAT_006b6bac;
byte __fastcall FUN_0048ee20(int val, undefined4 param_1, undefined4 param_2, int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;

  undefined4 unaff_EDI;
  bool bVar4;
  
  bVar4 = val == 1;
  bVar1 = FUN_00441030(param_1,0,bVar4,unaff_EDI,DAT_006b6ba8,DAT_006b6bac);
  bVar2 = FUN_00441030(param_1,1,bVar4,unaff_EDI,DAT_006b6ba8,DAT_006b6bac);
  bVar1 = bVar1 | bVar2;
  if (param_3 == 1) {
    bVar2 = FUN_00441030(param_1,0,bVar4,param_2,DAT_006b6ba8,DAT_006b6bac);
    bVar3 = FUN_00441030(param_1,1,bVar4,param_2,DAT_006b6ba8,DAT_006b6bac);
    bVar1 = bVar1 | bVar2 | bVar3;
  }
  return bVar1;
}
