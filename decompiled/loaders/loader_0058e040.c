/* spd-match: far pct=4.46 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
extern int DAT_007344d4;
extern int DAT_007344dc;
extern int DAT_007349c8;
extern int DAT_00737b28;
extern int DAT_00737b30;
extern unsigned char *DAT_00737b34;
extern int _DAT_007301d0;
extern unsigned char *PTR_DAT_006f03f8;
extern void LAB_006850d0(void);
void *ExceptionList;

void FUN_0058e040(void)

{
  int ***pppiVar1;
  undefined4 *puVar2;
  int ***pppiVar3;
  undefined4 uVar4;
  int ****ppppiVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  int ****ppppiVar11;
  int iStack_50;
  int ***local_38;
  int ***local_34;
  int ***local_30;
  int ***local_2c;
  LARGE_INTEGER local_28;
  LARGE_INTEGER LStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  ppppiVar9 = DAT_00737b30;
  puStack_10 = &LAB_006850d0;
  pvStack_14 = ExceptionList;
  ppppiVar11 = &local_30;
  local_2c = (int ***)&local_30;
  ppppiVar10 = &local_38;
  local_34 = (int ***)&local_38;
  PTR_DAT_006f03f8 = (undefined *)&local_30;
  local_c = 1;
  ExceptionList = &pvStack_14;
  local_38 = (int ***)ppppiVar10;
  local_30 = (int ***)ppppiVar11;
  ppppiVar5 = (int ****)FUN_0040a880();
  iVar8 = DAT_007344d4;
  if (ppppiVar9 != ppppiVar5) {
    puVar6 = (undefined4 *)FUN_0040a880();
    iVar8 = DAT_007344d4;
    do {
      ppppiVar11 = (int ****)*ppppiVar9;
      pppiVar1 = ppppiVar9[3];
      DAT_007344dc = ppppiVar9;
      ppppiVar10 = (int ****)local_34;
      for (puVar2 = DAT_00737b28; local_34 = (int ***)ppppiVar10, puVar2 != puVar6;
          puVar2 = (undefined4 *)*puVar2) {
        if ((puVar2[3] & (uint)pppiVar1) != 0) {
          QueryPerformanceCounter(&local_28);
          iVar7 = __allshr();
          (*(code *)puVar2[2])(ppppiVar9);
          QueryPerformanceCounter(&LStack_20);
          uVar4 = DAT_007349c8;
          iStack_50 = __allshr();
          iVar8 = DAT_007344d4;
          iStack_50 = iStack_50 - iVar7;
          if (iStack_50 < 0) {
            iStack_50 = 0;
          }
          puVar2[5] = (float)(1 << ((byte)uVar4 & 0x1f)) * (float)iStack_50 * ((int)_DAT_007301d0) +
                      (float)puVar2[5];
        }
        ppppiVar10 = (int ****)local_34;
      }
      pppiVar1 = *ppppiVar9;
      pppiVar3 = ppppiVar9[1];
      *pppiVar3 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar3;
      DAT_007344dc = (int ****)0x0;
      if (ppppiVar9[2] == (int ***)0x0) {
        iVar7 = *(int *)(iVar8 + 0x18);
        *ppppiVar9 = *(int ****)(iVar8 + 0x10);
        *(int *)(iVar8 + 0x18) = iVar7 + -1;
        *(int *****)(iVar8 + 0x10) = ppppiVar9;
      }
      else {
        *ppppiVar10 = (int ***)ppppiVar9;
        local_34 = (int ***)ppppiVar9;
        ppppiVar9[1] = (int ***)ppppiVar10;
        *ppppiVar9 = (int ***)&local_38;
      }
      ppppiVar9 = ppppiVar11;
    } while (ppppiVar11 != ppppiVar5);
    while ((int ****)local_38 != &local_38) {
      pppiVar1 = (int ***)*local_38;
      pppiVar3 = (int ***)local_38[1];
      *pppiVar3 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar3;
      *DAT_00737b34 = local_38;
      *local_38 = (int **) & ((int)DAT_00737b30);
      local_38[1] = (int **)DAT_00737b34;
      DAT_00737b34 = (int ****)local_38;
    }
    while (ppppiVar10 = (int ****)local_38, ppppiVar11 = (int ****)local_30,
          (int ****)local_30 != &local_30) {
      pppiVar1 = (int ***)*local_30;
      pppiVar3 = (int ***)local_30[1];
      *pppiVar3 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar3;
      *DAT_00737b34 = local_30;
      *local_30 = (int **) & ((int)DAT_00737b30);
      local_30[1] = (int **)DAT_00737b34;
      DAT_00737b34 = (int ****)local_30;
    }
  }
  PTR_DAT_006f03f8 = (undefined *) & ((int)DAT_00737b30);
  if (ppppiVar10 != &local_38) {
    do {
      pppiVar1 = *ppppiVar10;
      pppiVar3 = ppppiVar10[1];
      *pppiVar3 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar3;
      iVar7 = *(int *)(iVar8 + 0x18);
      *ppppiVar10 = *(int ****)(iVar8 + 0x10);
      *(int *****)(iVar8 + 0x10) = ppppiVar10;
      *(int *)(iVar8 + 0x18) = iVar7 + -1;
      ppppiVar10 = (int ****)local_38;
      ppppiVar11 = (int ****)local_30;
    } while ((int ****)local_38 != &local_38);
  }
  if (ppppiVar11 != &local_30) {
    do {
      pppiVar1 = *ppppiVar11;
      pppiVar3 = ppppiVar11[1];
      *pppiVar3 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar3;
      iVar7 = *(int *)(iVar8 + 0x18);
      *ppppiVar11 = *(int ****)(iVar8 + 0x10);
      *(int *****)(iVar8 + 0x10) = ppppiVar11;
      *(int *)(iVar8 + 0x18) = iVar7 + -1;
      ppppiVar11 = (int ****)local_30;
    } while ((int ****)local_30 != &local_30);
  }
  ExceptionList = pvStack_14;
  return;
}
