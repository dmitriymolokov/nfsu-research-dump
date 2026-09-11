/* spd-match: far pct=8.82 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_0050e890();
int __cdecl FUN_0050f200();
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c015c;
extern void LAB_00688f1e(void);
void *ExceptionList;

undefined4 * FUN_0050e7c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688f1e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c015c;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar2 + 0x18));
  }
  param_1[0x22] = 1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  FUN_0050e890(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_0050f200(param_1);
  ExceptionList = pvStack_c;
  return param_1;
}
