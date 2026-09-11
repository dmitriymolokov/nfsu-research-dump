/* spd-match: far pct=6.74 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.4-float/va_0062AA30 */
#include <windows.h>
void __stdcall FUN_0062aa30(int pThis, float f1, float f2, int p4) {
    float* p = (float*)pThis;
    float sub1 = p[0x20/4];
    float limit = p[0x70/4];
    if ((f2 < limit) != (f2 == limit)) {
        int* vtbl = *(int**)(pThis + 0x18);
        void (__stdcall *func)(float, float, int) = (void (__stdcall *)(float, float, int))vtbl[3];
        func(f1 - sub1, f2 - sub1, p4);
    }
}
