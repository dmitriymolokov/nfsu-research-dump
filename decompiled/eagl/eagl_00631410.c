/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_00631410 */
#include <math.h>
extern float _DAT_006cc7bc;
void __fastcall FUN_00631410(float *obj, float *param_1, float *param_2, float param_3) {
    float tmp[4];
    float inv_len;
    tmp[0] = (param_2[0] - obj[0]) * param_3 + obj[0];
    tmp[1] = (param_2[1] - obj[1]) * param_3 + obj[1];
    tmp[2] = (param_2[2] - obj[2]) * param_3 + obj[2];
    tmp[3] = (param_2[3] - obj[3]) * param_3 + obj[3];
    inv_len = _DAT_006cc7bc / (float)sqrt(tmp[0] * tmp[0] + tmp[1] * tmp[1] + tmp[2] * tmp[2] + tmp[3] * tmp[3]);
    param_1[0] = inv_len * tmp[0];
    param_1[1] = inv_len * tmp[1];
    param_1[2] = inv_len * tmp[2];
    param_1[3] = inv_len * tmp[3];
}
