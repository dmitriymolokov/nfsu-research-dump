/* spd-match: far pct=10.78 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00567940 */
#include <windows.h>
extern float* esi_ptr;
int __fastcall FUN_00567940(float *param_1, float *param_2, float param_3) {
    if ((*param_1 >= *param_2 - param_3) && (*param_1 <= param_3 + *esi_ptr) &&
        (param_1[1] >= param_2[1] - param_3) && (param_1[1] <= param_3 + esi_ptr[1]) &&
        (param_1[2] >= param_2[2] - param_3) && (param_1[2] <= param_3 + esi_ptr[2])) {
        return 1;
    }
    return 0;
}
