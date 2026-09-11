/* spd-match: far pct=19.79 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00625DB0 */
#include <stddef.h>
extern void __cdecl FUN_006245e0(int, int, int, int);
extern void __cdecl FUN_00624470(int, int, int, int);
extern void __cdecl FUN_0063f1b0(int, int, int);
void FUN_00625db0(int a, int b, int c, int d, int e, int f) {
    int i = 0;
    int limit1 = d;
    int limit2 = d + e;
    int limit3 = d + e + f;
    if (limit1 > 0) {
        int ptr = b;
        do {
            FUN_006245e0(i, a, ptr, c);
            ptr += 0x40;
            i++;
        } while (i < limit1);
    }
    while (i < limit2) {
        FUN_00624470(i, a, i * 0x40 + b, c);
        i++;
    }
    while (i < limit3) {
        unsigned int* p = (unsigned int*)(i * 0x10 + c);
        FUN_0063f1b0(i * 0x40 + b, (*p & 0xff) * 0x40 + a, 0x40);
        i++;
    }
}
