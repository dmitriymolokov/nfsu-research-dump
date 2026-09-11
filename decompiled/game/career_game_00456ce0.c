/* spd-match: far pct=6.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00456de0();
extern int DAT_00700680;
int unaff_ESI;

void FUN_00456ce0(void)

{
  undefined2 uVar1;
  float fVar2;
  int unaff_ESI;
  float10 fVar3;
  float local_8;
  
  local_8 = DAT_00700680;
  fVar2 = *(float *)((*(int **)(unaff_ESI + 0x2c))[1] + 0x3d4);
  uVar1 = *(undefined2 *)(unaff_ESI + 0x3b4);
  fVar3 = (**(float10 (**)())(**(int **)(unaff_ESI + 0x2c) + 0x50))();
  fVar3 = fVar3 * (float10)fVar2;
  if (fVar3 <= (float10)local_8) {
  }
  else {
    local_8 = (float)fVar3;
  }
  FUN_00456de0(local_8,uVar1);
  return;
}
