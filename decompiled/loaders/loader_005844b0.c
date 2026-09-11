/* spd-match: far pct=28.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005844B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005844b0(int obj, float param_1)

{

  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(obj + 5) != '\0') {
    do {
      *(float *)(*(int *)(obj + 0x10) + iVar1 * 4) = param_1;
      *(undefined4 *)(*(int *)(obj + 0x30) + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(obj + 5));
  }
  *(undefined1 *)(obj + 6) = 0;
  *(undefined4 *)(obj + 0x2c) = 0;
  *(undefined1 *)(obj + 7) = 0;
  *(float *)(obj + 8) = (float)*(byte *)(obj + 5) * param_1;
  return;
}
