/* spd-match: far pct=4.44 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00567740 */
#include "ghidra_compat.h"
void __fastcall FUN_00567740(float * obj, float *param_1, float *param_2) { volatile float *o = obj; volatile float *p1 = param_1; volatile float *p2 = param_2; float v0 = o[0]; float v1 = o[1]; float v2 = o[2]; if (v0 < p1[0]) p1[0] = v0; if (v1 < p1[1]) p1[1] = v1; if (v2 < p1[2]) p1[2] = v2; if (p2[0] < v0) p2[0] = v0; if (p2[1] < v1) p2[1] = v1; if (p2[2] < v2) p2[2] = v2; }
