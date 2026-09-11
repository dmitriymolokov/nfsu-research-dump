/* spd-match: far pct=42.72 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00440740 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00440740(undefined4 * obj)

{
  int iVar1;

  int *piVar2;
  int iVar3;
  
  *obj = 0x7f7fffff;
  obj[1] = 0x7f7fffff;
  obj[2] = 0xff7fffff;
  obj[3] = 0xff7fffff;
  obj[4] = 0x7f7fffff;
  obj[5] = 0x7f7fffff;
  obj[6] = 0xff7fffff;
  obj[7] = 0xff7fffff;
  iVar3 = obj[0xa8];
  if (0 < iVar3) {
    piVar2 = obj + 8;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar3 != 0);
  }
  obj[0xa8] = 0;
  obj[0xa9] = 0;
  obj[0xaa] = 0;
  obj[0xab] = 0;
  obj[0xac] = 0;
  return;
}
