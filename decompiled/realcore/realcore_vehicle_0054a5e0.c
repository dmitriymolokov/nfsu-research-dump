/* spd-match: far pct=15.32 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0054A5E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054c9e0(...);
int __cdecl FUN_00664e00(...);
int __cdecl FUN_00667d70(...);
extern int DAT_0073d8d0;

struct ThisCallBox {
  void FUN_0054a5e0(int obj, undefined4 param_2);
};
void ThisCallBox::FUN_0054a5e0(int obj, undefined4 param_2)

{

  undefined1 local_80 [128];
  
  if (((*(int *)(obj + 0x68) != 0) && (((char *)this) != (char *)0x0)) && (*((char *)this) != '\0')) {
    *(undefined4 *)(obj + 0x540) = 5;
    *(undefined4 *)(obj + 0x544) = param_2;
    local_80[0] = 0;
    FUN_00667d70(local_80,0x80,"NAME=%s",((char *)this));
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0,0x726f6f6d,local_80,FUN_0054c9e0,0);
    }
  }
  return;
}
