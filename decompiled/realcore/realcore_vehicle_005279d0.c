/* spd-match: far pct=10.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00527af0();
int __cdecl FUN_0052e3f0();
extern unsigned char *PTR_FUN_006befb4;
extern unsigned char *PTR_LAB_006bef88;
extern void LAB_00684e53(void);
void *ExceptionList;

undefined4 * FUN_005279d0(undefined4 *param_1)

{
  undefined4 *puVar1;
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
  puVar1 = (undefined4 *)FUN_0052e3f0();
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  *param_1 = &PTR_FUN_006befb4;
  *puVar1 = &PTR_LAB_006bef88;
  param_1[0x8c] = 0;
  FUN_00527af0(param_1);
  ExceptionList = local_c;
  return param_1;
}
