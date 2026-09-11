/* spd-match: far pct=8.53 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00532d40();
int __cdecl FUN_00577450();
int __cdecl FUN_00577d10();
int __cdecl FUN_00578500();
int __cdecl FUN_00578590();
int __cdecl FUN_00578660();
int __cdecl FUN_00579190();
int __cdecl FUN_00579380();
int __cdecl FUN_005796b0();
extern unsigned char *DAT_007306c8;
extern unsigned char *PTR_FUN_006ba65c;
extern unsigned char *PTR_FUN_006ba6b8;
extern void LAB_00686c4d(void);
void *ExceptionList;

undefined4 * FUN_00578060(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00686c4d;
  local_1c = ExceptionList;
  uVar5 = *param_2;
  ExceptionList = &local_1c;
  param_1[4] = param_2[1];
  *param_1 = &PTR_FUN_006ba6b8;
  param_1[3] = uVar5;
  iVar4 = FUN_00577d10(uVar5);
  param_1[6] = iVar4;
  param_1[5] = *(undefined4 *)(iVar4 + 0x1c);
  *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
  iVar4 = param_1[6];
  if (*(char *)(iVar4 + 0x18) != '\0') {
    piVar2 = *(int **)(iVar4 + 0x30);
    piVar1 = param_1 + 1;
    *piVar2 = (int)piVar1;
    *(int **)(iVar4 + 0x30) = piVar1;
    param_1[2] = piVar2;
    *piVar1 = iVar4 + 0x2c;
  }
  local_14 = 0;
  uVar5 = FUN_00579380(0);
  param_1[7] = uVar5;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_006ba65c;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0xb] = param_2;
  param_1[0x10] = 0;
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),1);
  FUN_00578500(param_2 + 0x14,param_2[0x24] != 0);
  iVar4 = param_1[7];
  FUN_00401cd0();
  if (*(int *)(iVar4 + 0xe4) == 0) {
    FUN_00579190();
  }
  FUN_00578590();
  iVar4 = DAT_007306c8;
  if ((param_2[0x1a] != 0) && (param_2[2] != 0)) {
    puVar3 = *(undefined4 **)(DAT_007306c8 + 0x10);
    iVar6 = *(int *)(DAT_007306c8 + 0x18) + 1;
    if (puVar3 != (undefined4 *)0x0) {
      uVar5 = *puVar3;
      if (*(int *)(DAT_007306c8 + 0x1c) < iVar6) {
        *(int *)(DAT_007306c8 + 0x1c) = iVar6;
      }
      *(int *)(iVar4 + 0x18) = iVar6;
      *(undefined4 *)(iVar4 + 0x10) = uVar5;
    }
    (*(unsigned char *)&(local_14)) = 2;
    if (puVar3 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00577450(puVar3,param_1[0xd]);
    }
    local_14 = CONCAT31(((unsigned int)(local_14) >> 8),1);
    param_1[0xe] = uVar5;
  }
  if ((((param_2[0x20] != 0) || (param_2[0x21] != 0)) || (param_2[0x22] != 0)) ||
     ((param_2[0x24] != 0 && (param_2[0x23] != 0)))) {
    FUN_005796b0(param_1 + 7,4,param_2 + 0x20);
  }
  param_1[0xf] = 0;
  if (param_2[0x1b] != 0) {
    uVar5 = FUN_00532d40(param_2[0x1b],param_1);
    param_1[0xf] = uVar5;
  }
  param_1[0x12] = 0;
  if (param_2[0x1d] != 0) {
    FUN_00578660(1);
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  ExceptionList = local_1c;
  return param_1;
}
