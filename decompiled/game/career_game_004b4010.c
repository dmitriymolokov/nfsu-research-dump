/* spd-match: far pct=43.18 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.4/va_004B4010 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b26f0(...);
int __cdecl FUN_004b3c60(...);

struct ThisCallBox {
  void FUN_004b4010(undefined4 param_2, undefined4 param_3);
};
void ThisCallBox::FUN_004b4010(undefined4 param_2, undefined4 param_3)

{

  if ((this != 0) && (*(int *)((int)this + 0xc) != 0)) {
    FUN_004b26f0(((undefined4)this));
    return;
  }
  FUN_004b3c60(((undefined4)this),param_3,1,0);
  return;
}
