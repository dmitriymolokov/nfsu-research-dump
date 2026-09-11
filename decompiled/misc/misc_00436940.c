/* spd-match: far pct=2.02 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2440_int_float/batches/20260724T133747Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00436070();
int __cdecl FUN_00436600();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_004a85e0();
int __cdecl FUN_00674898();
extern int DAT_0073618c;
extern int DAT_00736190;
extern int DAT_00736194;
extern void LAB_00686b38(void);
void *ExceptionList;

void FUN_00436940(int param_1,int param_2,undefined4 param_3)

{
  int ******ppppppiVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int ******ppppppiVar9;
  int *****local_14;
  int *****local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00686b38;
  local_c = ExceptionList;
  iVar7 = 0;
  if (DAT_00736194 != 0) {
    DAT_00736194 = 0;
  }
  local_14 = (int *****)&local_14;
  local_10 = (int *****)&local_14;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  do {
    ppppppiVar1 = *(int *******)(param_1 + iVar7 * 4);
    pppppiVar2 = ppppppiVar1[4];
    if (((pppppiVar2 == (int *****)0x0) || ((2 < (int)pppppiVar2 && ((int)pppppiVar2 < 5)))) &&
       (*(char *)(ppppppiVar1 + 0xd) == '\0')) {
      *local_10 = (int ****)ppppppiVar1;
      ppppppiVar1[1] = local_10;
      *ppppppiVar1 = (int *****)&local_14;
      local_10 = (int *****)ppppppiVar1;
    }
    if (((ppppppiVar1[3] == (int *****)0x0) && (cVar4 = FUN_0043a2e0(), cVar4 != '\0')) &&
       ((ppppppiVar1[4] == (int *****)0x3 || (ppppppiVar1[4] == (int *****)0x4)))) {
      iVar6 = (DAT_0073618c << 7) % DAT_00736190;
      iVar5 = iVar6;
      if (iVar6 < 0) {
        iVar5 = -iVar6;
      }
      if (*(float *)(iVar5 * 0x44 + 0x28 + DAT_0073618c) < (float)(unsigned int)(ppppppiVar1[10])) {
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        piVar8 = (int *)(iVar6 * 0x44 + DAT_0073618c);
        ppppppiVar9 = ppppppiVar1;
        for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppppppiVar9 = (int *****)*piVar8;
          piVar8 = piVar8 + 1;
          ppppppiVar9 = ppppppiVar9 + 1;
        }
      }
    }
    if (*(char *)((int)ppppppiVar1 + 0x15) != '\0') {
      iVar5 = FUN_00674898();
      *(float *)(param_1 + 0x7c) = (float)iVar5 + *(float *)(param_1 + 0x7c);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x1f);
  if ((int ******)local_14 != &local_14) {
    if ((*(uint *)(*(int *)(param_2 + 0x95c) + 8) & 0x20000) != 0) {
      FUN_004a85e0(*(undefined4 *)(*(int *)(param_2 + 0x95c) + 0x50));
    }
    while ((int ******)local_14 != &local_14) {
      pppppiVar2 = (int *****)*local_14;
      pppppiVar3 = (int *****)local_14[1];
      *pppppiVar3 = (int ****)pppppiVar2;
      pppppiVar2[1] = (int ****)pppppiVar3;
    }
  }
  iVar7 = 0;
  do {
    iVar5 = *(int *)(*(int *)(param_1 + iVar7 * 4) + 0x10);
    if ((iVar5 == 3) || (iVar5 == 4)) {
      FUN_00436600();
    }
    FUN_00436070(param_3);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x1f);
  if ((int ******)local_14 != &local_14) {
    do {
      pppppiVar2 = (int *****)*local_14;
      pppppiVar3 = (int *****)local_14[1];
      *pppppiVar3 = (int ****)pppppiVar2;
      pppppiVar2[1] = (int ****)pppppiVar3;
      _free(local_14);
    } while ((int ******)local_14 != &local_14);
  }
  ExceptionList = local_c;
  return;
}
