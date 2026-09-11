/* spd-match: far pct=8.45 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004f4220();
int __cdecl FUN_004ffb00();
int __cdecl FUN_00575940();
extern void LAB_00686ba0(void);
void *ExceptionList;

undefined4 FUN_004f59c0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00686ba0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ffb00(param_1);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  FUN_004ffb00(param_1);
  FUN_004f4220();
  FUN_00575940("package[%s] will unload\n",*(undefined4 *)(param_1 + 0xc));
  ExceptionList = local_c;
  return 1;
}
