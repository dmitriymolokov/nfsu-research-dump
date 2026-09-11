/* spd-match: far pct=11.65 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004602c0();
int __cdecl FUN_004620c0();
extern unsigned char *PTR_LAB_006c8d20;
extern void LAB_006868dd(void);
void *ExceptionList;

undefined4 * FUN_0045d660(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006868dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004620c0(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_006c8d20;
  pvVar1 = _malloc(0x520);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004602c0(pvVar1);
  }
  param_1[2] = uVar2;
  param_1[0x141] = 0xff;
  param_1[0x142] = 0xff;
  param_1[0x140] = 2;
  ExceptionList = local_c;
  return param_1;
}
