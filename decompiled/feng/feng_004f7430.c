/* spd-match: far pct=0.79 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_005461c0();
extern int _DAT_006ccae0;
int unaff_ESI;

void FUN_004f7430(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x2c);
    fVar2 = *(float *)(iVar1 + 0x38);
    switch(*(undefined4 *)(unaff_ESI + 0x18)) {
    case 1:
    case 7:
    case 9:
      iVar3 = FUN_005461c0(*(undefined4 *)(unaff_ESI + 0x24),1,0);
      param_1 = (float)(int)*(short *)(iVar3 + 0x44) * param_1;
      *(float *)(iVar1 + 0x38) = param_1;
      break;
    case 2:
      *(float *)(iVar1 + 0x38) = param_1;
    }
    if (((int)(_DAT_006ccae0)) + param_1 < fVar2) {
      *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
    }
    else if (fVar2 < param_1 - _DAT_006ccae0) {
      *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
      return;
    }
  }
  return;
}
