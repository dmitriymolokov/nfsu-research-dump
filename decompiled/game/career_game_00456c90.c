/* spd-match: far pct=8.45 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00456C90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00456c90(int * obj)

{
  int iVar1;
  int iVar2;

  iVar1 = *obj;
  if ((((iVar1 != 0) && (obj[1] != 0)) && (-1 < *(short *)(iVar1 + 10))) &&
     (((*(short *)(iVar1 + 10) < 0x78 && (iVar2 = ((obj[1] - iVar1) + -0x27c) / 0x88, -1 < iVar2)
       ) && (iVar2 < *(short *)(iVar1 + 0x10))))) {
    return 1;
  }
  return 0;
}
