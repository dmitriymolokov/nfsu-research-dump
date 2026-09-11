/* spd-match: far pct=1.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004fec30();
int __cdecl FUN_00504020();
int __cdecl FUN_005040e0();
int __cdecl FUN_00514410();
extern unsigned char *PTR_FUN_006c17c8;
extern void LAB_00685d33(void);
void *ExceptionList;

undefined4 * FUN_00514350(undefined4 *param_1,int param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685d33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fec30(param_1,param_2,param_3);
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_006c17c8;
  local_4 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_00504020();
  psVar1 = (short *)param_1[0x18];
  iVar2 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (psVar1[iVar2] != 0);
  }
  param_1[0x19] = iVar2;
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  FUN_00514410();
  FUN_005040e0();
  ExceptionList = local_c;
  return param_1;
}
