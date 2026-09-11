/* spd-match: far pct=5.17 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.4/va_00627C50 */
#include "ghidra_compat.h"

int __fastcall FUN_00627c50(undefined4* self, int dummy_edx, byte *param_2)
{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar4 = 0;
  iVar5 = *(int *)(self + 4) + -1;
  if (-1 < iVar5) {
    do {
      iVar7 = iVar4 + iVar5 >> 1;
      pbVar6 = *(byte **)(*(int *)(self + 0x10) + iVar7 * 4);
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00627c98:
          iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00627c9d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00627c98;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00627c9d:
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          return iVar7;
        }
        iVar5 = iVar7 + -1;
      }
      else {
        iVar4 = iVar7 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  return -1;
}
