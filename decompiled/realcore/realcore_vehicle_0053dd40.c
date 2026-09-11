/* spd-match: far pct=11.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00539ac0();
int __cdecl FUN_00539b70();
int __cdecl FUN_0053d940();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064b7d0();
int __cdecl FUN_0064bbd0();
extern void LAB_00684d8b(void);
extern char stack0xffffffe8;
int unaff_EBX;
int unaff_ESI;
void *ExceptionList;

void __fastcall FUN_0053dd40(int **param_1)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  int *piVar5;
  undefined4 *unaff_EBX;
  void *unaff_ESI;
  int **ppiStack_28;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  pvStack_c = ExceptionList;
  piVar5 = param_1[8];
  piVar2 = param_1[(int)piVar5 + 0xb];
  ppiVar3 = (int **)param_1[(int)piVar5 * 0xb8 + 0x10];
  ppiVar1 = param_1 + (int)piVar5 * 0xb8 + 0x10;
  ExceptionList = &pvStack_c;
  if (ppiVar3 != (int **)0x0) {
    ExceptionList = &pvStack_c;
    if (*ppiVar3 != (int *)0x0) {
      ppiStack_28 = (int **)0x53dd88;
      ExceptionList = &pvStack_c;
      FUN_0064bbd0();
    }
    ppiStack_28 = &local_10;
    FUN_0064b510();
    ppiStack_28 = (int **)0x53dd9a;
    FUN_0064b580();
    ppiStack_28 = ppiVar3;
    (**(code **)(*local_10 + 4))();
    ppiStack_28 = (int **)0x53dda9;
    FUN_0064b5a0();
    *ppiVar1 = (int *)0x0;
  }
  ppiStack_28 = (int **)0x0;
  (*(code *)ppiVar1[4][10])(0);
  FUN_00539ac0();
  (*(code *)(*param_1)[0x32])();
  FUN_00539b70();
  if (piVar2[2] != 0) {
    FUN_0064b510(&stack0xffffffe8);
    FUN_0064b580();
    iVar4 = (**(code **)*unaff_EBX)(0x18,4,0xffffffff);
    FUN_0064b5a0();
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0053d940(piVar2[0xc]);
      param_1 = ppiStack_28;
    }
    *ppiVar1 = piVar5;
    piVar2[0x1e] = 0;
    ppiStack_28 = (int **)0x0;
    if (**ppiVar1 != 0) {
      FUN_0064b7d0(&ppiStack_28);
    }
    param_1[5] = (int *)ppiStack_28;
    ExceptionList = unaff_ESI;
    return;
  }
  piVar2[0x1e] = 0;
  ExceptionList = param_1;
  return;
}
