/* spd-match: far pct=4.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

extern int DAT_00713fcc;
extern int DAT_00713fd0;
extern int DAT_00713fd4;
extern int DAT_00713fd8;
extern int DAT_00713fdc;
extern int DAT_00713fe0;

void FUN_006511b0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = ((int)DAT_00713fdc) + (int)DAT_00713fe0;
  if ((uVar1 < DAT_00713fe0) || (uVar1 < DAT_00713fdc)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  uVar2 = uVar1 + iVar5 + (int)DAT_00713fd8;
  uVar3 = uVar2 + (uVar2 < DAT_00713fd8) + (int)DAT_00713fd4;
  uVar4 = uVar3 + (uVar3 < DAT_00713fd4) + (int)DAT_00713fd0;
  DAT_00713fcc = ((int)DAT_00713fcc) + uVar4 + (uVar4 < DAT_00713fd0);
  DAT_00713fe0 = ((int)DAT_00713fe0) + 1;
  DAT_00713fd0 = uVar4;
  DAT_00713fd4 = uVar3;
  DAT_00713fd8 = uVar2;
  DAT_00713fdc = uVar1;
  if ((((DAT_00713fe0 == 0) && (DAT_00713fdc = uVar1 + 1, DAT_00713fdc == 0)) &&
      (DAT_00713fd8 = uVar2 + 1, DAT_00713fd8 == 0)) &&
     ((DAT_00713fd4 = uVar3 + 1, DAT_00713fd4 == 0 && (DAT_00713fd0 = uVar4 + 1, DAT_00713fd0 == 0))
     )) {
    DAT_00713fcc = ((int)DAT_00713fcc) + 1;
  }
  return;
}
