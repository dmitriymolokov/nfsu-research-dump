/* spd-match: far pct=11.90 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00480A20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00480a20(int obj, int param_1)

{
  undefined4 uVar1;

  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *(undefined4 *)(obj * 0x4c + 0xd8 + param_1);
  iVar2 = obj * 0x4c + param_1;
  puVar4 = (undefined4 *)(param_1 + 0x84);
  puVar5 = (undefined4 *)(iVar2 + 0xd0);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(iVar2 + 0xd8) = uVar1;
  return;
}
