/* spd-match: far pct=3.53 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_007160d8;
extern int DAT_007160dc;
extern int DAT_007160de;
extern int DAT_007160e0;
extern int DAT_007163dc;
extern void LAB_0065575d(void);
extern void LAB_006557d0(void);
extern void LAB_006557f5(void);

int FUN_006556d0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = DAT_007160d8;
  iVar5 = (&DAT_007163dc)[param_1];
  bVar3 = true;
  bVar4 = true;
  if (*(char *)(iVar5 + 0x62) != '\0') {
    uVar8 = (uint)*(byte *)(iVar5 + 0x62);
    puVar6 = (uint *)(iVar5 + 0x10);
    do {
      if (*puVar6 <= *(uint *)(iVar5 + 8)) {
        bVar3 = false;
      }
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (!bVar3) goto LAB_0065575d;
  }
  sVar2 = *(short *)(iVar5 + 0x44);
  if (*(int *)(iVar5 + 0x54) != 0) {
    (&DAT_007160dc)[((int)DAT_007160d8) * 4] = 1;
    (&DAT_007160de)[iVar1 * 4] = (short)param_1;
    (&DAT_007160e0)[iVar1 * 2] = *(undefined4 *)(sVar2 * 0x20 + iVar5 + 0x84);
    DAT_007160d8 = ((int)DAT_007160d8) + 1;
  }
  *(short *)(iVar5 + 0x44) = *(short *)(iVar5 + 0x44) + 1;
  *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  if (*(short *)(iVar5 + 0x40) <= *(short *)(iVar5 + 0x44)) {
    *(undefined2 *)(iVar5 + 0x44) = 0;
  }
LAB_0065575d:
  if (*(short *)(iVar5 + 0x34 + param_2 * 2) == 0) {
    return 0;
  }
  iVar1 = *(short *)(iVar5 + 0x28 + param_2 * 2) * 0x20 + 0x7c + iVar5;
  *param_3 = (*(int *)(iVar1 + 4) << 1) >> 1;
  *param_4 = *(int *)(iVar1 + 4) >> 0x1f;
  puVar6 = (uint *)(iVar5 + 0x10);
  *(short *)(iVar5 + 0x28 + param_2 * 2) = *(short *)(iVar5 + 0x28 + param_2 * 2) + 1;
  *(int *)(iVar5 + 0x10 + param_2 * 4) = *(int *)(iVar5 + 0x10 + param_2 * 4) + 1;
  iVar7 = 0;
  while( true ) {
    if (*puVar6 <= *(uint *)(iVar5 + 0xc)) {
      bVar4 = false;
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
    if (!bVar4) break;
    if ((int)(uint)*(byte *)(iVar5 + 0x62) <= iVar7) {
LAB_006557d0:
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
      *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) - ((*(int *)(iVar1 + 4) << 1) >> 1);
      *(int *)(iVar5 + 0x4c) = ((*(int *)(iVar1 + 4) << 1) >> 1) + *(int *)(iVar5 + 0x4c);
LAB_006557f5:
      if (*(short *)(iVar5 + 0x40) <= *(short *)(iVar5 + 0x28 + param_2 * 2)) {
        *(undefined2 *)(iVar5 + 0x28 + param_2 * 2) = 0;
      }
      *(short *)(iVar5 + 0x34 + param_2 * 2) = *(short *)(iVar5 + 0x34 + param_2 * 2) + -1;
      iVar5 = *(int *)(iVar1 + 8 + param_2 * 4);
      if (iVar5 == 0) {
        iVar5 = -1;
      }
      return iVar5;
    }
  }
  if (!bVar4) goto LAB_006557f5;
  goto LAB_006557d0;
}
