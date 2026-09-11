/* spd-match: far pct=13.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0051cb70();
int __cdecl FUN_0052e3f0();
int __cdecl FUN_00532640();
extern int DAT_006f42d0;
extern int DAT_007356a8;
extern unsigned char *PTR_FUN_006bee5c;
extern unsigned char *PTR_LAB_006bee30;
extern void LAB_00684e53(void);
void *ExceptionList;

undefined4 * FUN_005281f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684e53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  FUN_0052e3f0();
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  *param_1 = &PTR_FUN_006bee5c;
  param_1[8] = &PTR_LAB_006bee30;
  FUN_00532640();
  *(undefined1 *)(extraout_EDX + 0x78) = 1;
  FUN_00532640();
  iVar2 = DAT_007356a8;
  *(undefined1 *)(extraout_EDX_00 + 0x78) = 1;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  param_1[0xaf] = 0;
  param_1[0x37] = &DAT_006f42d0;
  param_1[0x89] = *(undefined4 *)(*(int *)(iVar2 + 0xa0) + 4);
  (**(code **)(param_1[8] + 0x24))();
  iVar2 = param_1[0x37];
  if (iVar2 != 0) {
    iVar1 = FUN_0051cb70();
    iVar2 = iVar1 * **(int **)(iVar2 + 0x60) >> 0xf;
    param_1[0x31] = iVar2;
    param_1[0x32] = iVar2;
  }
  ExceptionList = local_c;
  return param_1;
}
