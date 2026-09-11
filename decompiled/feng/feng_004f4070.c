/* spd-match: far pct=15.79 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F4070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_004f4070(int val, undefined4 param_1, int param_2)

{
  int *piVar1;
  int *piVar2;

  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_2 + 4);
  iVar3 = *piVar5;
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    iVar4 = param_2;
    if (piVar5 == (int *)0x0) {
      iVar4 = 0;
    }
    if (iVar3 == iVar4) break;
    if (*(int *)(iVar3 + 0x18) == val) {
      iVar4 = *(int *)(iVar3 + 4);
      piVar1 = (int *)(iVar3 + 4);
      piVar2 = *(int **)(iVar3 + 8);
      *piVar2 = iVar4;
      *(int **)(iVar4 + 4) = piVar2;
      iVar4 = *piVar5;
      *piVar5 = (int)piVar1;
      *(int **)(iVar4 + 4) = piVar1;
      *piVar1 = iVar4;
      *(int **)(iVar3 + 8) = piVar5;
      return iVar3;
    }
    iVar3 = *(int *)(iVar3 + 4);
  }
  return 0;
}
