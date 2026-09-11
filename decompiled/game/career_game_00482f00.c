/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00482F00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0047fcc0(...);
extern void LAB_00482f51(...);

struct ThisCallBox {
  void FUN_00482f00(int obj, int param_2);
};
void ThisCallBox::FUN_00482f00(int obj, int param_2)

{

  int iVar1;
  int iVar2;
  uint uStack_4;
  
  iVar1 = 0;
  if (obj < 1) {
    return;
  }
  uStack_4 = 0;
  if (*((int *)this) == 0x12345678) {
    uStack_4 = ((int *)this)[1];
    obj = obj + -8;
    if (4 < uStack_4) {
      iVar2 = 0;
      goto LAB_00482f51;
    }
  }
  switch(uStack_4) {
  default:
    iVar2 = 0x40;
    break;
  case 3:
    iVar2 = 0x48;
    break;
  case 4:
    iVar2 = 0x4c;
  }
LAB_00482f51:
  iVar2 = obj / iVar2;
  if (iVar2 != 0) {
    if (0x27 < iVar2) {
      iVar2 = 0x28;
    }
    *(int *)(param_2 + 0xcb0) = iVar2;
    if (0 < iVar2) {
      do {
        FUN_0047fcc0();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0xcb0));
    }
  }
  return;
}
