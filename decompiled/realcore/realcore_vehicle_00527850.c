/* spd-match: far pct=19.01 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00527850 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00527810();
int __cdecl FUN_0064b7d0();
int __cdecl FUN_0064bc30();
int unaff_EDI;
void __fastcall FUN_00527850(int obj)

{

  int unaff_EDI;
  int local_8;
  int local_4;
  
  if (*(int **)(obj + 0x14) != (int *)0x0) {
    local_8 = 0;
    if (**(int **)(obj + 0x14) != 0) {
      FUN_0064b7d0(&local_8);
      if ((local_8 == 1) && (*(int *)(obj + 0x18) == 0)) {
        FUN_00527810();
        return;
      }
    }
    local_4 = (int)*(short *)(*(int *)(obj + 8) + 6);
    (**(code **)(**(int **)(obj + 4) + 0x38))(&local_4,2);
    if (unaff_EDI < 0) {
      unaff_EDI = 0;
    }
    else if (0x7fff < unaff_EDI) {
      unaff_EDI = 0x7fff;
    }
    *(int *)(*(int *)(obj + 0x14) + 8) = unaff_EDI;
    if (**(int **)(obj + 0x14) != 0) {
      FUN_0064bc30(*(int **)(obj + 0x14) + 1);
    }
  }
  return;
}
