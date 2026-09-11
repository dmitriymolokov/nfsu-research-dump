/* spd-match: far pct=11.38 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_01/attempt1_baseline */
#include "ghidra_compat.h"

int __cdecl FUN_005b30af();
int __cdecl FUN_005b7369();
extern void LAB_005b5a5c(void);
extern void LAB_005b5b16(void);

uint  FUN_005b59d1(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_8;
  
  uVar5 = (uint)param_3;
  if (param_2 == 0) {
    return 0;
  }
  local_8 = param_1;
  iVar2 = FUN_005b7369(param_2,param_4);
  if ((((iVar2 == 0) ||
       (uVar1 = *(uint *)(*(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) + 0x10 +
                         *(int *)(iVar2 + 0x18)), *(int *)(iVar2 + 0x10) != -1)) || (uVar1 == 0)) ||
     (uVar1 <= param_3)) {
LAB_005b5b16:
    uVar5 = 0;
  }
  else {
    param_3 = (undefined4 *)0x0;
    puVar3 = *(undefined4 **)(iVar2 + 0xc);
    if (*(undefined4 **)(iVar2 + 0xc) == (undefined4 *)0x0) {
LAB_005b5a5c:
      puVar3 = _malloc(0x20);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[4] = 0xffffffff;
        puVar3[7] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
      if (puVar3 == (undefined4 *)0x0) goto LAB_005b5b16;
      local_8 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(iVar2 + 0x18);
      uVar4 = FUN_005b30af(*(undefined4 *)(param_1 + 0x118),&local_8,&param_4);
      *puVar3 = 3;
      puVar3[1] = *(undefined4 *)(iVar2 + 4);
      puVar3[6] = *(undefined4 *)(iVar2 + 0x18);
      puVar3[4] = uVar5;
      uVar6 = 0;
      puVar3[5] = uVar4 / uVar1;
      puVar3[7] = *(undefined4 *)(iVar2 + 0x1c);
      if ((param_4 * uVar5) / uVar1 != 0) {
        do {
          puVar3[7] = *(undefined4 *)(puVar3[7] + 0xc);
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)(puVar3[4] * param_4) / uVar1);
      }
      if (param_3 == (undefined4 *)0x0) {
        puVar3[3] = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 **)(iVar2 + 0xc) = puVar3;
      }
      else {
        puVar3[3] = param_3[3];
        param_3[3] = puVar3;
      }
    }
    else {
      do {
        puVar7 = puVar3;
        puVar3 = puVar7;
        if (uVar5 <= (uint)puVar7[4]) break;
        puVar3 = (undefined4 *)puVar7[3];
        param_3 = puVar7;
      } while (puVar3 != (undefined4 *)0x0);
      if ((puVar3 == (undefined4 *)0x0) || (uVar5 < (uint)puVar3[4])) goto LAB_005b5a5c;
    }
    uVar5 = ~(uint)puVar3;
  }
  return uVar5;
}
