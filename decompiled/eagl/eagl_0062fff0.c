/* spd-match: far pct=7.88 flags=/Og /c /nologo /TP method=m39 source=m39/m39/va_0062FFF0 */
#include <stddef.h>
#define byte unsigned char
extern float _DAT_006a8308;
struct ThisCallBox {
  void FUN_0062fff0(float *p_src, float *p_dst);
};
void ThisCallBox::FUN_0062fff0(float *p_src, float *p_dst) {
  byte* b = (byte*)this;
  p_dst[0] = (float)(b[0] >> 2) * p_src[4] * _DAT_006a8308 + p_src[0];
  p_dst[1] = (float)(b[1] >> 2) * p_src[5] * _DAT_006a8308 + p_src[1];
  p_dst[2] = (float)(b[2] >> 2) * p_src[6] * _DAT_006a8308 + p_src[2];
  int v = (((b[0] & 3) << 4) | ((b[1] & 3) << 2) | (b[2] & 3));
  p_dst[3] = (float)v * p_src[7] * _DAT_006a8308 + p_src[3];
}
