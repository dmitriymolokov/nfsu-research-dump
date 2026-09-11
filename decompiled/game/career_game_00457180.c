/* spd-match: far pct=5.95 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-ce_types_code/va_00457180 */
#include "ghidra_compat.h"

#ifdef NAN
#undef NAN
#endif
#define NAN(x) ((x)!=(x))

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006ccab0;
undefined4 __fastcall FUN_00457180(float * obj, float *param_1, float *param_2, float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = *param_2 - *param_3;
  fVar6 = obj[1] - param_1[1];
  fVar2 = param_2[1] - param_3[1];
  fVar7 = *obj - *param_1;
  fVar5 = fVar6 * fVar1 - fVar7 * fVar2;
  fVar3 = ABS(fVar5);
  if (fVar3 < _DAT_006ccab0) {
    return CONCAT22((short)((uint)obj[1] >> 0x10),
                    (ushort)(fVar3 < _DAT_006ccab0) << 8 |
                    (ushort)(NAN(fVar3) || NAN(_DAT_006ccab0)) << 10 |
                    (ushort)(fVar3 == _DAT_006ccab0) << 0xe);
  }
  fVar3 = param_3[1] - param_1[1];
  fVar4 = *param_3 - *param_1;
  fVar5 = _DAT_006cc7bc / fVar5;
  fVar6 = (fVar3 * fVar7 - fVar4 * fVar6) * fVar5;
  fVar5 = (fVar3 * fVar1 - fVar4 * fVar2) * fVar5;
  fVar1 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar6) && (fVar1 = fVar6, _DAT_006cc7bc < fVar6)) {
    fVar1 = _DAT_006cc7bc;
  }
  if (fVar6 == fVar1) {
    fVar1 = DAT_006cc7a4;
    if ((DAT_006cc7a4 < fVar5) && (fVar1 = fVar5, _DAT_006cc7bc < fVar5)) {
      fVar1 = _DAT_006cc7bc;
    }
    if (fVar5 == fVar1) {
      return 1;
    }
  }
  return 0;
}
