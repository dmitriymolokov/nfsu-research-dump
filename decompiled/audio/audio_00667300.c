/* spd-match: far pct=4.36 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

extern int DAT_006ab2b8;
extern int DAT_006eb1a4;
extern void LAB_006673ed(void);
extern void LAB_00667453(void);

int FUN_00667300(byte *param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  if ((param_3 != (byte *)0x0) && (bVar2 = *param_3, 0x20 < bVar2)) {
    pbVar4 = param_1;
    pbVar3 = param_1;
    if (bVar2 == 0x7e) {
      if (*param_1 != 0) {
        do {
          pbVar11 = pbVar3;
          pbVar3 = pbVar11 + 1;
        } while (pbVar11[1] != 0);
        pbVar4 = pbVar3;
        if (((pbVar3 != param_1) && (0x1f < *pbVar11)) &&
           (((uint)*pbVar11 != (int)(char)DAT_006eb1a4 && (pbVar3 < param_1 + param_2 + -1)))) {
          *pbVar3 = DAT_006eb1a4;
          pbVar3 = pbVar11 + 2;
          *pbVar3 = 0;
          pbVar4 = pbVar3;
        }
      }
    }
    else if (*param_1 != 0) {
      do {
        if (0x20 < *pbVar4) {
          pbVar3 = pbVar4;
          if ((&DAT_006ab2b8)[*pbVar4] != '\x01') {
            bVar5 = (&DAT_006ab2b8)[*pbVar4];
            bVar7 = (&DAT_006ab2b8)[(char)bVar2];
            if (bVar5 == bVar7) {
              pbVar11 = param_3;
              do {
                if (bVar5 < 2) break;
                bVar5 = (&DAT_006ab2b8)[pbVar11[(int)(pbVar4 + (1 - (int)param_3))]];
                bVar7 = (&DAT_006ab2b8)[(char)pbVar11[1]];
                pbVar11 = pbVar11 + 1;
              } while (bVar5 == bVar7);
            }
            if ((uint)bVar7 + (uint)bVar5 != 2) {
              do {
                pbVar3 = pbVar4 + 1;
                pbVar4 = pbVar4 + 1;
              } while (0x1f < *pbVar3);
              goto LAB_006673ed;
            }
            bVar2 = *pbVar4;
            while (0x1f < bVar2) {
              pbVar11 = pbVar3 + 1;
              pbVar3 = pbVar3 + 1;
              bVar2 = *pbVar11;
            }
            if (*pbVar3 != 0) {
              pbVar3 = pbVar3 + 1;
            }
          }
          goto LAB_00667453;
        }
        pbVar4 = pbVar4 + 1;
LAB_006673ed:;
      } while (*pbVar4 != 0);
      pbVar3 = pbVar4;
      if ((((pbVar4 != param_1) && (0x1f < pbVar4[-1])) &&
          ((uint)pbVar4[-1] != (int)(char)DAT_006eb1a4)) && (pbVar4 < param_1 + param_2 + -1)) {
        *pbVar4 = DAT_006eb1a4;
        pbVar3 = pbVar4 + 1;
        *pbVar3 = 0;
        pbVar4 = pbVar3;
      }
    }
LAB_00667453:
    iVar8 = 0;
    bVar2 = *param_3;
    while ('\x1f' < (char)bVar2) {
      iVar8 = iVar8 + 1;
      bVar2 = param_3[iVar8];
    }
    uVar9 = iVar8 + 1;
    pbVar10 = pbVar4 + (uVar9 - (int)pbVar3);
    bVar2 = *pbVar3;
    pbVar11 = pbVar3;
    while (bVar2 != 0) {
      pbVar1 = pbVar11 + 1;
      pbVar11 = pbVar11 + 1;
      bVar2 = *pbVar1;
    }
    if (((int)pbVar10 < 1) || ((int)pbVar10 <= (int)(param_1 + (param_2 - (int)pbVar11)))) {
      if (pbVar10 == (byte *)0x0) {
        bVar12 = true;
        uVar6 = uVar9;
        pbVar3 = pbVar4;
        pbVar11 = param_3;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar12 = *pbVar3 == *pbVar11;
          pbVar3 = pbVar3 + 1;
          pbVar11 = pbVar11 + 1;
        } while (bVar12);
        if (bVar12) {
          return 0;
        }
      }
      else {
        if (0 < (int)pbVar10) {
          _memmove(pbVar3 + (int)pbVar10,pbVar3,(size_t)(pbVar11 + (1 - (int)pbVar3)));
        }
        if ((int)pbVar10 < 0) {
          _memmove(pbVar4,pbVar4 + -(int)pbVar10,
                   (size_t)(pbVar11 + (int)(pbVar10 + (1 - (int)pbVar4))));
        }
      }
      pbVar3 = pbVar4;
      for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar3 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        pbVar3 = pbVar3 + 4;
      }
      for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar3 = *param_3;
        param_3 = param_3 + 1;
        pbVar3 = pbVar3 + 1;
      }
      if ((pbVar4[uVar9] == 0) && (DAT_006eb1a4 != 10)) {
        pbVar4[iVar8] = 0;
        return iVar8;
      }
      pbVar4[iVar8] = DAT_006eb1a4;
      return iVar8;
    }
  }
  return -1;
}
