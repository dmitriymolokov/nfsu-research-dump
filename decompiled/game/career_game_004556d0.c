/* spd-match: far pct=13.38 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004556D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_005672b0(...);
extern int _DAT_006cc7bc;

struct ThisCallBox {
  int FUN_004556d0(float * obj, float param_2);
};
int ThisCallBox::FUN_004556d0(float * obj, float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  undefined2 extraout_var;
  uint3 uVar5;
  float local_10;
  float local_c;
  
  fVar1 = *obj;
  local_10 = *(float *)(((int)this) + 0x70);
  fVar2 = *(float *)(((int)this) + 0x60);
  local_c = *(float *)(((int)this) + 0x74);
  fVar3 = obj[1];
  fVar4 = *(float *)(((int)this) + 100);
  if (*(float *)(((int)this) + 0x3d4) < _DAT_006cc7bc) {
    local_c = *(float *)(((int)this) + 0x94);
    local_10 = *(float *)(((int)this) + 0x90);
  }
  FUN_005672b0();
  FUN_005672b0();
  fVar1 = local_c * (fVar3 - fVar4) + local_10 * (fVar1 - fVar2);
  uVar5 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar1 < param_2) << 8 |
                           (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                           (ushort)(fVar1 == param_2) << 0xe) >> 8);
  if (fVar1 >= param_2 && (fVar1 == param_2) == 0) {
    return CONCAT31(uVar5,1);
  }
  return (uint)uVar5 << 8;
}
