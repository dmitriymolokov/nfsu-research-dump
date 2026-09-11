/* spd-match: far pct=8.16 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00664380 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00549460();
void __fastcall FUN_00664380(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
  int *piVar1;
  int iVar2;

  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_00549460(0x44);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = param_1;
    puVar3[0xf] = param_3;
    puVar3[0xe] = param_2;
    puVar3[0x10] = 0;
    *puVar3 = *(undefined4 *)(obj + 0x704);
    piVar1 = (int *)(obj + 0x6f4);
    *(uint *)(obj + 0x704) = *(int *)(obj + 0x704) + 1U & 0x7fffffff;
    iVar2 = *piVar1;
    while ((iVar2 != 0 && (*(int *)(iVar2 + 4) != 0x70696e67))) {
      piVar1 = (int *)(iVar2 + 0x40);
      iVar2 = *piVar1;
    }
    iVar2 = *piVar1;
    *piVar1 = (int)puVar3;
    puVar3[0x10] = iVar2;
  }
  return;
}
