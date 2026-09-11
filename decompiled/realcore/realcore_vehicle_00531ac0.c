/* spd-match: far pct=11.48 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00531AC0 */
#include <math.h>
extern void __stdcall FUN_00567370(float*, float*);
int __fastcall FUN_00531ac0(int* p) {
  float frame[16];
  int* pA = (int*)(*(p + 0xD8));
  int* pB = (int*)(*(p + 0xD9));
  if (pA && pB) {
    frame[0] = *(float*)((char*)pA + 0x94);
    frame[1] = *(float*)((char*)pB + 0x94);
    FUN_00567370(&frame[0], &frame[1]);
  }
  return 0;
}
