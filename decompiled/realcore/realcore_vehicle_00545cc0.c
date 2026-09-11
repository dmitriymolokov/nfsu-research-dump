/* spd-match: far pct=3.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00545CC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007364f0;
void __fastcall FUN_00545cc0(int * obj)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  undefined4 *puVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar3 = DAT_007364f0;
  local_4 = 0;
  if (0 < obj[4]) {
    local_8 = 0;
    do {
      iVar6 = *(int *)(obj[2] + local_8 + 0x1c);
      if (0 < iVar6) {
        puVar5 = (undefined4 *)(*(int *)(obj[2] + 0x28 + local_8) + 8);
        do {
          puVar1 = (undefined4 *)*puVar5;
          iVar2 = *(int *)(iVar3 + 0x18);
          *puVar1 = *(undefined4 *)(iVar3 + 0x10);
          puVar5 = puVar5 + 4;
          iVar6 = iVar6 + -1;
          *(int *)(iVar3 + 0x18) = iVar2 + -1;
          *(undefined4 **)(iVar3 + 0x10) = puVar1;
        } while (iVar6 != 0);
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 0x34;
    } while (local_4 < obj[4]);
  }
  iVar3 = *obj;
  piVar4 = (int *)obj[1];
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  return;
}
