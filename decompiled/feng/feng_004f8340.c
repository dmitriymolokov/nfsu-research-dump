/* spd-match: far pct=10.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F8340 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004cd180();
extern unsigned char *DAT_006f8a48;
void __fastcall FUN_004f8340(int val)

{

  uint uVar1;
  
  if ((&DAT_006f8a48)[val * 2] != val) {
    uVar1 = 0;
    do {
      if (*(int *)((int)&DAT_006f8a48 + uVar1) == val) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 < 0x70);
  }
  FUN_004cd180(0);
  return;
}
