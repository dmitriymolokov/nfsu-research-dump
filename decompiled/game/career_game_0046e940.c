/* spd-match: far pct=8.94 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern unsigned char *DAT_006fff60;
extern int DAT_007361a8;
extern int DAT_0078a344;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006fff58;

struct ThisCallBox {
  void FUN_0046e940(float param_2);
};
void ThisCallBox::FUN_0046e940(float param_2) {
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) &&
     (iVar1 = *(int *)(((int)this) + 0x3c), iVar1 <= *(int *)(((int)this) + 0x38))) {
    *(undefined4 *)(((int)this) + 0x68) = 0;
    fVar3 = DAT_006cc7a4;
    param_2 = *(float *)(((int)this) + 0x80 + iVar1 * 4) - param_2;
    fVar2 = *(float *)(&DAT_006fff60 +
                      (*(int *)(((int)this) + 0xe0) + iVar1 + *(int *)(((int)this) + 0xe0) * 8) * 4) *
            *(float *)(((int)this) + 0xd8);
    if (param_2 < DAT_006cc7a4) {
      if ((_DAT_006cc7bc - _DAT_006fff58) * fVar2 <= ABS(param_2)) {
        *(undefined4 *)(((int)this) + 0x68) = 0xbf800000;
        return;
      }
      *(undefined4 *)(((int)this) + 0x68) = 0x3f800000;
      return;
    }
    fVar2 = _DAT_006cc7bc - param_2 / (_DAT_006fff58 * fVar2);
    if (fVar2 < DAT_006cc7a4) {
      fVar2 = DAT_006cc7a4;
    }
    *(float *)(((int)this) + 0x68) = fVar2;
    if (fVar3 < fVar2) {
      if (_DAT_006cc7dc <= fVar2) {
        *(undefined4 *)(((int)this) + 0x68) = 0x3f59999a;
        return;
      }
      *(undefined4 *)(((int)this) + 0x68) = 0x3f000000;
      return;
    }
  }
  return;
}
