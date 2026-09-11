/* spd-match: far pct=13.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004ee5e0();
int __cdecl FUN_005033d0();
extern unsigned char *DAT_0073577c;
extern int DAT_007460c8;
extern unsigned char *PTR_FUN_006c1810;
extern unsigned char *PTR_LAB_006c2c4c;
extern unsigned char *PTR_LAB_006c2c50;
extern void LAB_0068541e(void);
void *ExceptionList;

void __fastcall FUN_004fef10(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0068541e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c1810;
  local_4 = 2;
  if (DAT_0073577c != (undefined4 *)0x0) {
    (**(code **)*DAT_0073577c)(param_1);
  }
  FUN_005033d0(&DAT_007460c8);
  if ((void *)param_1[5] != (void *)0x0) {
    _free((void *)param_1[5]);
  }
  (*(unsigned char *)&(local_4)) = 1;
  param_1[0x11] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  param_1[0xd] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = pvStack_c;
  return;
}
