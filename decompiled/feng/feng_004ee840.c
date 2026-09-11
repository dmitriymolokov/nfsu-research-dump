/* spd-match: far pct=13.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004ee5e0();
int __cdecl FUN_004ee910();
extern unsigned char *PTR_LAB_006c2c4c;
extern void LAB_00685952(void);
void *ExceptionList;

void FUN_004ee840(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00685952;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_004ee910(param_1);
  (*(unsigned char *)&(local_4)) = 4;
  *(undefined ***)(param_1 + 0x4134) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  (*(unsigned char *)&(local_4)) = 3;
  *(undefined ***)(param_1 + 0x4124) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  (*(unsigned char *)&(local_4)) = 2;
  *(undefined ***)(param_1 + 0x4114) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  (*(unsigned char *)&(local_4)) = 1;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  *(undefined ***)(param_1 + 0xec) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 0xdc) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  ExceptionList = local_c;
  return;
}
