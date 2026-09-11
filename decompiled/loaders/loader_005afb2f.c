/* spd-match: far pct=8.40 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_03/attempt2_targeted */
#include "ghidra_compat.h"

int __cdecl FUN_005afa23();
int __cdecl FUN_005d041d();
int __cdecl FUN_005d5932();
int __cdecl FUN_005d65b0();
extern void LAB_005afc40(void);
extern void LAB_005afc77(void);
extern void LAB_005afc84(void);

int FUN_005afb2f(int param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 *param_8,int *param_9)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar6 = param_9;
  local_8 = 0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = 0;
  }
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    local_8 = -0x7789f794;
    goto LAB_005afc77;
  }
  pvVar2 = _malloc(0xbc);
  if (pvVar2 == (void *)0x0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)FUN_005d041d();
  }
  piVar7 = local_10;
  uVar5 = param_3;
  if (local_10 == (int *)0x0) {
    local_8 = -0x7ff8fff2;
    goto LAB_005afc84;
  }
  if (param_3 < 4) {
    local_8 = -0x7fffbffb;
    goto LAB_005afc84;
  }
  if (*param_2 == -1) {
    if ((param_8 == (undefined4 *)0x0) ||
       (local_8 = FUN_005d65b0(param_3,&local_c), piVar6 = param_2, local_8 < 0))
    goto LAB_005afc84;
    piVar3 = (int *)(**(code **)(*local_c + 0xc))(local_c);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar3 = piVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; piVar7 = local_10, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar3 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    }
LAB_005afc40:
    puVar1 = param_8;
    if (param_8 != (undefined4 *)0x0) {
      param_2 = (int *)0x0;
      local_8 = FUN_005d5932(param_1,param_7,local_c,&param_2);
      if (-1 < local_8) {
        *puVar1 = piVar7;
        (**(code **)(*piVar7 + 4))(piVar7);
      }
    }
  }
  else {
    local_8 = FUN_005afa23(param_2,param_3,param_4,param_5,param_6,&local_14,piVar6);
    if (-1 < local_8) {
      if ((piVar6 != (int *)0x0) && (piVar3 = (int *)*piVar6, piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar6 = 0;
      }
      local_8 = (**(code **)(*local_14 + 0xf0))(local_14,param_6,&local_c,piVar6);
      if (-1 < local_8) goto LAB_005afc40;
    }
  }
LAB_005afc77:
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
LAB_005afc84:
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return local_8;
}
