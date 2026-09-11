/* spd-match: far pct=9.72 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00567890 */
#include <windows.h>
void __fastcall FUN_00567890(float* p1, float* p2, float* p3) {
  float tmp[5];
  tmp[0] = p1[0]; tmp[1] = p1[1]; tmp[2] = p1[2];
  tmp[3] = p2[0]; tmp[4] = p2[1];
  if (p2[0] > p3[0]) p2[0] = p3[0];
  if (p2[1] > p3[1]) p2[1] = p3[1];
  if (p2[2] > p3[2]) p2[2] = p3[2];
  if (p3[0] < tmp[0]) p3[0] = tmp[0];
  if (p3[1] < tmp[1]) p3[1] = tmp[1];
  if (p3[2] < tmp[2]) p3[2] = tmp[2];
}
