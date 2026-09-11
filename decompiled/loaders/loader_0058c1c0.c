/* spd-match: far pct=4.35 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058C1C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007344f4;
int __fastcall FUN_0058c1c0(int val, undefined4 param_1, int param_2, undefined4 param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  int iVar5;
  int iVar6;
  
  iVar4 = DAT_007344f4;
  iVar6 = 0;
  iVar5 = 0;
  if (0 < val) {
    do {
      piVar1 = *(int **)(param_4 + iVar5 * 4);
      if ((piVar1 != (int *)0x0) && ((short)piVar1[3] == 0)) {
        if (*(char *)((int)piVar1 + 0xe) == '\x02') {
          *(int *)(param_2 + iVar6 * 4) = piVar1[2];
          iVar6 = iVar6 + 1;
        }
        iVar2 = *piVar1;
        piVar3 = (int *)piVar1[1];
        *piVar3 = iVar2;
        *(int **)(iVar2 + 4) = piVar3;
        iVar2 = *(int *)(iVar4 + 0x18);
        *piVar1 = *(int *)(iVar4 + 0x10);
        *(int *)(iVar4 + 0x18) = iVar2 + -1;
        *(int **)(iVar4 + 0x10) = piVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < val);
  }
  return iVar6;
}
