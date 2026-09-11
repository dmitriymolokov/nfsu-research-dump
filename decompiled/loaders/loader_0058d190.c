/* spd-match: far pct=2.30 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058D190 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0058d190(byte * obj, undefined4 param_1, int *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;

  int iVar4;
  byte *pbVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  if ((*param_2 == 0x5a4c444a) && ((char)param_2[1] == '\x02')) {
    pbVar8 = obj + param_2[2];
    pbVar5 = (byte *)((int)param_2 + 0x12);
    uVar3 = *(byte *)(param_2 + 4) | 0x100;
    uVar6 = *(byte *)((int)param_2 + 0x11) | 0x100;
    iVar7 = param_2[3] + -0x12;
    while (iVar7 != 0) {
      if ((uVar3 & 1) == 0) {
        if (obj < pbVar8) {
          *obj = *pbVar5;
          obj = obj + 1;
          pbVar5 = pbVar5 + 1;
        }
        iVar9 = -1;
      }
      else {
        bVar1 = pbVar5[1];
        if ((uVar6 & 1) == 0) {
          bVar2 = *pbVar5;
          iVar4 = (bVar2 & 0x1f) + 3;
          iVar9 = 0;
          do {
            obj[iVar9] = obj[iVar9 - (((bVar2 & 0xffffffe0) << 3 | (uint)bVar1) + 0x11)];
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar4);
        }
        else {
          bVar2 = *pbVar5;
          iVar4 = ((bVar2 & 0xfffffff0) << 4 | (uint)bVar1) + 3;
          iVar9 = 0;
          do {
            obj[iVar9] = obj[iVar9 - ((bVar2 & 0xf) + 1)];
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar4);
        }
        uVar6 = (short)uVar6 >> 1;
        pbVar5 = pbVar5 + 2;
        iVar9 = -2;
        obj = obj + iVar4;
      }
      iVar7 = iVar7 + iVar9;
      uVar3 = (short)uVar3 >> 1;
      if (uVar3 == 1) {
        uVar3 = *pbVar5 | 0x100;
        pbVar5 = pbVar5 + 1;
        iVar7 = iVar7 + -1;
      }
      if (uVar6 == 1) {
        uVar6 = *pbVar5 | 0x100;
        pbVar5 = pbVar5 + 1;
        iVar7 = iVar7 + -1;
      }
    }
    return param_2[2];
  }
  return 0;
}
