/* spd-match: far pct=8.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005ca526();
extern void LAB_005cb99b(void);
extern void LAB_005cb9e4(void);

undefined4 FUN_005cb96f(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar1 = param_1[0xd];
  local_8 = 0;
  if (param_1[0x21] == 3) {
    local_8 = 0x8876086c;
    goto LAB_005cb9e4;
  }
  if (param_3 == (uint *)0x0) {
LAB_005cb99b:
    local_8 = 0x8876086c;
  }
  else {
    if (param_2 == 0) {
      param_1[0xd] = 0;
    }
    else {
      iVar2 = FUN_005ca526(param_2,1);
      if (iVar2 == 0) goto LAB_005cb99b;
      param_1[0xd] = *(int *)(iVar2 + 4) + 1;
    }
    while ((uint)param_1[0xd] < (uint)param_1[6]) {
      iVar2 = (**(code **)(*param_1 + 0xf4))(param_1,0);
      if (-1 < iVar2) {
        *param_3 = ~(param_1[0xd] * 0xac + param_1[7]);
        goto LAB_005cb9e4;
      }
      param_1[0xd] = param_1[0xd] + 1;
    }
    *param_3 = 0;
    local_8 = 1;
  }
LAB_005cb9e4:
  param_1[0xd] = iVar1;
  return local_8;
}
