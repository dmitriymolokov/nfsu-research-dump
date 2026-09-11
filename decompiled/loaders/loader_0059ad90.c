/* spd-match: far pct=6.44 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00405600();
int __cdecl FUN_0041f5f0();
int __cdecl FUN_0041ff50();
int __cdecl FUN_00421550();
int __cdecl FUN_00421960();
int __cdecl FUN_00443d60();
extern int DAT_006b5a38;
extern int DAT_006fbf14;
extern int DAT_00734454;

uint FUN_0059ad90(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float10 fVar3;
  float10 fVar4;
  
  uVar1 = FUN_00421960();
  if (uVar1 == 4) {
    if (((DAT_00734454 != 0) && (DAT_006fbf14 == 0)) && (iVar2 = FUN_0041ff50(), iVar2 != 0)) {
      fVar3 = (float10)FUN_0041f5f0();
      fVar3 = (float10)FUN_00443d60(param_1,(float)fVar3);
      fVar4 = (float10)FUN_00405600((float)fVar3);
      fVar3 = (float10)DAT_006b5a38;
      if (fVar4 < fVar3) {
        return CONCAT31((int3)(CONCAT22(extraout_var,
                                        (ushort)(fVar4 < fVar3) << 8 |
                                        (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                                        (ushort)(fVar4 == fVar3) << 0xe) >> 8),1);
      }
    }
    fVar3 = (float10)FUN_00421550(param_1);
    fVar4 = (float10)FUN_00405600((float)fVar3);
    fVar3 = (float10)DAT_006b5a38;
    uVar1 = CONCAT31((int3)(CONCAT22(extraout_var_00,
                                     (ushort)(fVar4 < fVar3) << 8 |
                                     (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                                     (ushort)(fVar4 == fVar3) << 0xe) >> 8),fVar4 < fVar3);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}
