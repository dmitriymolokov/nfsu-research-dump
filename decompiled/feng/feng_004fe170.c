/* spd-match: far pct=14.63 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004FE170 */
#include <stddef.h>
struct Matrix3x3 { float m[4][4]; };
void __fastcall FUN_004fe170(struct Matrix3x3 *eax, float *ecx, float *edx) {
    edx[0] = eax->m[0][9] * ecx[2] + eax->m[0][1] * ecx[0] + eax->m[0][5] * ecx[1] + eax->m[0][13];
    edx[1] = eax->m[0][10] * ecx[2] + eax->m[0][2] * ecx[0] + eax->m[0][6] * ecx[1] + eax->m[0][14];
    edx[2] = eax->m[0][8] * ecx[2] + eax->m[0][4] * ecx[1] + eax->m[0][0] * ecx[0] + eax->m[0][12];
}
