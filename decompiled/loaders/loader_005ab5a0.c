/* spd-match: far pct=2.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_004f66f0();
extern int DAT_00733f28;
extern int DAT_00733f30;
extern int DAT_00733f34;
extern int _DAT_006cc858;
extern int _DAT_006cc8bc;
extern int _DAT_00733f40;

void FUN_005ab5a0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  DWORD DVar4;
  
  if (-1 < DAT_00733f30) {
    DVar4 = timeGetTime();
    fVar2 = (float)(int)(DVar4 - _DAT_00733f40);
    if ((int)(DVar4 - _DAT_00733f40) < 0) {
      fVar2 = fVar2 + _DAT_006cc858;
    }
    if (((int)DAT_00733f28) + 1 < *(int *)(((int)DAT_00733f34) + ((int)DAT_00733f30) * 0x10)) {
      iVar1 = *(int *)(*(int *)(((int)DAT_00733f34) + ((int)DAT_00733f30) * 0x10 + 8) + 4 + ((int)DAT_00733f28) * 4);
      fVar3 = (float)iVar1;
      if (iVar1 < 0) {
        fVar3 = fVar3 + _DAT_006cc858;
      }
      if (fVar3 < fVar2 * ((int)_DAT_006cc8bc)) {
        DAT_00733f28 = ((int)DAT_00733f28) + 1;
        FUN_004f66f0();
        return;
      }
    }
  }
  return;
}
