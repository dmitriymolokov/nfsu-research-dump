/* spd-match: far pct=17.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00416bb0();
int __cdecl FUN_00416fc0();
int __cdecl FUN_0041f0c0();
int __cdecl FUN_004f66b0();
int __cdecl FUN_004f78e0();
extern int DAT_00777b50;
extern int _DAT_0071b848;
extern int _DAT_0071b84c;
extern int _DAT_0071b850;
extern int _DAT_0071b854;
extern int _DAT_0071b858;
extern int _DAT_0071b85c;
extern int _DAT_0071b860;
extern int _DAT_0071b864;
extern int _DAT_0071b868;
extern int _DAT_0071b86c;
extern int _DAT_0071b870;
extern int _DAT_0071b874;
extern int _DAT_0071b878;
extern int _DAT_0071b87c;
extern int _DAT_0071b880;
extern int _DAT_0071b884;
extern int _DAT_00777cc0;
extern unsigned char *PTR_LAB_006cbcc0;
extern void LAB_006886f3(void);
void *ExceptionList;

undefined4 * FUN_00416d10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006886f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar1 = 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_006cbcc0;
  FUN_0041f0c0();
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  _DAT_00777cc0 = 4;
  if (DAT_00777b50 == 1) {
    uVar2 = 0x40e8a107;
  }
  else {
    uVar2 = 0xaa3f09d8;
  }
  FUN_00416bb0(uVar2);
  _DAT_0071b868 = FUN_004f66b0();
  _DAT_0071b86c = FUN_004f66b0();
  _DAT_0071b870 = FUN_004f66b0();
  _DAT_0071b874 = FUN_004f66b0();
  _DAT_0071b878 = FUN_004f66b0();
  _DAT_0071b87c = FUN_004f66b0();
  _DAT_0071b880 = FUN_004f66b0();
  _DAT_0071b884 = FUN_004f66b0();
  _DAT_0071b848 = FUN_004f66b0();
  _DAT_0071b84c = FUN_004f66b0();
  _DAT_0071b850 = FUN_004f66b0();
  _DAT_0071b854 = FUN_004f66b0();
  _DAT_0071b858 = FUN_004f66b0();
  _DAT_0071b85c = FUN_004f66b0();
  _DAT_0071b860 = FUN_004f66b0();
  _DAT_0071b864 = FUN_004f66b0();
  do {
    FUN_00416fc0(param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  ExceptionList = local_c;
  return param_1;
}
