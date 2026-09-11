/* spd-match: far pct=16.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00480150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00480150(int obj, float param_1)

{

  int iVar1;
  float *pfVar2;
  
  iVar1 = *(int *)(obj + 0xcb0) + -1;
  if (0 < iVar1) {
    pfVar2 = (float *)(iVar1 * 0x4c + 0xd8 + obj);
    do {
      if (*pfVar2 < param_1 != (*pfVar2 == param_1)) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      pfVar2 = pfVar2 + -0x13;
    } while (0 < iVar1);
  }
  return iVar1;
}
