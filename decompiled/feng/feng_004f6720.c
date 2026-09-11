/* spd-match: far pct=11.24 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004F6720 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f060(...);
int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004ffb70(...);
extern int DAT_0073578c;

struct ThisCallBox {
  void FUN_004f6720(undefined4 val, undefined4 param_2);
};
void ThisCallBox::FUN_004f6720(undefined4 val, undefined4 param_2)

{

  int iVar1;
  
  if (((((int)this) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar1 = FUN_004ef050(val);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 2)) {
    FUN_0041f060(iVar1,param_2);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 2;
  }
  return;
}
