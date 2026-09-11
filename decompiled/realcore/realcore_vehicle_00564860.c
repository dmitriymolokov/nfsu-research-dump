/* spd-match: far pct=35.11 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00564860 */
#include "windows.h"
extern unsigned char *DAT_007349c8;
extern float _DAT_006cc844;
extern float _DAT_006cc848;
extern float _DAT_006cc84c;
extern float _DAT_007301d0;
void FUN_00564860(void) {
LARGE_INTEGER freq;
int count;
float fVar1, fVar2;
QueryPerformanceFrequency(&freq);
_DAT_007301d0 = _DAT_006cc844 / (float)(__int64)freq.QuadPart;
fVar1 = _DAT_007301d0 * _DAT_006cc84c;
count = 0;
DAT_007349c8 = (unsigned char *)count;
while (fVar1 < _DAT_006cc848) {
fVar1 += fVar1;
count++;
}
DAT_007349c8 = (unsigned char *)count;
}
