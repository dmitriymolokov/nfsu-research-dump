/* spd-match: far pct=3.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_006ee1e4;
extern int DAT_007316a0;
extern int DAT_00732330;
extern int DAT_00732334;
extern int DAT_00732338;
extern int DAT_0073233c;
extern int DAT_00732340;
extern int DAT_00732348;

void FUN_005a7c30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  int local_8;
  
  iVar7 = 0;
  local_c = 0;
  local_8 = 0;
  if (0 < DAT_006ee1e4) {
    piVar5 = (int *)&DAT_00732348;
    iVar2 = 0;
    do {
      iVar4 = piVar5[-5];
      iVar1 = iVar2 + 1;
      iVar6 = iVar2;
      piVar8 = piVar5;
      for (iVar3 = iVar1; iVar3 < DAT_006ee1e4; iVar3 = iVar3 + 1) {
        if (*piVar8 < iVar4) {
          iVar6 = iVar3;
          iVar4 = *piVar8;
        }
        piVar8 = piVar8 + 5;
        iVar7 = local_c;
      }
      iVar3 = iVar6 * 0x14;
      if (iVar2 != iVar6) {
        iVar7 = *(int *)(((unsigned char *)&DAT_00732330) + iVar3);
        *(int *)(((unsigned char *)&DAT_00732330) + iVar3) = piVar5[-6];
        piVar5[-6] = iVar7;
        iVar7 = *(int *)(((unsigned char *)&DAT_00732334) + iVar3);
        *(int *)(((unsigned char *)&DAT_00732334) + iVar3) = piVar5[-5];
        piVar5[-5] = iVar7;
        iVar7 = *(int *)(((unsigned char *)&DAT_00732338) + iVar3);
        *(int *)(((unsigned char *)&DAT_00732338) + iVar3) = piVar5[-4];
        piVar5[-4] = iVar7;
        iVar7 = *(int *)(((unsigned char *)&DAT_0073233c) + iVar3);
        *(int *)(((unsigned char *)&DAT_0073233c) + iVar3) = piVar5[-3];
        piVar5[-3] = iVar7;
        iVar7 = (&DAT_00732340)[iVar6 * 5];
        (&DAT_00732340)[iVar6 * 5] = piVar5[-2];
        piVar5[-2] = iVar7;
        iVar7 = local_c;
      }
      if (iVar4 != iVar7) {
        iVar3 = iVar7 + 1;
        (&DAT_007316a0)[iVar7] = local_8 + iVar2 >> 1;
        iVar7 = iVar4;
        local_c = iVar4;
        local_8 = iVar2;
        if (iVar3 < iVar4) {
          piVar8 = ((unsigned char *)&DAT_007316a0) + iVar3;
          for (iVar4 = iVar4 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = iVar2;
            piVar8 = piVar8 + 1;
          }
        }
      }
      piVar5 = piVar5 + 5;
      iVar2 = iVar1;
    } while (iVar1 < DAT_006ee1e4);
  }
  iVar1 = DAT_006ee1e4;
  iVar2 = iVar7 + 1;
  (&DAT_007316a0)[iVar7] = ((int)DAT_006ee1e4) + -1 + local_8 >> 1;
  if (iVar2 < 0x100) {
    piVar5 = ((unsigned char *)&DAT_007316a0) + iVar2;
    for (iVar7 = 0x100 - iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar5 = iVar1 + -1;
      piVar5 = piVar5 + 1;
    }
  }
  return;
}
