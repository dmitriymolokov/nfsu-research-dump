/* spd-match: far pct=16.13 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004361B0 */
#include <windows.h>

extern float DAT_006cc7a4; void __fastcall FUN_004361b0(int p1, int edx, float p3) { int ecx = *(int*)(edx + 8); float f = (float)*(int*)(edx + 0x18) * *(float*)(ecx + 0x18) * *(float*)(edx + 0x38) * p3 + *(float*)(edx + 0x20); float v = *(float*)(ecx + 0x14); if (v <= DAT_006cc7a4) { if (!(DAT_006cc7a4 > v) && !(v > f)) goto L; } else if (!(f > v)) goto L; f = v; L: p3 = *(float*)(ecx + 0x18) * *(float*)(edx + 0x38) * p3; if (f < p3) p3 = f; *(float*)(edx + 0x24) += p3; }
