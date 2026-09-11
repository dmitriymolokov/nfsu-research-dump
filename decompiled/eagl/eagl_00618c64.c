/* spd-match: far pct=13.04 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00618C64 */
#include <malloc.h>

typedef unsigned int uint;

float __fastcall FUN_00618c64_float(int *param_1) {
    float f = 0.0f;
    int val = param_1[2];
    if (val > 0) {
        f = (float)val;
    }
    return f;
}

int __fastcall FUN_00618c64(int *param_1) {
    float f = FUN_00618c64_float(param_1);
    return (int)f;
}
