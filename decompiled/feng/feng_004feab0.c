/* spd-match: far pct=1.33 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142746Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

extern int _DAT_006b6714;

ushort __fastcall FUN_004feab0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  
  fVar1 = *param_1;
  fVar2 = ((int)(_DAT_006b6714)) + *param_2;
  uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
          (ushort)(fVar2 == fVar1) << 0xe;
  if (fVar2 >= fVar1) {
    fVar2 = *param_2 - _DAT_006b6714;
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
      fVar1 = param_1[1];
      fVar2 = ((int)(_DAT_006b6714)) + param_2[1];
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 >= fVar1) {
        fVar2 = param_2[1] - _DAT_006b6714;
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 < fVar1 != (fVar2 == fVar1)) {
          fVar1 = param_1[2];
          if ((fVar1 <= ((int)(_DAT_006b6714)) + param_2[2]) &&
             (fVar2 = param_2[2] - _DAT_006b6714, fVar2 < fVar1 != (fVar2 == fVar1))) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return uVar3;
}
