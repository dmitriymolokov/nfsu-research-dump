/* spd-match: far pct=14.86 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00615B5D */
#include <stdlib.h>
int __cdecl FUN_0061319b(void*, int, int, int);
int __cdecl FUN_00615aff(int);
int __cdecl FUN_00615b5d(int p1, int* esi, int p3, int* p4) {
    if (!p4) return 0;
    while (esi && esi[1] != 1) {
        if (esi[1] == 7) {
            p3 *= esi[5];
            esi = (int*)esi[4];
        } else {
            return -2147418117;
        }
    }
    return 0;
}
