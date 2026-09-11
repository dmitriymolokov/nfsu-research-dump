/* spd-match: far pct=15.38 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_00582CF0 */
#include <math.h>
extern int FUN_00582c60(void* esi, int idx);
extern float DAT_006cc7a4;
extern float _DAT_006cc7bc;
extern float _DAT_006cc7dc;
extern float _DAT_006cc8a8;
float FUN_00582cf0(float p1, float p2) {
    float f_val = 0.0f;
    int* edi = 0;
    float* esi = 0;
    if (edi[1] > 1) {
        f_val = (float)FUN_00582c60(esi, 0);
        f_val -= p1;
    }
    return f_val;
}
