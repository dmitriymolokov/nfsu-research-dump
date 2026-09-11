/* spd-match: far pct=11.86 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0045C500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004594d0(...);
int __cdecl FUN_005a7270(...);

struct ThisCallBox {
  void FUN_0045c500(int obj, undefined4 param_2, undefined4 param_3);
};
void ThisCallBox::FUN_0045c500(int obj, undefined4 param_2, undefined4 param_3)

{

  undefined1 local_20 [28];
  
  FUN_005a7270(local_20,*(undefined4 *)(obj + 0x58),param_3,((undefined4)this));
  FUN_004594d0(*(undefined1 *)(obj + 0x5c),*(undefined2 *)(obj + 0x5e),((undefined4)this),1);
  return;
}
