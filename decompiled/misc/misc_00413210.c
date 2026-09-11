/* spd-match: far pct=20.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00413210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00647cb0();
extern int DAT_00701008;
void __fastcall FUN_00413210(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(obj + 0xc) & 0x1000) == 0) {
    iVar4 = obj + 0x10;
  }
  else {
    iVar4 = *(int *)(obj + 0x10) + obj;
  }
  iVar3 = (int)*(short *)(obj + 6);
  iVar1 = (int)*(short *)(obj + 4);
  iVar2 = iVar1 * iVar3 + iVar4;
  FUN_00647cb0(iVar4,iVar2,(iVar1 / 2) * (iVar3 / 2) + iVar2,iVar1,iVar1,iVar3,param_3,
               iVar1 * DAT_00701008,param_2);
  return;
}
