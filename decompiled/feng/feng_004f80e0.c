/* spd-match: far pct=6.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004cd180();
extern unsigned char *DAT_006f8a48;

void __fastcall FUN_004f80e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((&DAT_006f8a48)[iVar1 * 2] != iVar1) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_006f8a48 + uVar2) == iVar1) break;
      uVar2 = uVar2 + 8;
    } while (uVar2 < 0x70);
  }
  FUN_004cd180(0);
  return;
}
