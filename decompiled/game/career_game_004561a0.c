/* spd-match: far pct=37.84 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004561A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004561a0(undefined1 * obj)

{

  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(obj + 0x1e4);
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *obj = 0;
  return;
}
