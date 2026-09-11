/* spd-match: far pct=6.19 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_006ffdbc;
extern int _DAT_006cc8a8;
extern int _DAT_00735f68;

struct ThisCallBox {
  undefined4 FUN_0047b290(float param_2);
};
undefined4 ThisCallBox::FUN_0047b290(float param_2) {
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(uint *)(((int)this) + 0x34);
  fVar2 = DAT_006ffdbc * param_2 * *(float *)(((int)this) + 0x5c);
  if ((char)uVar1 < '\0') {
    return 0x80;
  }
  if ((uVar1 & 0x10) != 0) {
    fVar3 = fVar2 + *(float *)(((int)this) + 100);
    *(float *)(((int)this) + 100) = fVar3;
    if (fVar3 <= *(float *)(((int)this) + 0x60)) {
      if (fVar3 < DAT_006cc7a4) {
        *(undefined4 *)(((int)this) + 100) = *(undefined4 *)(((int)this) + 0x60);
      }
    }
    else {
      *(undefined4 *)(((int)this) + 100) = 0;
    }
  }
  if ((uVar1 & 0x20) != 0) {
    fVar3 = fVar2 + *(float *)(((int)this) + 100);
    if (*(float *)(((int)this) + 0x60) < fVar3) {
      return 0x20;
    }
    *(float *)(((int)this) + 100) = fVar3;
    if (fVar3 <= *(float *)(((int)this) + 0x60)) {
      if (fVar3 < DAT_006cc7a4) {
        *(undefined4 *)(((int)this) + 100) = 0;
      }
    }
    else {
      *(undefined4 *)(((int)this) + 100) = *(undefined4 *)(((int)this) + 0x60);
    }
  }
  if ((uVar1 & 0x40) != 0) {
    fVar3 = fVar2 + *(float *)(((int)this) + 100);
    *(float *)(((int)this) + 100) = fVar3;
    if (fVar3 <= *(float *)(((int)this) + 0x60)) {
      if (fVar3 < DAT_006cc7a4) {
        *(undefined4 *)(((int)this) + 100) = 0;
        *(float *)(((int)this) + 0x5c) = *(float *)(((int)this) + 0x5c) * _DAT_006cc8a8;
      }
    }
    else {
      if (*(float *)(((int)this) + 0x68) <= DAT_006cc7a4) {
        fVar2 = *(float *)(((int)this) + 0x5c) * _DAT_006cc8a8;
        *(undefined4 *)(((int)this) + 100) = *(undefined4 *)(((int)this) + 0x60);
        *(float *)(((int)this) + 0x5c) = fVar2;
        return 0;
      }
      fVar2 = fVar2 + *(float *)(((int)this) + 0x6c);
      *(undefined4 *)(((int)this) + 100) = *(undefined4 *)(((int)this) + 0x60);
      *(float *)(((int)this) + 0x6c) = fVar2;
      if (((int)(_DAT_00735f68)) + *(float *)(((int)this) + 0x68) < fVar2) {
        *(undefined4 *)(((int)this) + 0x6c) = 0;
        *(float *)(((int)this) + 0x5c) = *(float *)(((int)this) + 0x5c) * _DAT_006cc8a8;
        return 0;
      }
    }
  }
  return 0;
}
