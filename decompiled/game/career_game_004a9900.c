/* spd-match: far pct=10.53 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2065_puram/batches/20260724T133118Z_w0_tc0 */
#include "ghidra_compat.h"

undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;

int __cdecl FUN_005649f0();
int __cdecl FUN_00567160();
extern int DAT_007349b4;
int unaff_ESI;

void FUN_004a9900(int param_1)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (DAT_007349b4 == 0) {
    FUN_005649f0();
  }
  piVar2 = (int *)FUN_00567160();
  if (piVar2 != (int *)0x0) {
    piVar2[2] = param_1;
    piVar1 = *(int **)(unaff_ESI + 4);
    *piVar1 = (int)piVar2;
    *(int **)(unaff_ESI + 4) = piVar2;
    piVar2[1] = (int)piVar1;
    *piVar2 = unaff_ESI;
    return;
  }
  puRam00000004 = *(undefined4 **)(unaff_ESI + 4);
  *puRam00000004 = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  iRam00000000 = unaff_ESI;
  return;
}
