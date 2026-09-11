/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00541C90 */
#include <windows.h>
void __fastcall FUN_00541c90(float *obj, int param_1) {
    float *p = (float *)(param_1 + 0x20);
    int n = 4;
    do {
        float a = p[-4], b = p[0], c = p[4];
        float r0 = a * obj[0] + b * obj[4] + c * obj[8];
        float r1 = a * obj[1] + b * obj[5] + c * obj[9];
        float r2 = a * obj[2] + b * obj[6] + c * obj[10];
        p[-4] = r0; p[0] = r1; p[4] = r2;
        p += 0x20;
    } while (--n);
}
