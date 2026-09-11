/* spd-match: far pct=6.11 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p1/attempt2_tc_c */
#include "ghidra_compat.h"

extern void LAB_00613220(void);

undefined4 
FUN_0061319b(int param_1,char *param_2,char *param_3,uint param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  if ((param_3 != (char *)0x0) && (param_2 == (char *)0x0)) {
    return 0x80004005;
  }
  if (param_3 == (char *)0xffffffff) {
    param_3 = param_2;
    do {
      cVar1 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    param_3 = param_3 + (1 - (int)(param_2 + 1));
  }
  if ((param_4 & 1) == 0) {
    param_4 = param_4 | 2;
  }
  if ((param_4 & 2) != 0) {
    for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[4]) {
      if (((*(byte *)(puVar2 + 2) & 2) != 0) && (param_3 == (char *)puVar2[1])) {
        bVar8 = true;
        pcVar4 = param_3;
        pcVar6 = param_2;
        pcVar7 = (char *)*puVar2;
        do {
          if (pcVar4 == (char *)0x0) break;
          pcVar4 = pcVar4 + -1;
          bVar8 = *pcVar6 == *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = puVar2[3];
          }
          if (((param_4 & 1) != 0) && ((param_4 & 8) != 0)) {
            _free(param_2);
          }
          return 0;
        }
      }
    }
  }
  puVar2 = _malloc(0x14);
  if (puVar2 == (undefined4 *)0x0) {
LAB_00613220:
    uVar3 = 0x8007000e;
  }
  else {
    if ((param_4 & 1) == 0) {
      pcVar4 = _malloc((size_t)param_3);
      *puVar2 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        _free(puVar2);
        goto LAB_00613220;
      }
      for (uVar5 = (uint)param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar5 = (uint)param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *param_2;
        param_2 = param_2 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    else {
      *puVar2 = param_2;
    }
    if ((param_4 & 4) == 0) {
      *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 3U & 0xfffffffc;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    puVar2[2] = param_4;
    puVar2[4] = 0;
    puVar2[3] = uVar3;
    puVar2[1] = param_3;
    *(int *)(param_1 + 4) = (int)(param_3 + *(int *)(param_1 + 4));
    **(undefined4 **)(param_1 + 0xc) = puVar2;
    *(undefined4 **)(param_1 + 0xc) = puVar2 + 4;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = puVar2[3];
    }
    uVar3 = 0;
  }
  return uVar3;
}
