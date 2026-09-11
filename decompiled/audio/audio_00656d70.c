/* spd-match: far pct=3.11 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2224_field_3_1/batches/20260724T133014Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00656ad0();
int __cdecl FUN_0065b730();
extern int DAT_00716465;
extern int DAT_00716466;
extern int DAT_0071646c;
extern int DAT_00716574;

void FUN_00656d70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_20;
  uint local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  int local_18 [6];
  
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_20 = 1;
  if (DAT_00716466 == '\0') {
    uVar4 = (uint)DAT_00716465;
    if (uVar4 != 0) {
      piVar6 = local_18;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar6 = *param_1;
        param_1 = param_1 + 1;
        piVar6 = piVar6 + 1;
      }
    }
    for (; 0 < param_2; param_2 = param_2 + -0x100) {
      iVar2 = 0x100;
      if (param_2 < 0x101) {
        iVar2 = param_2;
      }
      FUN_00656ad0(local_18,iVar2);
      iVar2 = 0;
      if (DAT_00716465 != 0) {
        do {
          local_18[iVar2] = local_18[iVar2] + (uint)DAT_0071646c;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)DAT_00716465);
      }
    }
  }
  else {
    iVar2 = *param_1;
    if (0 < param_2) {
      do {
        iVar5 = 0x100;
        if (param_2 < 0x101) {
          iVar5 = param_2;
        }
        iVar1 = 0;
        if (DAT_00716465 != 0) {
          iVar3 = DAT_00716574;
          do {
            local_18[iVar1] = iVar3;
            iVar1 = iVar1 + 1;
            iVar3 = iVar3 + iVar5 * 2;
          } while (iVar1 < (int)(uint)DAT_00716465);
        }
        FUN_00656ad0(local_18,iVar5);
        if (DAT_00716465 == 2) {
          local_20 = 1;
          local_1f = local_1f & 0xffffff00;
        }
        else if (DAT_00716465 == 4) {
          local_20 = 3;
          local_1f = CONCAT13((*((unsigned char *)&(local_1f) + 3)),0x10200);
        }
        else if (DAT_00716465 == 6) {
          local_20 = 4;
          local_1f = 0x3050001;
          local_1b = CONCAT11((*((unsigned char *)&(local_1b) + 1)),2);
        }
        FUN_0065b730(iVar5,DAT_00716465,&local_20,local_18[0],iVar2);
        param_2 = param_2 + -0x100;
        iVar2 = iVar2 + (uint)DAT_00716465 * iVar5 * 2;
      } while (0 < param_2);
      return;
    }
  }
  return;
}
