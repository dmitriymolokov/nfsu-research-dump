/* spd-match: far pct=4.94 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

extern int DAT_0073618c;
extern int DAT_00736190;

struct ThisCallBox {
  void FUN_004364d0(undefined4 param_2);
};
void ThisCallBox::FUN_004364d0(undefined4 param_2) {
  undefined4 * param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(char *)(param_1 + 0xd) = (char)param_2;
  param_1[4] = 3;
  param_1[10] = (float)param_1[8] + (float)param_1[10];
  if ((param_1[3] == 0) && (DAT_0073618c != 0)) {
    iVar1 = (DAT_0073618c << 7) % DAT_00736190;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (param_1 != (undefined4 *)(iVar1 * 0x44 + DAT_0073618c)) {
      FUN_004364d0(param_2);
      iVar2 = (DAT_0073618c << 7) % DAT_00736190;
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = -iVar2;
      }
      if (*(float *)(iVar1 * 0x44 + 0x28 + DAT_0073618c) < (float)param_1[10]) {
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        puVar3 = (undefined4 *)(iVar2 * 0x44 + DAT_0073618c);
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_1 = *puVar3;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + 1;
        }
      }
    }
  }
  return;
}
