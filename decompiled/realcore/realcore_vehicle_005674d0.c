/* spd-match: far pct=17.95 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_005674D0 */
#include <windows.h>
void __fastcall FUN_005674d0(float *out, float *in1, float *in2, float val) {
    float f = val;
    out[0] = f * in1[1] + in2[1];
    out[1] = f * in1[2] + in2[2];
    out[2] = f * in1[0] + in2[0];
}
