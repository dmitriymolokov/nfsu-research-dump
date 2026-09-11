/* spd-match: far pct=8.21 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005864F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005864f0(int * obj, int *param_1, int *param_2, int *param_3, int *param_4)

{
  int iVar1;

  int iVar2;
  
  iVar1 = *obj;
  iVar2 = iVar1 / 4000;
  *param_1 = iVar2 / 0xe10;
  iVar2 = iVar2 % 0xe10;
  *param_2 = iVar2 / 0x3c;
  *param_3 = iVar2 % 0x3c;
  *param_4 = ((iVar1 % 4000) * 1000) / 4000;
  return;
}
