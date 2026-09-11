/* spd-match: far pct=6.40 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A3AA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
extern int DAT_006fbf14;
extern unsigned char *DAT_0073619c;
void __fastcall FUN_004a3aa0(int obj, int param_1)

{
  int iVar1;

  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_40;
  int local_3c [8];
  int local_1c [7];
  
  iVar3 = *(int *)(obj + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(obj + 0x10) == 0)) &&
     (iVar2 = FUN_0041ffe0(), iVar2 != 0)) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(iVar3 + 0x1c) != 0) {
    iVar5 = (int)*(char *)(*(int *)(iVar3 + 0x1c) + 10);
    iVar6 = iVar5 + -1;
    iVar3 = *(int *)(param_1 + 0xf0) + -1;
    local_3c[0] = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0 < iVar3) {
      iVar1 = *(int *)(DAT_0073619c + 0x24);
      iVar8 = iVar5 + -2;
      local_40 = 0;
      if (0 < iVar1) {
        do {
          if (iVar3 < 1) break;
          if ((0 < iVar8) && (1 < iVar3)) {
            local_3c[iVar2 + 1] = iVar8;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + -1;
            iVar8 = iVar8 + -1;
          }
          if ((iVar5 < iVar1) && (0 < iVar3)) {
            local_1c[local_3c[0]] = iVar5;
            iVar3 = iVar3 + -1;
            local_3c[0] = local_3c[0] + 1;
            iVar5 = iVar5 + 1;
          }
          local_40 = local_40 + 1;
        } while (local_40 < iVar1);
      }
    }
    iVar3 = 1;
    if (0 < iVar2) {
      piVar7 = (int *)(param_1 + 0xe4);
      piVar4 = local_3c + iVar2;
      iVar3 = iVar2 + 1;
      do {
        *piVar7 = *piVar4;
        piVar4 = piVar4 + -1;
        piVar7 = piVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (iVar6 != 0) {
      *(int *)(param_1 + 0xe0 + iVar3 * 4) = iVar6;
      iVar3 = iVar3 + 1;
    }
    if (0 < local_3c[0]) {
      piVar7 = local_1c;
      piVar4 = (int *)(param_1 + 0xe0 + iVar3 * 4);
      for (; local_3c[0] != 0; local_3c[0] = local_3c[0] + -1) {
        *piVar4 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar4 = piVar4 + 1;
      }
    }
  }
  return;
}
