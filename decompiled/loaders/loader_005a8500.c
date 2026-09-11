/* spd-match: far pct=10.98 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A8500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00733738;
extern int DAT_007338f4;
extern int DAT_00733ab0;
extern int DAT_00733c6c;
void __fastcall FUN_005a8500(undefined4 val)

{

  int iVar1;
  undefined4 *puVar2;
  
  switch(val) {
  case 0x530b82b0:
    puVar2 = &DAT_00733738;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return;
  case 0x530b82b1:
    puVar2 = &DAT_007338f4;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return;
  case 0x530b82b2:
    puVar2 = &DAT_00733ab0;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return;
  case 0x530b82b3:
    puVar2 = &DAT_00733c6c;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}
