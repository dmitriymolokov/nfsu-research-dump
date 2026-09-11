/* spd-match: far pct=7.59 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00500410 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00500410(int obj, int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;

  int iVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(obj + 0x5c);
  *(undefined4 *)(obj + 0x84) = 0;
  iVar3 = *(int *)(obj + 0x60);
  *(undefined4 *)(obj + 0x88) = 0;
  uVar6 = uVar2;
  for (; uVar7 = uVar2, iVar3 != 0; iVar3 = iVar3 + -1) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      iVar8 = (*(int *)(obj + 0x88) * uVar6 + *(int *)(obj + 0x84)) * 0x30 +
              *(int *)(obj + 0x8c);
      iVar4 = *(int *)(iVar8 + 0x14);
      if (iVar4 == -1) {
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)(iVar8 + 0x10) = 0;
        *(undefined4 *)(iVar8 + 0x14) = 0xffffffff;
      }
      else {
        iVar1 = **(int **)(param_1 + 8) + iVar4 * 0x18;
        uVar5 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar8 + 0x10) = uVar5;
        *(int *)(iVar8 + 0x14) = iVar4;
      }
      uVar6 = *(uint *)(obj + 0x5c);
      uVar9 = *(int *)(obj + 0x84) + 1;
      *(uint *)(obj + 0x84) = uVar9;
      if (uVar6 <= uVar9) {
        uVar9 = *(int *)(obj + 0x88) + 1;
        *(undefined4 *)(obj + 0x84) = 0;
        *(uint *)(obj + 0x88) = uVar9;
        if (*(uint *)(obj + 0x60) <= uVar9) {
          *(undefined4 *)(obj + 0x88) = 0;
        }
      }
    }
  }
  return;
}
