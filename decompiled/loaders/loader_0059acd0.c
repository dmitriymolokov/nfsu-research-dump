/* spd-match: far pct=4.21 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_0041f550();
int __cdecl FUN_0041f5e0();
int __cdecl FUN_0041ff50();
int __cdecl FUN_004212f0();
int __cdecl FUN_00421960();
extern int DAT_006fbf14;
extern int DAT_00734454;
extern int _DAT_006ccb20;
extern int _DAT_006ccbf8;

uint FUN_0059acd0(void)

{
  float10 fVar1;
  uint uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float10 fVar4;
  
  uVar2 = FUN_00421960();
  if (uVar2 == 4) {
    if (((DAT_00734454 == 0) || (DAT_006fbf14 != 0)) || (iVar3 = FUN_0041ff50(), iVar3 == 0)) {
      fVar4 = (float10)FUN_004212f0();
      fVar1 = (float10)_DAT_006ccb20;
      uVar2 = CONCAT31((int3)(CONCAT22(extraout_var_00,
                                       (ushort)(fVar4 < fVar1) << 8 |
                                       (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                                       (ushort)(fVar4 == fVar1) << 0xe) >> 8),fVar4 < fVar1);
    }
    else {
      FUN_0041f5e0();
      fVar4 = (float10)FUN_0041f550();
      fVar1 = (float10)_DAT_006ccbf8;
      uVar2 = CONCAT31((int3)(CONCAT22(extraout_var,
                                       (ushort)(fVar4 < fVar1) << 8 |
                                       (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                                       (ushort)(fVar4 == fVar1) << 0xe) >> 8),fVar4 < fVar1);
    }
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}
