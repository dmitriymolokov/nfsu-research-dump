/* spd-match: far pct=3.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051BE00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
undefined1 __fastcall FUN_0051be00(undefined4 * obj, int edi, char param_1)

{
  undefined4 *puVar1;

  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*obj;
  puVar2 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    if (puVar1[2] == edi) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (param_1 != '\0') {
    return *(undefined1 *)(puVar1 + 3);
  }
  return *(undefined1 *)((int)puVar1 + 0xd);
}
