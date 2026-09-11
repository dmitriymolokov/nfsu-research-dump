/* spd-match: far pct=21.88 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_0043F130 */
#include <windows.h>
int FUN_0043f130(const float* a, const float* b) {
    int result;
    float fa = *(float*)((char*)a + 0x10);
    float fb = *(float*)((char*)b + 0x10);
    if (fa < fb) result = 1;
    else result = 0;
    return result;
}
