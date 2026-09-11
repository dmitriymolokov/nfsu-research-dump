/* spd-match: far pct=10.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584310 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00584310(int obj, float param_1)

{

  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(obj + 5) != '\0') {
    do {
      *(float *)(*(int *)(obj + 0x10) + iVar1 * 4) = param_1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(obj + 5));
  }
  *(byte *)(obj + 6) = *(byte *)(obj + 5);
  *(float *)(obj + 0xc) = param_1;
  *(float *)(obj + 8) = (float)*(byte *)(obj + 5) * param_1;
  return;
}
