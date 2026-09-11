/* spd-match: far pct=10.42 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0053F5F0 */
#include <windows.h>
int __fastcall FUN_0053f5f0(int obj, float* p1, float* p2) {
  int* s = *(int**)(obj + 0xc);
  if (s) {
    float f0 = *(float*)(s + 0x20/4);
    float f1 = *(float*)(s + 0x24/4);
    float f2 = *(float*)(s + 0x28/4);
    p2[0] = f0; p2[1] = f1; p2[2] = f2;
    p1[0] = *(float*)(s + 0x30/4);
    p1[1] = *(float*)(s + 0x34/4);
    p1[2] = *(float*)(s + 0x38/4);
    return 1;
  }
  p2[0] = p2[1] = p2[2] = 0.0f;
  p1[0] = p1[1] = p1[2] = 0.0f;
  return 0;
}
