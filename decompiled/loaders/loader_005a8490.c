/* spd-match: far pct=10.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A8490 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00733738;
extern int DAT_007338f4;
extern int DAT_00733ab0;
extern int DAT_00733c6c;
void __fastcall FUN_005a8490(int * obj)

{

  int iVar1;
  int *piVar2;
  
  switch(*(undefined4 *)(*obj + 0x24)) {
  case 0x530b82b0:
    piVar2 = &DAT_00733738;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *obj;
      obj = obj + 1;
      piVar2 = piVar2 + 1;
    }
    return;
  case 0x530b82b1:
    piVar2 = &DAT_007338f4;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *obj;
      obj = obj + 1;
      piVar2 = piVar2 + 1;
    }
    return;
  case 0x530b82b2:
    piVar2 = &DAT_00733ab0;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *obj;
      obj = obj + 1;
      piVar2 = piVar2 + 1;
    }
    return;
  case 0x530b82b3:
    piVar2 = &DAT_00733c6c;
    for (iVar1 = 0x6f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *obj;
      obj = obj + 1;
      piVar2 = piVar2 + 1;
    }
  }
  return;
}
