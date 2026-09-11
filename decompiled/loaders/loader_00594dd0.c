/* spd-match: far pct=11.90 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00594DD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00594750(...);
int __cdecl FUN_00594870(...);
int __cdecl FUN_0063f0a0(...);
extern int DAT_0073448c;

struct ThisCallBox {
  void FUN_00594dd0(int obj, undefined4 param_2);
};
void ThisCallBox::FUN_00594dd0(int obj, undefined4 param_2)

{
  int iVar1;

  int iVar2;
  
  iVar2 = DAT_0073448c;
  if ((obj != 0) && (-1 < *(int *)(obj + 4))) {
    FUN_00594750(((undefined4)this),param_2,0,0);
    iVar2 = DAT_0073448c;
  }
  do {
    if (iVar2 != 0) {
      FUN_0063f0a0(0);
      FUN_00594870();
      iVar2 = DAT_0073448c;
    }
    iVar1 = iVar2;
    if (obj != 0) {
      iVar1 = *(int *)(obj + 0x1c);
    }
  } while (iVar1 != 0);
  return;
}
