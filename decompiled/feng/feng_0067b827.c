/* spd-match: far pct=17.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0067b645();

undefined4
___InternalCxxFrameHandler
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
          int param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  
  if ((*param_5 & 0x1fffffff) != 0x19930520) {
    _inconsistency();
  }
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((*param_1 == -0x1f928c9d) && (0x19930520 < (uint)param_1[5])) &&
         (*(code **)(param_1[7] + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(param_1[7] + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 0xff);
        return uVar1;
      }
      FUN_0067b645(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
  }
  return 1;
}
