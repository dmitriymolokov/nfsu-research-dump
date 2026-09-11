/* spd-match: far pct=4.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F66F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00735710;
int unaff_ESI;
void __fastcall FUN_004f66f0(undefined4 val)

{
  undefined4 *puVar1;

  int unaff_ESI;
  bool bVar2;
  
  if (unaff_ESI != 0) {
    *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar2 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(unaff_ESI + 0x5c) = val;
    if (bVar2) {
      (**(code **)*puVar1)();
    }
    *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}
