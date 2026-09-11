/* spd-match: far pct=25.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DBBB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_004d7980();
void __fastcall FUN_004dbbb0(undefined4 * obj)

{

  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)*obj;
  iVar3 = 0;
  puVar1 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar2 == puVar1) {
      return;
    }
    FUN_004d7980();
    puVar2 = (undefined4 *)*puVar2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  return;
}
