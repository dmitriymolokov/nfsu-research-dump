/* spd-match: far pct=36.17 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00455270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a5340();
extern unsigned char *PTR_FUN_006b7efc;
extern unsigned char *PTR_LAB_006c9030;
void __fastcall FUN_00455270(undefined4 * obj)

{

  int iVar1;
  undefined4 *puVar2;
  
  *obj = &PTR_FUN_006b7efc;
  obj[0x2a] = 0;
  puVar2 = obj;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_005a5340();
  *obj = &PTR_LAB_006c9030;
  return;
}
