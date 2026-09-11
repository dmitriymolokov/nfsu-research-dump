/* spd-match: far pct=3.70 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A7700 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a75c0();
int __cdecl FUN_005a7820();
extern unsigned char *DAT_00736174;
undefined4 __fastcall FUN_005a7700(int obj, int param_1, int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;

  if (((obj < 0) || (4 < obj)) && ((obj < 0xb || (0x10 < obj)))) {
    return 0;
  }
  cVar3 = FUN_005a75c0(param_2);
  if (cVar3 != '\0') {
    if ((param_1 < 0xb) || (0x10 < param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((obj < 0xb) || (0x10 < obj)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((!bVar2) || (!bVar4)) ||
       ((*(short *)(DAT_00736174 + 0x6c) != 0x4b6 && (*(short *)(DAT_00736174 + 0x6c) != 0x4be)))) {
      return 1;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x814);
    (**(code **)(**(int **)(param_2 + 0x2c) + 0x40))();
    if (obj < param_1) {
      if (param_1 < obj + 1) {
        return 1;
      }
      while( true ) {
        param_1 = param_1 + -1;
        cVar3 = FUN_005a7820(uVar1);
        if (cVar3 == '\0') break;
        if (param_1 < obj + 1) {
          return 1;
        }
      }
    }
    else {
      do {
        if (obj + -1 < param_1) {
          return 1;
        }
        param_1 = param_1 + 1;
        cVar3 = FUN_005a7820(uVar1);
      } while (cVar3 != '\0');
    }
  }
  return 0;
}
