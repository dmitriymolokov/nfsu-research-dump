/* spd-match: far pct=13.80 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00564DB0 */
#include <math.h>
extern float DAT_006cc7a4;
extern float DAT_006ccab0;
extern short __stdcall FUN_00564cd0(float);
short FUN_00564db0(float a, float b) {
    short s;
    float fVar, val;
    s = 0;
    if (a < DAT_006cc7a4) s = 1;
    if (b < DAT_006cc7a4) s ^= 3;
    fVar = (a * a) + (b * b);
    val = 0.0f;
    if ((float)fabs((double)a) <= (float)fabs((double)b)) {
        if (fVar > DAT_006ccab0) {
            if (a != 0.0f) val = (float)fabs((double)a) / (float)sqrt((double)fVar);
        }
        val = (float)(0x4000 - FUN_00564cd0(val));
    } else {
        if (fVar > DAT_006ccab0) {
            if (b != 0.0f) val = (float)fabs((double)b) / (float)sqrt((double)fVar);
        }
        val = (float)FUN_00564cd0(val);
    }
    if (s == 0) return (short)val;
    if (s == 3) return (short)-(short)val;
    if (s == 1) return (short)(-32768 - (short)val);
    return (short)((short)val - 32768);
}
