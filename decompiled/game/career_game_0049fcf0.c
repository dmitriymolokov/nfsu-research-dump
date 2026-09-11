/* spd-match: far pct=3.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049FCF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
extern int DAT_006fbf14;
int __fastcall FUN_0049fcf0(int obj)

{
  int iVar1;

  int iVar2;
  
  iVar1 = *(int *)(obj + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(obj + 0x10) == 0)) &&
     (iVar2 = FUN_0041ffe0(), iVar2 != 0)) {
    return iVar2;
  }
  return iVar1;
}
