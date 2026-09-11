/* spd-match: far pct=8.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BD670 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f09b0();
int __cdecl FUN_004f3f90();
extern int DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00748f78;
extern int DAT_00777b4c;
void __fastcall FUN_004bd670(uint val)

{

  int iVar1;
  
  if (DAT_00777b4c == 2) {
    if ((val & 1) == 0) {
      if ((val & 2) == 0) {
        if ((val & 4) == 0) {
          DAT_00748f78 = (-(uint)((val & 8) != 0) & 4) - 1;
        }
        else {
          DAT_00748f78 = 2;
        }
      }
      else {
        DAT_00748f78 = 1;
      }
    }
    else {
      DAT_00748f78 = 0;
    }
  }
  if (((DAT_0073578c != 0) && (iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) != 0)) {
    FUN_004f09b0(*(int *)(iVar1 + 0x18));
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0xaa3f4777,0,0,*(int *)(iVar1 + 0x18));
  }
  return;
}
