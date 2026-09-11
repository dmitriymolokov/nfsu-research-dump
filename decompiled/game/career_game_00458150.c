/* spd-match: far pct=9.18 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00458150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00458150(undefined1 * obj, undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  *obj = *param_1;
  iVar5 = 0x14;
  puVar3 = (undefined4 *)(param_1 + (int)(obj + 0x10) + (8 - (int)obj));
  puVar4 = (undefined4 *)(obj + 0x10);
  do {
    uVar1 = puVar3[-1];
    uVar2 = *puVar3;
    iVar5 = iVar5 + -1;
    *puVar4 = puVar3[-2];
    puVar4[1] = uVar1;
    *(undefined4 *)(obj + (-0x10 - (int)param_1) + (int)(puVar3 + 4)) = uVar2;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  } while (iVar5 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x150);
  puVar4 = (undefined4 *)(obj + 0x150);
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x164);
  puVar4 = (undefined4 *)(obj + 0x164);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x18c);
  puVar4 = (undefined4 *)(obj + 0x18c);
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  obj[0x1a0] = param_1[0x1a0];
  *(undefined4 *)(obj + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(obj + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(obj + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  obj[0x1b0] = param_1[0x1b0];
  obj[0x1b1] = param_1[0x1b1];
  return;
}
