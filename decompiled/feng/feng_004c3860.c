/* spd-match: far pct=10.87 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_09/attempt1_baseline */
#include "ghidra_compat.h"

int __cdecl FUN_004c3730();
int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6360();
int __cdecl FUN_004f7d30();
int __cdecl FUN_00504390();
extern int DAT_0073578c;
extern int DAT_00735e6c;
extern int DAT_00746104;

int  FUN_004c3860(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0xc407210) {
    param_2 = 0;
    if (param_3 != 0) {
      if (*(int *)(param_3 + 0x10) == -0x47583934) {
        FUN_004c3730(param_1);
        _free(DAT_00735e6c);
        DAT_00735e6c = (void *)0x0;
        FUN_00504390();
        FUN_00504390();
        FUN_00504390();
        iVar1 = FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return iVar1;
      }
      FUN_00504390();
      FUN_00504390();
      param_2 = FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
    }
  }
  else if (param_2 == -0x6ee54c9c) {
    FUN_00504390();
    iVar1 = DAT_0073578c;
    param_2 = *(int *)(param_1 + 0xc);
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      param_2 = 0;
      if ((iVar2 != 0) && (param_2 = 0, *(int *)(iVar2 + 0x18) != 0)) {
        iVar1 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
        return iVar1;
      }
    }
  }
  else if (param_2 == -0x367ca946) {
    iVar1 = FUN_004f7d30();
    return iVar1;
  }
  return param_2;
}
