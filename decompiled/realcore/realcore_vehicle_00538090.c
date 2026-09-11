/* spd-match: far pct=4.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int _DAT_006cc8b8;
int unaff_ESI;

bool FUN_00538090(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x94))(0);
  fVar5 = 1.4013e-45;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x94))();
  uVar4 = 0;
  fVar3 = (float10)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x84))(0);
  fVar3 = (float10)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x84))(1,uVar4,fVar5,(float)fVar3);
  if ((float10)fVar5 < fVar3) {
    if ((float10)_DAT_006cc8b8 <= fVar3) {
      (**(code **)(**(int **)(unaff_ESI + 0x20) + 0xa8))(1);
      return true;
    }
    (**(code **)(**(int **)(unaff_ESI + 0x20) + 0xa8))(iVar1 < iVar2);
    return iVar1 < iVar2;
  }
  if (_DAT_006cc8b8 <= fVar5) {
    (**(code **)(**(int **)(unaff_ESI + 0x20) + 0xa8))(0);
    return false;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x20) + 0xa8))(iVar1 < iVar2);
  return iVar1 < iVar2;
}
