/* spd-match: far pct=10.71 flags=/O2 /c /nologo /TC method=m39 source=m39/m4g0-s01/va_00634180 */
#include <windows.h>
void FUN_00634180(unsigned short *param_1, unsigned int param_2, unsigned int param_3, int param_4, int param_5, float *param_6, float *param_7) {
  float *pfVar1 = (float *)(param_1 + param_2 * 6 + 2);
  int iVar13;
  if (param_5 != param_4) {
    if (((param_5 < param_4) || (param_5 == 0)) || (param_4 == -1)) {
      for (iVar13 = 0; iVar13 < (int)param_3; iVar13++) {
        param_7[iVar13] = pfVar1[iVar13 * 3 + 2];
      }
      param_4 = 0;
    } else {
      for (iVar13 = 0; iVar13 < (int)param_3; iVar13++) {
        param_7[iVar13] = param_6[iVar13];
      }
    }
  }
}
