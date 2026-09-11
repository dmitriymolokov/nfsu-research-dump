/* spd-match: far pct=8.77 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_006f5570;
extern int DAT_006f661c;
extern int DAT_006f6fe0;
extern int DAT_006f6fe4;
extern int DAT_00735608;

undefined4 __fastcall FUN_00538c50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *(int *)(param_1 + 0x268);
  iVar1 = *(int *)(param_1 + 0x270);
  iVar3 = 0;
  do {
    if (((*(int *)(iVar6 + iVar1 * iVar3 * 4) == (int)*(char *)(param_1 + 0x1d5)) &&
        (uVar2 = *(uint *)(param_1 + 0x1e4), 0 < (int)uVar2)) && ((int)uVar2 < iVar1)) {
      iVar6 = 0;
      *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
      uVar4 = (int)*(char *)(param_1 + 0x1d5) << 8 | uVar2;
      puVar5 = &DAT_006f661c;
      do {
        if (puVar5[-5] == uVar4) {
          *(int *)(param_1 + 0x204) = iVar6;
        }
        if (*puVar5 == uVar4) {
          *(int *)(param_1 + 0x204) = iVar6 + 1;
        }
        if (puVar5[5] == uVar4) {
          *(int *)(param_1 + 0x204) = iVar6 + 2;
        }
        puVar5 = puVar5 + 0xf;
        iVar6 = iVar6 + 3;
      } while ((int)puVar5 < 0x6f6928);
      iVar6 = *(int *)(param_1 + 0x268);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(iVar6 + (uVar2 + iVar1 * iVar3) * 4);
      *(undefined4 *)(param_1 + 600) = *(undefined4 *)(((unsigned char *)&DAT_006f6fe0) + ((int)DAT_00735608) * 8);
      *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(((unsigned char *)&DAT_006f6fe4) + ((int)DAT_00735608) * 8);
      DAT_00735608 = ((int)DAT_00735608) + 1 & 3;
      iVar3 = 0xe;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xe);
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  do {
    if ((&DAT_006f5570)[iVar6 * 10] == (int)*(char *)(param_1 + 0x1d5)) {
      *(undefined4 *)(param_1 + 0x20c) = (&DAT_006f5570)[*(int *)(param_1 + 0x1e4) + iVar6 * 10];
      iVar6 = 6;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x26c)) {
    piVar7 = *(int **)(param_1 + 0x264);
    do {
      if (((*piVar7 == (int)*(char *)(param_1 + 0x1d5)) && (0 < *(int *)(param_1 + 0x1e4))) &&
         (*(int *)(param_1 + 0x1e4) < iVar1)) {
        *(int *)(param_1 + 0x1dc) = iVar6;
        *(int *)(param_1 + 500) =
             (*(int **)(param_1 + 0x264))[iVar1 * iVar6 + *(int *)(param_1 + 0x1e4)];
        return 0;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + iVar1;
    } while (iVar6 < *(int *)(param_1 + 0x26c));
  }
  return 0xffffffff;
}
