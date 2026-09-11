/* spd-match: far pct=6.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

int __cdecl FUN_0067ef25();
extern int DAT_006ebd28;
extern void LAB_0067ae33(void);

float10 __umatherr(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_006ebd28)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(iVar1 * 8 + 0x6ebd2c);
      goto LAB_0067ae33;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_0067ae33:
  if (local_20 != 0) {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp(param_9,0xffff);
    iVar1 = FUN_0067ef25(&local_24);
    if (iVar1 == 0) {
      FID_conflict___set_errno_from_matherr(param_1);
    }
    return (float10)(double)(__int64)CONCAT44(uStack_8,local_c);
  }
  __ctrlfp(param_9,0xffff);
  FID_conflict___set_errno_from_matherr(param_1);
  return (float10)(double)(__int64)CONCAT44(param_8,param_7);
}
