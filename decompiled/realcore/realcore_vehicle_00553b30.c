/* spd-match: far pct=12.12 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00553B30 */
#include "ghidra_compat.h"
extern float DAT_0073ad3c;
extern int* esi;
unsigned char FUN_00553b30(int val, int p1, int p2, int p3)
{
  float fVal = (float)(DAT_0073ad3c - (float)esi[0x71]);
  if (fVal > 0.0f) {
     esi[0x71] = (int)DAT_0073ad3c;
  }
  return 1;
}
