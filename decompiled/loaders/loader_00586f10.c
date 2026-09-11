/* spd-match: far pct=14.56 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00586F10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7ac;
extern int _DAT_006cc7b4;
extern int _DAT_006cc908;

struct ThisCallBox {
  void FUN_00586f10(int val, float param_2);
};
void ThisCallBox::FUN_00586f10(int val, float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  *(char *)(((int)this) + 0x155) = (char)val;
  if (val != 0) {
    fVar1 = -*(float *)(*(int *)(((int)this) + 0x14) + 0x10);
    *(float *)(((int)this) + 0x130) = fVar1 * *(float *)(((int)this) + 0x140) + *(float *)(((int)this) + 0xa0);
    *(float *)(((int)this) + 0x134) = fVar1 * *(float *)(((int)this) + 0x144) + *(float *)(((int)this) + 0xa4);
    *(float *)(((int)this) + 0x138) = fVar1 * *(float *)(((int)this) + 0x148) + *(float *)(((int)this) + 0xa8);
  }
  if (DAT_006cc7a4 < param_2) {
    fVar1 = *(float *)(((int)this) + 0x148) * *(float *)(((int)this) + 0x84) -
            *(float *)(((int)this) + 0x88) * *(float *)(((int)this) + 0x144);
    fVar2 = *(float *)(((int)this) + 0x88) * *(float *)(((int)this) + 0x140) -
            *(float *)(((int)this) + 0x148) * *(float *)(((int)this) + 0x80);
    fVar3 = *(float *)(((int)this) + 0x144) * *(float *)(((int)this) + 0x80) -
            *(float *)(((int)this) + 0x84) * *(float *)(((int)this) + 0x140);
    fVar1 = ((fVar2 * *(float *)(((int)this) + 0x88) - fVar3 * *(float *)(((int)this) + 0x84)) *
             *(float *)(((int)this) + 0x140) +
            (fVar3 * *(float *)(((int)this) + 0x80) - fVar1 * *(float *)(((int)this) + 0x88)) *
            *(float *)(((int)this) + 0x144) +
            (fVar1 * *(float *)(((int)this) + 0x84) - fVar2 * *(float *)(((int)this) + 0x80)) *
            *(float *)(((int)this) + 0x148)) * _DAT_006cc908 - _DAT_006cc7ac;
    if (fVar1 < _DAT_006cc7b4) {
      fVar1 = _DAT_006cc7b4;
    }
    *(float *)(((int)this) + 0x158) = fVar1 * param_2;
    return;
  }
  *(undefined4 *)(((int)this) + 0x158) = 0;
  return;
}
