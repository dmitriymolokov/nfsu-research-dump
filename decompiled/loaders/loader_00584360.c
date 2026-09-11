/* spd-match: far pct=2.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584360 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584180();
int __cdecl FUN_00674898();
extern unsigned char *PTR_FUN_006b968c;
void __fastcall FUN_00584360(undefined4 * obj, undefined4 param_1)

{

  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_00674898();
  FUN_00584180(uVar1);
  obj[10] = param_1;
  *obj = &PTR_FUN_006b968c;
  obj[0xb] = 0;
  puVar2 = _malloc((uint)*(byte *)((int)obj + 5) << 2);
  obj[0xc] = puVar2;
  for (uVar3 = (uint)*(byte *)((int)obj + 5); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}
