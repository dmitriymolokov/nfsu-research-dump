/* spd-match: far pct=10.14 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00651f30();
int __cdecl FUN_00655880();
extern int DAT_00713d9e;
extern int DAT_00713ee8;
extern int DAT_00714004;
extern int DAT_00714008;
extern int DAT_0071400c;

void FUN_00653ec0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;
  
  local_8 = (uint)DAT_00713d9e;
  if ((int)local_8 < (int)DAT_00713ee8) {
    iVar7 = local_8 * 0x110;
    iVar6 = DAT_0071400c;
    do {
      iVar1 = iVar6 + 0xe4;
      if (*(int *)(iVar6 + 0xe4 + iVar7) != 0) {
        iVar2 = iVar6 + 0x104;
        iVar3 = iVar6 + 0xdc;
        do {
          iVar5 = (**(code **)(iVar2 + iVar7))(*(undefined4 *)(iVar3 + iVar7));
          iVar6 = 0x100;
          if (iVar5 < 0x101) {
            iVar6 = iVar5;
          }
          puVar4 = *(undefined4 **)(iVar1 + iVar7);
          iVar6 = (*(code *)*puVar4)(puVar4,iVar6,DAT_00714004,DAT_00714008,0);
          if (iVar6 < 0) {
            FUN_00651f30(local_8);
            iVar6 = DAT_0071400c;
            break;
          }
          FUN_00655880();
          iVar6 = DAT_0071400c;
        } while (iVar5 != 0x100 && -1 < iVar5 + -0x100);
      }
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 0x110;
    } while ((int)local_8 < (int)DAT_00713ee8);
  }
  return;
}
