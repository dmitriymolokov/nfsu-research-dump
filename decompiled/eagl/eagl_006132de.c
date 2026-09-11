/* spd-match: far pct=5.96 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_006132de(uint *param_2, uint *param_3);
};
undefined4 ThisCallBox::FUN_006132de(uint *param_2, uint *param_3) {
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = param_2;
  if (param_3 == (uint *)0xffffffff) {
    uVar4 = (((uint *)this)[1] + 3 >> 2) + 2;
  }
  else {
    uVar4 = (uint)param_3;
    if ((unsigned int)(param_3) < (((uint *)this)[1] + 3 >> 2) + 2) {
      return 0x80004005;
    }
  }
  if (0x8000 < uVar4) {
    return 0x80004005;
  }
  param_2 = (uint *)0x0;
  *puVar5 = (uVar4 - 1 & 0x7fff) << 0x10 | 0xfffe;
  puVar5[1] = *((uint *)this);
  param_3 = puVar5 + 2;
  for (puVar1 = (undefined4 *)((uint *)this)[2]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[4]) {
    if ((*(byte *)(puVar1 + 2) & 4) == 0) {
      uVar2 = ((int)param_2 + 3U & 0xfffffffc) - (int)param_2;
      puVar5 = param_3;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0xabababab;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = 0xab;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      param_3 = (uint *)((int)param_3 + uVar2);
      param_2 = (uint *)((int)param_2 + uVar2);
    }
    uVar2 = puVar1[1];
    puVar5 = (uint *)*puVar1;
    puVar6 = param_3;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar6 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    param_3 = (uint *)((int)param_3 + puVar1[1]);
    param_2 = (uint *)((int)param_2 + puVar1[1]);
  }
  uVar2 = (uVar4 * 4 + -8) - (int)param_2;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_3 = 0xabababab;
    param_3 = param_3 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_3 = 0xab;
    param_3 = (uint *)((int)param_3 + 1);
  }
  return 0;
}
