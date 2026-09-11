/* spd-match: far pct=4.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_005a2270();
extern int DAT_00733ff8;

void FUN_00567eb0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint local_64 [12];
  undefined4 local_34 [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar6 = local_64;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  FUN_005a2270(local_64);
  puVar5 = local_34;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 0;
  puVar5 = local_34;
  puVar4 = local_34 + 3;
  do {
    if ((local_64[iVar3] < 0x100) &&
       (puVar1 = (undefined4 *)(&DAT_00733ff8)[local_64[iVar3]], puVar1 != (undefined4 *)0x0)) {
      iVar2 = puVar1[1];
      local_8 = *puVar1;
      if (iVar2 == 0) {
        *puVar5 = local_8;
        puVar5 = puVar5 + 1;
      }
      else if (iVar2 == 1) {
        *puVar4 = local_8;
        puVar4 = puVar4 + 1;
      }
      else if (iVar2 == 6) {
        switch(*(undefined2 *)(puVar1 + 0xd)) {
        case 0:
          local_14 = local_8;
          break;
        case 1:
          local_10 = local_8;
          break;
        case 2:
          local_c = local_8;
          break;
        case 3:;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  puVar5 = local_34;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  return;
}
