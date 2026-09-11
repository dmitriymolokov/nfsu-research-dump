/* spd-match: far pct=9.24 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A8400 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00733738;
extern int DAT_007338f4;
extern int DAT_00733ab0;
extern int DAT_00733c6c;
undefined1 __fastcall FUN_005a8400(int * obj)

{
  int iVar1;
  int iVar2;

  int iVar3;
  int *piVar4;
  
  switch(*(undefined4 *)(*obj + 0x24)) {
  case 0x530b82b0:
    iVar3 = 0x6f;
    piVar4 = &DAT_00733738;
    break;
  case 0x530b82b1:
    iVar3 = 0x6f;
    piVar4 = &DAT_007338f4;
    do {
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = iVar3 + -1;
      iVar2 = *obj;
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      obj = obj + 1;
    } while (iVar1 == iVar2);
    return 0;
  case 0x530b82b2:
    iVar3 = 0x6f;
    piVar4 = &DAT_00733ab0;
    do {
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = iVar3 + -1;
      iVar2 = *obj;
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      obj = obj + 1;
    } while (iVar1 == iVar2);
    return 0;
  case 0x530b82b3:
    iVar3 = 0x6f;
    piVar4 = &DAT_00733c6c;
    do {
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = iVar3 + -1;
      iVar2 = *obj;
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      obj = obj + 1;
    } while (iVar1 == iVar2);
    return 0;
  default:
    return 0;
  }
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *obj;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    obj = obj + 1;
  } while (iVar1 == iVar2);
  return 0;
}
