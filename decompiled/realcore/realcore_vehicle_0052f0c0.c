/* spd-match: far pct=40.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0052F0C0 */
#include <math.h>
extern float DAT_006b6478;
extern float _DAT_006b6474;
void FUN_0052f0c0(void) {
    int esi_val;
    int idx;
    int* ptr204;
    float f_abs;
    esi_val = 0;
    idx = *(int*)(esi_val + 0xcc);
    *(int*)(esi_val + 0x44 + idx * 4) = 0;
    ptr204 = *(int**)(esi_val + 0x204);
    if (*(ptr204 + (0x188 / 4)) == 1) {
        int ecx = (idx - 1) & 1;
        f_abs = *(float*)( (char*)ptr204 + (ecx + (idx * 2) + 0x40) * 4 );
        if (f_abs < 0.0f) f_abs = -f_abs;
        if (f_abs > DAT_006b6478) f_abs = DAT_006b6478;
    }
}
