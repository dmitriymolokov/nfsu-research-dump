/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ee1e8;
extern int DAT_006ee2d8;
int unaff_EDI;
int unaff_ESI;
undefined4 __fastcall FUN_005a7820(int val, undefined4 param_1, int param_2, float param_3)

{

  int *piVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (val == 0x4b6) {
    piVar1 = &DAT_006ee1e8;
    do {
      if (((piVar1[4] == param_2) && (*piVar1 == unaff_EDI)) &&
         ((piVar1[1] == unaff_ESI &&
          (((float)piVar1[2] < param_3 != ((float)piVar1[2] == param_3) &&
           (param_3 <= (float)piVar1[3])))))) {
        return 0;
      }
      piVar1 = piVar1 + 5;
    } while ((int)piVar1 < 0x6ee2d8);
  }
  else if (val == 0x4be) {
    piVar1 = &DAT_006ee2d8;
    while ((((piVar1[4] != param_2 || (*piVar1 != unaff_EDI)) || (piVar1[1] != unaff_ESI)) ||
           (((float)piVar1[2] < param_3 == ((float)piVar1[2] == param_3) ||
            ((float)piVar1[3] < param_3))))) {
      piVar1 = piVar1 + 5;
      if (0x6ee3c7 < (int)piVar1) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}
