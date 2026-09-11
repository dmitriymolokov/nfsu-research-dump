/* spd-match: far pct=3.40 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_10/attempt4_recipe_v2 */
#include "ghidra_compat.h"

int __cdecl FUN_00638780(...);
int __cdecl FUN_006387f0(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc858;

struct ThisCallBox {
  float10 FUN_004f4d00(int param_2, ushort *param_3, int param_4);
};
float10 ThisCallBox::FUN_004f4d00(int param_2, ushort *param_3, int param_4) {
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_10;
  float local_c;
  
  puVar1 = param_3;
  if (param_3 == (ushort *)0x0) {
    return (float10)(unsigned int)(DAT_006cc7a4);
  }
  uVar3 = *param_3;
  param_3 = (ushort *)0x0;
  local_c = 0.0;
  local_10 = 0;
  if (uVar3 != 0) {
    do {
      if (((((uint)this) & 0x20) == 0) && ((uVar3 == 10 || (uVar3 == 0x5e)))) break;
      if (uVar3 != 0xd) {
        if (uVar3 == 0x20) {
          local_c = (float)(unsigned int)param_3;
        }
        else {
          if (0xff7f < uVar3) {
            uVar3 = uVar3 & 0xff;
          }
          if (uVar3 == 0x99) {
            uVar3 = 0x2122;
          }
          else if (uVar3 == 0x9c) {
            uVar3 = 0x153;
          }
        }
        iVar5 = *(int *)(param_2 + 0xc);
        uVar9 = (uint)uVar3;
        iVar8 = *(int *)(iVar5 + 0x14) + iVar5;
        iVar4 = (-(uint)((*(uint *)(iVar5 + 0xc) & 0x40000) != 0) & 4) + 0xc;
        if (((int)(uint)*(ushort *)(iVar5 + 10) <= (int)(uVar9 - 0x20)) ||
           (iVar6 = (uVar9 - 0x20) * iVar4, iVar7 = iVar6 + iVar8,
           *(ushort *)(iVar6 + iVar8) != uVar9)) {
          iVar7 = FUN_00638780(uVar9,iVar8,(uint)*(ushort *)(iVar5 + 10),iVar4);
        }
        if (iVar7 != 0) {
          if (local_10 != 0) {
            iVar5 = FUN_006387f0(*(undefined4 *)(param_2 + 0xc),iVar7,puVar1);
            param_3 = (ushort *)(unsigned int)((float)iVar5 + (float)(unsigned int)param_3);
          }
          param_3 = (ushort *)(unsigned int)((float)(int)*(short *)(iVar7 + 0xe) + (float)(unsigned int)param_3);
          if (param_4 != 0) {
            fVar2 = (float)param_4;
            if (param_4 < 0) {
              fVar2 = fVar2 + _DAT_006cc858;
            }
            if (fVar2 < (float)(unsigned int)param_3) {
              if (DAT_006cc7a4 < local_c) {
                param_3 = (ushort *)(unsigned int)local_c;
              }
              break;
            }
          }
        }
      }
      uVar3 = puVar1[1];
      local_10 = local_10 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != 0);
  }
  return (float10)(float)(unsigned int)param_3;
}
