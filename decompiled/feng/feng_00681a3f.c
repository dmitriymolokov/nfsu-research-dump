/* spd-match: far pct=78.26 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

typedef void _func_int(void);
extern code *DAT_00717ef4;

int FUN_00681a3f(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    terminate();
  }
  if ((DAT_00717ef4 != (_func_int *)0x0) && (iVar2 = _ValidateExecute(DAT_00717ef4), iVar2 != 0)) {
    iVar2 = (*DAT_00717ef4)(param_1);
    return iVar2;
  }
  return 0;
}
