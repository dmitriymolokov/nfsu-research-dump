/* spd-match: far pct=3.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0062fe70();
int __cdecl FUN_00630760();
extern unsigned char *DAT_0070d364;

void __fastcall FUN_00630820(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  local_4 = param_1;
  FUN_00630760(&local_4,param_1 + 0x14,param_1 + 0x34,param_1 + 0x38);
  *(uint *)(param_1 + 0x18) =
       ((1 << (*(byte *)(iVar1 + 0x10) & 0x1f)) + 1) * (uint)*(byte *)(iVar1 + 6) * 3 + 1 &
       0xfffffffe;
  if (*(byte *)(iVar1 + 6) != 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 6);
    iVar3 = (**(code **)(*DAT_0070d364 + 0x14))(uVar2 * 0x40);
    *(int *)(param_1 + 0x10) = iVar3;
    iVar3 = iVar3 + uVar2 * 0x20;
    iVar4 = uVar2 * 0x10 + iVar3;
    *(int *)(param_1 + 0x2c) = iVar4;
    *(int *)(param_1 + 0x30) = iVar4;
    *(int *)(param_1 + 0x20) = iVar3;
    *(int *)(param_1 + 0x24) = iVar3;
    iVar3 = 0;
    if (*(char *)(iVar1 + 6) != '\0') {
      iVar4 = 0;
      do {
        FUN_0062fe70(*(int *)(param_1 + 0x10) + iVar4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 6));
    }
  }
  return;
}
