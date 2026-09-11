/* spd-match: far pct=11.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057CD30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
uint __fastcall FUN_0057cd30(undefined4 * obj, int param_1)

{
  undefined4 *puVar1;

  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (int)obj[3])) {
    puVar1 = (undefined4 *)*obj;
    puVar2 = (undefined4 *)FUN_0040a880();
    for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
      uVar3 = puVar1[3];
      uVar4 = puVar1[4] * 0x30 + uVar3;
      for (; uVar3 < uVar4; uVar3 = uVar3 + 0x30) {
        param_1 = param_1 + -1;
        if (param_1 < 0) {
          return uVar3;
        }
      }
    }
  }
  return 0;
}
