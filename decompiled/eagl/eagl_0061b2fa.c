/* spd-match: far pct=6.79 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061a3fb();
int __cdecl FUN_0061aea7();

int __fastcall FUN_0061b2fa(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_c;
  int *local_8;
  
  uVar1 = *(uint *)param_1[0x26] & 0xffffff;
  local_c = param_1;
  local_8 = param_1;
  if (uVar1 == 1) {
    uVar3 = 5;
  }
  else if (uVar1 == 3) {
    uVar3 = 8;
  }
  else {
    if (uVar1 != 4) {
      iVar2 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],&local_c,2,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_0061a3fb(5,&local_c,2,*(int *)(param_1[0x26] + 8),*(int *)(param_1[0x26] + 8) + 8,
                           0,2,0,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_0061a3fb(2,*(undefined4 *)(param_1[0x26] + 0x10),
                           *(undefined4 *)(param_1[0x26] + 0xc),&local_c,&local_8,0,1,0,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      return 0;
    }
    uVar3 = 9;
  }
  iVar2 = FUN_0061aea7(uVar3);
  return iVar2;
}
