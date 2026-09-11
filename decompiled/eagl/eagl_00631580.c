/* spd-match: far pct=3.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_006314c0();
extern unsigned char *DAT_0070d364;
int unaff_ESI;

void __fastcall FUN_00631580(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  int local_4;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    local_4 = param_1;
    FUN_006314c0(&local_4,param_1 + 0x14,param_1 + 0x28,param_1 + 0x2c);
    *(uint *)(param_1 + 0x18) =
         ((1 << (*(byte *)(iVar1 + 0x10) & 0x1f)) + 1) * (uint)*(byte *)(iVar1 + 6) * 3 + 1 &
         0xfffffffe;
    if (*(byte *)(iVar1 + 6) != 0) {
      uVar2 = (**(code **)(*DAT_0070d364 + 0x14))((uint)*(byte *)(iVar1 + 6) << 4);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = unaff_ESI;
    }
  }
  return;
}
