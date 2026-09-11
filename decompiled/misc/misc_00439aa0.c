/* spd-match: far pct=24.55 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00405550();
int __cdecl FUN_00424cc0();
int __cdecl FUN_0043d120();
int __cdecl FUN_00548a90();
int __cdecl FUN_00548ba0();
int __cdecl FUN_00549100();
int __cdecl FUN_00549140();
extern void LAB_00684c70(void);
void *ExceptionList;

undefined4 * __fastcall FUN_00439aa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00684c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405550();
  FUN_00405550();
  FUN_00405550();
  FUN_00405550();
  FUN_00405550();
  FUN_00405550();
  FUN_00405550();
  FUN_00549100();
  local_8 = 0;
  FUN_00549100();
  (*(unsigned char *)&(local_8)) = 1;
  FUN_00549100();
  (*(unsigned char *)&(local_8)) = 2;
  FUN_00549100();
  (*(unsigned char *)&(local_8)) = 3;
  FUN_00549100();
  (*(unsigned char *)&(local_8)) = 4;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 5;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 6;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 7;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 8;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 9;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 10;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 0xb;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 0xc;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 0xd;
  FUN_00548a90();
  (*(unsigned char *)&(local_8)) = 0xe;
  FUN_00549100();
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),0xf);
  *param_1 = 0;
  puVar2 = param_1 + 0x17;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00549140(0);
  FUN_00549140(0);
  FUN_00549140(0);
  FUN_00549140(0);
  FUN_00549140(0);
  FUN_00548ba0(0,0x46610000);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  FUN_00424cc0();
  FUN_00424cc0();
  FUN_00424cc0();
  FUN_00424cc0();
  FUN_00424cc0();
  FUN_00424cc0();
  FUN_00424cc0();
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 + 2] = 0;
  }
  FUN_0043d120();
  ExceptionList = local_10;
  return param_1;
}
