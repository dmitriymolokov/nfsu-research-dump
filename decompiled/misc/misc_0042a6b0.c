/* spd-match: far pct=33.87 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042A6B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
float10 __fastcall FUN_0042a6b0(int obj, undefined1 *param_1)

{
  int iVar1;

  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  if (*(int *)(obj + 0x28) == 1) {
    iVar1 = *(int *)(*(int *)(obj + 0x34) + 0x48);
    if (param_1 != (undefined1 *)0x0) {
      if (DAT_006cc7a4 < *(float *)(iVar1 + 0xa8)) {
        *param_1 = 1;
        return (float10)*(float *)(iVar1 + 0xa4);
      }
      *param_1 = 0;
    }
    return (float10)*(float *)(iVar1 + 0xa4);
  }
  return (float10)DAT_006cc7a4;
}
