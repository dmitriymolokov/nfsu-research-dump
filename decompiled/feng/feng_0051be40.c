/* spd-match: far pct=20.00 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.5/va_0051BE40 */
/* M4.1.5 w11 try3: __cdecl 3-arg (flip off fastcall). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
undefined1 __cdecl FUN_0051be40(undefined4 * obj, int edi, char param_1)

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
    return *(undefined1 *)((int)puVar1 + 0xe);
  }
  return *(undefined1 *)((int)puVar1 + 0xf);
}
