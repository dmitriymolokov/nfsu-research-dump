/* spd-match: far pct=7.64 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

int __cdecl FUN_005e54bc(...);

struct ThisCallBox {
  undefined4 FUN_005e7078(char *param_2, undefined4 param_3, undefined4 param_4);
};
undefined4 ThisCallBox::FUN_005e7078(char *param_2, undefined4 param_3, undefined4 param_4) {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  
  iVar3 = FUN_005e54bc(param_2);
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)(param_2 + 1));
  pcVar5 = (char *)_malloc((size_t)pcVar4);
  if (pcVar5 != (char *)0x0) {
    pcVar8 = pcVar5;
    for (uVar7 = (uint)pcVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar7 = (uint)pcVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar8 = *param_2;
      param_2 = param_2 + 1;
      pcVar8 = pcVar8 + 1;
    }
    puVar6 = (undefined4 *)_malloc(0x24);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(((int)this) + iVar3 * 4);
      puVar6[3] = 0;
      puVar6[1] = param_3;
      *puVar6 = (unsigned int)pcVar5;
      puVar6[2] = param_4;
      puVar6[8] = uVar2;
    }
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined4 **)(((int)this) + iVar3 * 4) = puVar6;
      return 0;
    }
  }
  return 0x8007000e;
}
