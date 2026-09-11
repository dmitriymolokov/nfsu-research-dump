/* spd-match: far pct=79.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AAE80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc798;
float10 __fastcall FUN_005aae80(int obj, int param_1)

{
  float fVar1;

  int iVar2;
  
  iVar2 = (int)*(char *)(obj + 6 + param_1);
  fVar1 = _DAT_006cc798;
  if (iVar2 != -1) {
    fVar1 = *(float *)(iVar2 * 0x10 + -0x304 + param_1);
  }
  return (float10)fVar1;
}
