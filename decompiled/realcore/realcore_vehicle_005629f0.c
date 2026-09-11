/* spd-match: far pct=10.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004b2480();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_00562b50();
extern int DAT_00746104;
extern unsigned char *PTR_LAB_006bc72c;
extern void LAB_00688d5e(void);
void *ExceptionList;

undefined4 * FUN_005629f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688d5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_LAB_006bc72c;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  FUN_004f8370(param_1 + 0x13,"car_thumb3","car_thumb");
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  param_1[0x22] = 0;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_004f62f0();
  }
  FUN_00562b50();
  FUN_004b2480();
  *(undefined1 *)(param_1 + 8) = 1;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar2 + 0x18));
  }
  ExceptionList = local_c;
  return param_1;
}
