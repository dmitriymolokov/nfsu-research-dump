/* spd-match: far pct=14.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00579FC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_006ffdbc;
extern int _DAT_006cc7bc;
float10 __fastcall FUN_00579fc0(int obj, char param_1)

{
  int iVar1;

  iVar1 = *(int *)(obj + 0x14);
  if (iVar1 == 0) {
    return (float10)DAT_006cc7a4;
  }
  if (param_1 != '\0') {
    return (((float10)_DAT_006cc7bc / (float10)DAT_006ffdbc) / (float10)*(float *)(iVar1 + 0x5c)) *
           (float10)*(float *)(iVar1 + 100);
  }
  return (float10)*(float *)(iVar1 + 100);
}
