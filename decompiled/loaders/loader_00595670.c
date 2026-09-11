/* spd-match: far pct=3.70 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_0040cb70();
int __cdecl FUN_00595750();
int __cdecl FUN_005977f0();
extern int DAT_006f08a4;
extern int DAT_00734468;
extern int DAT_00736050;
extern int DAT_00736200;
extern int DAT_00779c70;

void FUN_00595670(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int aiStack_80 [32];
  
  if (DAT_00736200 != 0) {
    iVar4 = 0;
    if (DAT_00779c70 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)DAT_00779c70) + -4;
    }
    iVar2 = FUN_0040cb70();
    while (iVar1 = iVar5, iVar1 != iVar2) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar1 + 4) + -4;
      }
      if (*(char *)(iVar1 + 0x15) == '\x01') {
        if (*(short *)(iVar1 + 0x18) < 0) {
          FUN_005977f0();
        }
        else {
          aiStack_80[iVar4] = (int)*(short *)(iVar1 + 0x18);
          iVar4 = iVar4 + 1;
        }
      }
    }
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        if (*(int *)(((int)DAT_00736050) + aiStack_80[iVar5] * 4) != 0) {
          FUN_005977f0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  if (*(int *)(((int)DAT_00734468) + 0x2c) - *(int *)(((int)DAT_00734468) + 0x18) < 4) {
    FUN_00595750(1);
    return;
  }
  uVar3 = ((int)DAT_006f08a4) + 0x4dU & 0x8000007f;
  bVar6 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar6 = (uVar3 - 1 | 0xffffff80) == 0xffffffff;
  }
  if (bVar6) {
    FUN_00595750(0);
  }
  return;
}
