/* spd-match: far pct=6.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00421900();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_00564990();
int __cdecl FUN_00566dc0();
int __cdecl FUN_00566e60();
int __cdecl FUN_00567270();
extern int DAT_007349b4;
extern int DAT_007349b8;
extern int DAT_00735ecc;
extern int DAT_007361a4;
extern int DAT_0073d814;
extern int DAT_00777cd0;
extern int DAT_00777d78;
extern int DAT_0078a31c;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a328;
extern int DAT_0078a32c;
extern int DAT_0078a345;
extern void LAB_004ad5d0(void);
extern void LAB_004ad660(void);
extern void LAB_00686858(void);
void *ExceptionList;

void FUN_004ad2d0(void)

{
  int ***pppiVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  undefined4 *puVar7;
  int iVar8;
  int **ppiVar9;
  int **local_28;
  int local_24;
  int ***local_20;
  int ***local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00686858;
  local_14 = ExceptionList;
  local_20 = (int ***)&local_20;
  local_c = 0;
  local_24 = 0;
  ExceptionList = &local_14;
  local_1c = (int ***)&local_20;
  if (0 < ((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320) {
    local_28 = (int **)&DAT_00777cd0;
    iVar8 = DAT_007349b4;
    ExceptionList = &local_14;
    do {
      local_28[0x2a] = (int *)0x0;
      iVar3 = iVar8;
      if (iVar8 == 0) {
        iVar3 = FUN_00566dc0(0xc,"bPNode SlotPool",0);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else if (DAT_0073d814 == 1) {
          FUN_00567270();
        }
        DAT_007349b8 = 0;
        DAT_007349b4 = iVar3;
      }
      iVar8 = iVar3;
      if ((*(int *)(iVar3 + 0x10) == 0) && ((*(byte *)(iVar3 + 0x14) & 1) != 0)) {
        FUN_00566e60();
        iVar8 = DAT_007349b4;
      }
      ppppiVar5 = *(int *****)(iVar3 + 0x10);
      iVar4 = *(int *)(iVar3 + 0x18) + 1;
      if (ppppiVar5 == (int ****)0x0) {
        ppppiVar5 = (int ****)0x0;
      }
      else {
        pppiVar1 = *ppppiVar5;
        if (*(int *)(iVar3 + 0x1c) < iVar4) {
          *(int *)(iVar3 + 0x1c) = iVar4;
        }
        *(int *)(iVar3 + 0x18) = iVar4;
        *(int ****)(iVar3 + 0x10) = pppiVar1;
        if (((*(byte *)(iVar3 + 0x14) & 2) != 0) &&
           (iVar3 = *(int *)(iVar3 + 0x28) >> 2, ppppiVar6 = ppppiVar5, 0 < iVar3)) {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppppiVar6 = (int ***)0x0;
            ppppiVar6 = ppppiVar6 + 1;
          }
        }
        ppppiVar5[2] = (int ***)local_28;
      }
      *local_1c = (int **)ppppiVar5;
      ppppiVar5[1] = local_1c;
      *ppppiVar5 = (int ***)&local_20;
      local_28 = local_28 + 0x57;
      local_24 = local_24 + 1;
      local_1c = (int ***)ppppiVar5;
    } while (local_24 < ((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320);
  }
  DAT_00735ecc = 1;
  while( true ) {
    iVar8 = DAT_0078a31c;
    iVar3 = DAT_0078a31c;
    if (10 < DAT_0078a31c) {
      iVar3 = 0xb;
    }
    if (iVar3 < DAT_00735ecc) break;
    FUN_00564990(&local_20,&LAB_004ad5d0);
    ppppiVar5 = (int ****)local_20;
    ppiVar9 = (int **)0x1;
    ppppiVar6 = (int ****)FUN_0040a880();
    for (; ppppiVar5 != ppppiVar6; ppppiVar5 = (int ****)*ppppiVar5) {
      pppiVar1 = ppppiVar5[2];
      pppiVar1[((int)DAT_00735ecc) + 0x1f] = ppiVar9;
      if (ppiVar9 == (int **)0x1) {
        pppiVar1 = pppiVar1 + 0x2a;
        *pppiVar1 = (int **)((int)*pppiVar1 + 1);
      }
      ppiVar9 = (int **)((int)ppiVar9 + 1);
    }
    DAT_00735ecc = ((int)DAT_00735ecc) + 1;
  }
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    iVar3 = ((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320;
    if (0 < iVar3) {
      puVar7 = &DAT_00777d78;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 0x57;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    DAT_00735ecc = 1;
    while( true ) {
      if (10 < iVar8) {
        iVar8 = 0xb;
      }
      if (iVar8 < DAT_00735ecc) break;
      FUN_00564990(&local_20,&LAB_004ad660);
      ppppiVar5 = (int ****)local_20;
      ppiVar9 = (int **)0x1;
      ppppiVar6 = (int ****)FUN_0040a880();
      iVar8 = DAT_0078a31c;
      for (; DAT_0078a31c = iVar8, ppppiVar5 != ppppiVar6; ppppiVar5 = (int ****)*ppppiVar5) {
        pppiVar1 = ppppiVar5[2];
        cVar2 = FUN_0043a2e0();
        if (cVar2 == '\0') {
          ppiVar9 = pppiVar1[((int)DAT_00735ecc) + 0x47];
        }
        else {
          pppiVar1[((int)DAT_00735ecc) + 0x47] = ppiVar9;
        }
        if (ppiVar9 == (int **)0x1) {
          pppiVar1[0x2a] = (int **)((int)pppiVar1[0x2a] + 1);
        }
        ppiVar9 = (int **)((int)ppiVar9 + 1);
        iVar8 = DAT_0078a31c;
      }
      DAT_00735ecc = ((int)DAT_00735ecc) + 1;
    }
  }
  local_c = 0xffffffff;
  FUN_00421900();
  ExceptionList = local_14;
  return;
}
