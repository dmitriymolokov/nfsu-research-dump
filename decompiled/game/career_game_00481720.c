/* spd-match: far pct=5.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00481720 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00481720(int obj, undefined4 *param_1, uint param_2)

{

  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(obj + 0x5c) - *(int *)(obj + 0x58);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1000;
  }
  iVar1 = 0x1000 - iVar1;
  if (iVar1 < (int)param_2) {
    do {
      uVar2 = (uint)*(ushort *)(*(int *)(obj + 0x54) + 2 + *(int *)(obj + 0x58));
      iVar1 = iVar1 + uVar2;
      *(uint *)(obj + 0x58) = *(int *)(obj + 0x58) + uVar2;
    } while (iVar1 < (int)param_2);
  }
  puVar3 = (undefined4 *)(*(int *)(obj + 0x54) + *(int *)(obj + 0x5c));
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)(obj + 0x5c) = *(int *)(obj + 0x5c) + param_2;
  return;
}
