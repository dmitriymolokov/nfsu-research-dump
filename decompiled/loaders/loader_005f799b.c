/* spd-match: far pct=5.39 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_15/thiscall_tp_attempt2_005f799b */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005f799b(undefined4 *param_2);
};
undefined4 ThisCallBox::FUN_005f799b(undefined4 *param_2) {
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004005;
  }
  else {
    *((undefined4 *)this) = *param_2;
    ((undefined4 *)this)[1] = param_2[1];
    ((undefined4 *)this)[3] = param_2[3];
    pvVar2 = _malloc(((undefined4 *)this)[1] << 2);
    ((undefined4 *)this)[2] = (undefined4)(unsigned int)pvVar2;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = _malloc(((undefined4 *)this)[3] << 2);
      ((undefined4 *)this)[4] = (undefined4)(unsigned int)pvVar2;
      if (pvVar2 != (void *)0x0) {
        puVar5 = (undefined4 *)param_2[2];
        puVar6 = (undefined4 *)((undefined4 *)this)[2];
        for (uVar3 = ((undefined4 *)this)[1] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        puVar5 = (undefined4 *)param_2[4];
        puVar6 = (undefined4 *)((undefined4 *)this)[4];
        for (uVar3 = ((undefined4 *)this)[3] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        ((undefined4 *)this)[9] = param_2[9];
        ((undefined4 *)this)[0xb] = param_2[0xb];
        ((undefined4 *)this)[0xd] = param_2[0xd];
        return 0;
      }
    }
    uVar1 = 0x8007000e;
  }
  return uVar1;
}
