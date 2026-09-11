/* spd-match: far pct=7.29 flags=/O2 /c /nologo /TC method=m39 source=m39/m4g0-s01/va_0061B3EA */
#include "ghidra_compat.h"
struct FloatVec4 { float a, b, c, d; };
void FUN_0061b3ea(float* p1, float* p2, float* p3) {
struct FloatVec4* v1 = (struct FloatVec4*)p1;
struct FloatVec4* v2 = (struct FloatVec4*)p2;
struct FloatVec4* v3 = (struct FloatVec4*)p3;
v2->a = v1->a * 0.5f; v2->b = v1->b * 0.5f; v2->c = v1->c * 0.5f; v2->d = v1->d * 0.5f;
v3->a = v1->a + v2->a; v3->b = v1->b + v2->b; v3->c = v1->c + v2->c; v3->d = v1->d + v2->d;
}
