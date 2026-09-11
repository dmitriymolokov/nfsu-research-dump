/* spd-match: far pct=25.71 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00574EB0 */
#include "ghidra_compat.h"
extern float _DAT_00704500, _DAT_006cc8a8, DAT_0073b220;
extern int DAT_007345c8;
void FUN_00574eb0(void) {
  float f1, f2, f3;
  if (DAT_007345c8) {
    f1 = _DAT_00704500 * _DAT_006cc8a8;
    DAT_0073b220 = f1;
    DAT_007345c8 = 0;
  }
}
