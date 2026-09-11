/* spd-match: far pct=6.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00652030();
extern int DAT_00713dac;
extern int DAT_00713eec;
extern int DAT_00713f48;
extern int DAT_0071401c;
extern int DAT_0071401e;
extern int DAT_00714028;
extern void LAB_00652320(void);
extern void LAB_006523f6(void);

int FUN_00652270(uint param_1,uint param_2,uint *param_3,int param_4,int param_5)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint local_c;
  undefined2 *local_8;
  uint local_4;
  
  local_c = 0;
  if (0 < (int)param_1) {
    puVar13 = (undefined4 *) & ((int)DAT_0071401c);
    for (uVar6 = param_1 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (uVar6 = (uint)((param_1 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined2 *)puVar13 = 0xffff;
      puVar13 = (undefined4 *)((int)puVar13 + 2);
    }
  }
  DAT_00714028 = ((int)DAT_00714028) + 0x100;
  if ((int)DAT_00714028 < 0) {
    DAT_00714028 = 0;
  }
  if (0 < (int)param_1) {
    local_8 = &DAT_0071401c;
    local_4 = param_1;
    do {
      iVar14 = -1;
      uVar6 = 0xffffffff;
      if (param_4 < param_5) {
        iVar8 = param_4 * 0x8c + DAT_00713f48;
        iVar7 = param_4;
        do {
          if (*(char *)(iVar8 + 0x69) == '\0') {
            iVar4 = 0;
            if (0x71401c < (int)local_8) {
              do {
                if ((&DAT_0071401c)[iVar4] == iVar7) goto LAB_00652320;
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)local_c);
            }
            if (*(uint *)(iVar8 + 0x2c) < uVar6) {
              uVar6 = *(uint *)(iVar8 + 0x2c);
              iVar14 = iVar7;
            }
          }
LAB_00652320:
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x8c;
        } while (iVar7 < param_5);
        if (-1 < iVar14) {
          local_c = local_c + 1;
          *local_8 = (short)iVar14;
          local_8 = local_8 + 1;
        }
      }
      local_4 = local_4 - 1;
    } while (local_4 != 0);
  }
  if ((int)local_c < (int)param_1) {
    local_8 = &((int)DAT_0071401c) + local_c;
    local_4 = local_c;
    do {
      uVar6 = param_2;
      if (DAT_00713dac == '\0') {
        uVar6 = param_2 - 1;
      }
      iVar14 = -1;
      uVar10 = 0xffffffff;
      if (param_4 < param_5) {
        pbVar9 = (byte *)(param_4 * 0x8c + 0x2a + DAT_00713f48);
        iVar7 = param_4;
        do {
          iVar8 = 0;
          if (0x71401c < (int)local_8) {
            do {
              if ((&DAT_0071401c)[iVar8] == iVar7) goto LAB_006523f6;
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)local_c);
          }
          if (*pbVar9 < 0x65) {
            uVar5 = (uint)*pbVar9;
            if ((int)uVar5 < (int)uVar6) {
              uVar11 = *(uint *)(pbVar9 + 2);
              uVar6 = uVar5;
            }
            else if ((uVar5 != uVar6) || (uVar11 = *(uint *)(pbVar9 + 2), uVar10 <= uVar11))
            goto LAB_006523f6;
            uVar10 = uVar11;
            iVar14 = iVar7;
          }
LAB_006523f6:
          iVar7 = iVar7 + 1;
          pbVar9 = pbVar9 + 0x8c;
        } while (iVar7 < param_5);
        if (-1 < iVar14) {
          *local_8 = (short)iVar14;
          local_8 = local_8 + 1;
          local_c = local_c + 1;
          if ((int)param_1 <= (int)local_c) break;
        }
      }
      local_4 = local_4 + 1;
    } while ((int)local_4 < (int)param_1);
  }
  if (local_c != param_1) {
    return -9;
  }
  do {
    iVar14 = 0;
    bVar3 = true;
    if ((int)(param_1 - 1) < 1) break;
    do {
      sVar2 = (&DAT_0071401c)[iVar14];
      if ((short)(&DAT_0071401e)[iVar14] < sVar2) {
        (&DAT_0071401c)[iVar14] = (&DAT_0071401e)[iVar14];
        (&DAT_0071401e)[iVar14] = sVar2;
        bVar3 = false;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)(param_1 - 1));
  } while (!bVar3);
  *param_3 = (int)DAT_0071401c | ((int)DAT_00714028);
  iVar14 = (int)DAT_0071401c;
  if (0 < (int)local_c) {
    iVar7 = 0;
    do {
      iVar4 = (&DAT_0071401c)[iVar7] * 0x8c;
      iVar8 = *(int *)(iVar4 + DAT_00713f48);
      iVar12 = iVar4 + DAT_00713f48;
      if (*(char *)(iVar4 + 0x69 + DAT_00713f48) != '\0') {
        if (iVar8 < 0) {
          iVar8 = *(int *)(*(short *)(iVar12 + 0x28) * 0x8c + DAT_00713f48);
        }
        FUN_00652030(iVar8);
      }
      *(undefined1 *)(iVar12 + 0x69) = 1;
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar12 + 0x2c) = DAT_00713eec;
      *(undefined1 *)(iVar12 + 0x2a) = (undefined1)param_2;
    } while (iVar7 < (int)local_c);
  }
  *(uint *)(((int)DAT_0071401c) * 0x8c + DAT_00713f48) = *param_3;
  *(short *)(((int)DAT_0071401c) * 0x8c + 4 + DAT_00713f48) = DAT_0071401c;
  *(undefined2 *)(((int)DAT_0071401c) * 0x8c + 0x28 + DAT_00713f48) = 0xffff;
  iVar7 = 1;
  if (1 < (int)local_c) {
    do {
      *(short *)(((int)DAT_00713f48) + 4 + (((int)DAT_0071401c) * 0x46 + iVar7) * 2) = (&DAT_0071401c)[iVar7];
      *(undefined4 *)((&DAT_0071401c)[iVar7] * 0x8c + DAT_00713f48) = 0xffffffff;
      psVar1 = &((int)DAT_0071401c) + iVar7;
      iVar7 = iVar7 + 1;
      *(short *)(*psVar1 * 0x8c + 0x28 + DAT_00713f48) = DAT_0071401c;
    } while (iVar7 < (int)local_c);
  }
  return iVar14;
}
