/* spd-match: far pct=4.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0059d350();
extern int DAT_006cc7a4;
extern int _DAT_006cc7dc;
int unaff_EDI;
int unaff_ESI;

void FUN_004645d0(float param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  fVar1 = (param_1 * *(float *)(unaff_EDI + 0x24) * ((int)_DAT_006cc7dc) + *(float *)(unaff_EDI + 0x20)) *
          param_1 + *(float *)(unaff_EDI + 0x1c);
  FUN_0059d350(&local_20,fVar1,0);
  unaff_ESI[2] = local_18;
  unaff_ESI[1] = local_1c;
  bVar2 = DAT_006cc7a4 <= fVar1;
  *unaff_ESI = local_20;
  if (bVar2) {
    return;
  }
  fVar1 = *(float *)(*(int *)(*(int *)(unaff_EDI + 0x14) + 0x24) + 8);
  if (local_18 < fVar1) {
    unaff_ESI[2] = fVar1;
    return;
  }
  return;
}
