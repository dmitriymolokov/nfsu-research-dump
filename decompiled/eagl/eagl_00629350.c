/* spd-match: far pct=12.28 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00629350 */
#include <math.h>
extern const float DAT_006cc7a4;
extern const float DAT_006a7eb0;
int FUN_00629350(float f) {
  if (f < DAT_006cc7a4) {
    f -= DAT_006a7eb0;
    return (int)f;
  } else {
    f += DAT_006a7eb0;
    return (int)f;
  }
}
