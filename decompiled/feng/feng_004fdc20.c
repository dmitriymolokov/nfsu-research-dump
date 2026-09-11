/* spd-match: far pct=9.09 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_004fde00(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern void LAB_004fdc79(...);

struct ThisCallBox {
  void FUN_004fdc20(float param_2);
};
void ThisCallBox::FUN_004fdc20(float param_2) {
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2 * *(float *)(((int)this) + 0xa4) + *(float *)(((int)this) + 0xa0);
  bVar3 = DAT_006cc7a4 <= fVar1;
  *(float *)(((int)this) + 0xa0) = fVar1;
  if (bVar3) {
    if (fVar1 <= _DAT_006cc7bc) goto LAB_004fdc79;
    *(undefined4 *)(((int)this) + 0xa0) = 0x3f800000;
  }
  else {
    *(undefined4 *)(((int)this) + 0xa0) = 0;
  }
  *(float *)(((int)this) + 0xa4) = -*(float *)(((int)this) + 0xa4);
LAB_004fdc79:
  if ((*(byte *)(((int)this) + 0x58) & 2) != 0) {
    fVar1 = *(float *)(((int)this) + 0x98);
    fVar2 = *(float *)(((int)this) + 0x9c);
    param_2 = ABS(fVar1 * *(float *)(((int)this) + 0x7c) + fVar2 * *(float *)(((int)this) + 0x80)) * param_2
    ;
    fVar5 = fVar1 * param_2 + *(float *)(((int)this) + 0x6c);
    *(float *)(((int)this) + 0x6c) = fVar5;
    fVar4 = fVar2 * param_2 + *(float *)(((int)this) + 0x70);
    *(float *)(((int)this) + 0x70) = fVar4;
    if ((fVar1 * *(float *)(((int)this) + 0x90) + fVar2 * *(float *)(((int)this) + 0x94)) -
        (fVar5 * fVar1 + fVar4 * fVar2) < DAT_006cc7a4) {
      FUN_004fde00();
    }
  }
  return;
}
