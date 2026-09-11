/* spd-match: far pct=36.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061a3fb();
int __cdecl FUN_0061af1a();

int __fastcall FUN_0061b248(int *param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x6c))
                    (param_1[0x25],local_14,*(undefined4 *)(param_1[0x26] + 0xc),0,0);
  if (-1 < iVar1) {
    iVar1 = param_1[0x26];
    iVar1 = FUN_0061af1a(7,local_14,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                         *(undefined4 *)(iVar1 + 4),0,0);
    if (-1 < iVar1) {
      iVar1 = param_1[0x26];
      iVar1 = FUN_0061a3fb(5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),local_14,
                           *(undefined4 *)(iVar1 + 8),0,*(undefined4 *)(iVar1 + 0xc),0,0,0);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
