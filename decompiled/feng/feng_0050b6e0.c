/* spd-match: far pct=5.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8730();
int __cdecl FUN_004f8960();
int __cdecl FUN_005046d0();
int __cdecl FUN_0050b9e0();
int __cdecl FUN_005a0220();
extern int DAT_006f889c;
extern int DAT_006f88a0;
extern int DAT_00734400;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c0288;
extern void LAB_0050b8b2(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_0050b6e0(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  byte local_40;
  byte local_3f [31];
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0288;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  local_18 = param_1 + 0x13;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(local_18,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  param_1[0x22] = 0;
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar4 + 0x18));
  }
  local_1c = (undefined4 *)(DAT_006f889c * 0x10 + DAT_00734400);
  if (local_1c != (undefined4 *)0x0) {
    iVar4 = 0;
    if (DAT_006f88a0 == 1) {
      iVar4 = local_1c[1];
    }
    else if (DAT_006f88a0 == 2) {
      iVar4 = local_1c[2];
    }
    else if (DAT_006f88a0 == 3) {
      iVar4 = local_1c[3];
    }
    if (0 < iVar4) {
      local_20 = param_1 + 0x11;
      param_2 = 1;
      local_14 = iVar4;
      do {
        uVar5 = FUN_005a0220(*local_1c);
        FUN_004f68c0(0x20,"GENERIC_LEVEL%d",param_2);
        iVar4 = -1;
        pbVar6 = &local_40;
        bVar2 = local_40;
        while (bVar2 != 0) {
          pbVar1 = pbVar6 + 1;
          iVar4 = iVar4 * 0x21 + (uint)bVar2;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar1;
        }
        puVar7 = _malloc(0x10);
        puVar7[3] = uVar5;
        puVar7[2] = iVar4;
        puVar3 = (undefined4 *)local_20[1];
        *puVar3 = puVar7;
        local_20[1] = puVar7;
        puVar7[1] = puVar3;
        *puVar7 = local_20;
        iVar8 = FUN_004f8730(local_18,puVar7[2],0,1);
        if ((iVar8 != 0) && (*(int *)(iVar8 + 0x24) != iVar4)) {
          *(int *)(iVar8 + 0x24) = iVar4;
          *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x400000;
        }
        param_2 = param_2 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_14 = 0;
    }
    param_1[0x22] = 0;
    FUN_005046d0();
    for (puVar3 = (undefined4 *)param_1[0x11]; puVar3 != param_1 + 0x11;
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == 0) {
        param_1[0x10] = puVar3;
        goto LAB_0050b8b2;
      }
    }
    param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_0050b8b2:
    FUN_004f8960();
    FUN_0050b9e0(param_1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  ExceptionList = local_10;
  return param_1;
}
