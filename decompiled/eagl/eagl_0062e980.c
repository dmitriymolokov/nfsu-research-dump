/* spd-match: far pct=29.65 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0062E980 */
#include "ghidra_compat.h"
extern float _DAT_006a827c;
struct ThisCallBox {
  void FUN_0062e980(int param_2, float *param_3);
};
void ThisCallBox::FUN_0062e980(int param_2, float *param_3) {
  float *p = param_3;
  int idx;
  p[2] = 0.0f; p[1] = 0.0f; p[0] = 0.0f;
  if (*(char *)(param_2 + 0x18) == 0) {
    idx = *(byte *)this >> 4;
    p[0] = ((float)idx * *(float *)(param_2 + 0x10) * _DAT_006a827c) + *(float *)(param_2 + 8);
  } else if (*(char *)(param_2 + 0x18) == 1) {
    idx = *(byte *)this >> 4;
    p[1] = ((float)idx * *(float *)(param_2 + 0x10) * _DAT_006a827c) + *(float *)(param_2 + 8);
  } else {
    idx = *(byte *)this >> 4;
    p[2] = ((float)idx * *(float *)(param_2 + 0x10) * _DAT_006a827c) + *(float *)(param_2 + 8);
  }
  idx = *(byte *)this & 0xf;
  p[3] = ((float)idx * *(float *)(param_2 + 0x14) * _DAT_006a827c) + *(float *)(param_2 + 0xc);
}
