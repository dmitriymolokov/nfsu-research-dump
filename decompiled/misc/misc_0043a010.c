/* spd-match: far pct=17.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00549130();
int __cdecl FUN_00565b10();
int __cdecl FUN_00565ce0();
extern void LAB_00685e80(void);
void *ExceptionList;

void __fastcall FUN_0043a010(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00685e80;
  local_10 = ExceptionList;
  local_8 = 0xf;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x58) != 0) {
    ExceptionList = &local_10;
    FUN_00565b10();
    FUN_00565ce0();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  (*(unsigned char *)&(local_8)) = 0xe;
  FUN_00549130(param_1 + 0x13e8);
  (*(unsigned char *)&(local_8)) = 0xd;
  FUN_00549130(param_1 + 0x129c);
  (*(unsigned char *)&(local_8)) = 0xc;
  FUN_00549130(param_1 + 0x1150);
  (*(unsigned char *)&(local_8)) = 0xb;
  FUN_00549130(param_1 + 0x1004);
  (*(unsigned char *)&(local_8)) = 10;
  FUN_00549130(param_1 + 0xeb8);
  (*(unsigned char *)&(local_8)) = 9;
  FUN_00549130(param_1 + 0xd6c);
  (*(unsigned char *)&(local_8)) = 8;
  FUN_00549130(param_1 + 0xc20);
  (*(unsigned char *)&(local_8)) = 7;
  FUN_00549130(param_1 + 0xad4);
  (*(unsigned char *)&(local_8)) = 6;
  FUN_00549130(param_1 + 0x988);
  (*(unsigned char *)&(local_8)) = 5;
  FUN_00549130(param_1 + 0x83c);
  (*(unsigned char *)&(local_8)) = 4;
  FUN_00549130(param_1 + 0x6f0);
  (*(unsigned char *)&(local_8)) = 3;
  FUN_00549130(param_1 + 0x5ac);
  (*(unsigned char *)&(local_8)) = 2;
  FUN_00549130(param_1 + 0x468);
  (*(unsigned char *)&(local_8)) = 1;
  FUN_00549130(param_1 + 0x324);
  local_8 = (uint)((unsigned int)(local_8) >> 8) << 8;
  FUN_00549130(param_1 + 0x1e0);
  local_8 = 0xffffffff;
  FUN_00549130(param_1 + 0x9c);
  ExceptionList = local_10;
  return;
}
