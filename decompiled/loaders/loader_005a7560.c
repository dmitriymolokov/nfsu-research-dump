/* spd-match: far pct=8.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0077af30;
int unaff_ESI;

float10 FUN_005a7560(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  float10 fVar3;
  
  cVar1 = (char)unaff_ESI[0x17];
  fVar3 = (float10)DAT_006cc7a4;
  if ((cVar1 != -1) && (*(short *)((int)unaff_ESI + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[cVar1];
    }
    iVar2 = *(short *)((int)unaff_ESI + 0x5e) * 0x88 + 0x27c + iVar2;
    if (iVar2 != 0) {
      fVar3 = (**(float10 (**)())(*unaff_ESI + 0x20))(iVar2,param_1);
      fVar3 = fVar3 + (float10)(float)unaff_ESI[0x16];
    }
  }
  return fVar3;
}
