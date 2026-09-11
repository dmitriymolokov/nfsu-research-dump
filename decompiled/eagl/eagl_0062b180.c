/* spd-match: far pct=17.95 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_0070d364;

void __fastcall FUN_0062b180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (**(code **)(*DAT_0070d364 + 0x14))((uint)*(ushort *)(iVar1 + 8) << 2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar3 = *(ushort *)(iVar1 + 8) - 1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(iVar1 + 0xc + iVar3 * 4);
    do {
      uVar2 = (**(code **)(*DAT_0070d364 + 0x24))(*puVar4);
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar3);
  }
  return;
}
