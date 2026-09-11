/* spd-match: far pct=6.94 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_0041f5f0();
int __cdecl FUN_00421550();
extern int _DAT_006ccb20;

undefined4 FUN_0059ac80(void)

{
  undefined2 extraout_var;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0041f5f0();
  fVar2 = (float10)FUN_00421550((float)fVar1);
  fVar1 = (float10)_DAT_006ccb20;
  return CONCAT31((int3)(CONCAT22(extraout_var,
                                  (ushort)(fVar2 < fVar1) << 8 |
                                  (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                  (ushort)(fVar2 == fVar1) << 0xe) >> 8),fVar2 < fVar1);
}
