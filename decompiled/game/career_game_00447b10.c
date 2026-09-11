/* spd-match: far pct=6.98 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-tail3/va_00447B10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00447b10(int val, int param_1, int param_2, int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  LARGE_INTEGER local_18;
  LARGE_INTEGER LStack_10;
  
  iVar4 = param_1 + val;
  do {
    if (param_1 == iVar4) {
      return;
    }
    iVar5 = *(int *)(param_1 + 4) + 8 + param_1;
    iVar3 = param_1;
    while (iVar2 = iVar5, iVar2 != iVar4) {
      iVar3 = iVar2;
      iVar5 = iVar2 + 8 + *(int *)(iVar2 + 4);
    }
    iVar5 = 0;
    if (0 < param_3) {
      do {
        pcVar1 = *(code **)(param_2 + iVar5 * 4);
        QueryPerformanceCounter(&local_18);
        iVar4 = (*pcVar1)(iVar3);
        QueryPerformanceCounter(&LStack_10);
        if (iVar4 != 0) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    iVar4 = iVar3;
    if (iVar5 == param_3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  } while( true );
}
