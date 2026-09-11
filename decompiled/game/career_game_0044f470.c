/* spd-match: far pct=4.85 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0044f1b0(...);
extern int DAT_006cc7a4;
extern int _DAT_006b7600;
extern int _DAT_006b7604;
extern int _DAT_006cc798;
extern int _DAT_006cc7b8;
extern int _DAT_006ccd98;

struct ThisCallBox {
  float FUN_0044f470(int param_2, float param_3, float param_4, float *param_5, float *param_6);
};
float ThisCallBox::FUN_0044f470(int param_2, float param_3, float param_4, float *param_5, float *param_6) {
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *param_5 = -1.0;
  iVar2 = (int)(char)((int *)this)[0xe2];
  local_1c = *((int *)this);
  local_c = (float)((int *)this)[iVar2 * 0xe + 4];
  local_4 = (float)((int *)this)[iVar2 * 0xe + 5];
  local_8 = (float)((int *)this)[iVar2 * 0xe + 6];
  iVar2 = iVar2 + -1;
  local_10 = 0.0;
  local_18 = 99999.0;
  local_14 = 99999.0;
  if (-1 < iVar2) {
    pfVar3 = (float *)(((int *)this) + iVar2 * 0xe + 4);
    do {
      if ((param_2 < 0) || (4 < param_2)) {
        fVar1 = DAT_006cc7a4;
        if ((10 < param_2) && (param_2 < 0x11)) {
          fVar1 = pfVar3[param_2 + -7];
        }
      }
      else {
        fVar1 = pfVar3[3];
      }
      if (ABS(fVar1 - param_3) <= ((int)(_DAT_006b7604)) + local_c + *pfVar3) {
        local_30 = ((pfVar3[2] - pfVar3[1]) - local_8) - local_4;
        if (local_30 <= DAT_006cc7a4) {
          local_30 = 0.0;
        }
        if (_DAT_006ccd98 <= pfVar3[-1]) {
          local_24 = 99999.0;
        }
        else {
          local_24 = local_30 / ABS(pfVar3[-1]);
        }
        local_2c = 99999.0;
        local_20 = 99999.0;
        FUN_0044f1b0(local_1c,&local_2c,&local_20);
        if (local_24 < local_20) {
          local_20 = local_24;
        }
        if (local_2c <= local_30) {
          local_28 = local_2c;
        }
        else {
          local_28 = local_30;
        }
        fVar1 = DAT_006cc7a4;
        if ((((local_30 < param_4 != (local_30 == param_4)) ||
             (fVar1 = DAT_006cc7a4, local_2c < param_4 != (local_2c == param_4))) ||
            (((local_30 < _DAT_006b7600 != (local_30 == _DAT_006b7600) ||
              (local_2c < _DAT_006b7600 != (local_2c == _DAT_006b7600))) &&
             (fVar1 = DAT_006cc7a4, *(float *)(local_1c + 0x3d4) < _DAT_006cc7b8)))) ||
           (fVar1 = local_20, local_20 < _DAT_006cc798)) {
          local_18 = fVar1;
          local_10 = pfVar3[0xb];
          local_14 = local_28;
          break;
        }
      }
      iVar2 = iVar2 + -1;
      pfVar3 = pfVar3 + -0xe;
    } while (-1 < iVar2);
  }
  *param_5 = local_18;
  *param_6 = local_14;
  return local_10;
}
