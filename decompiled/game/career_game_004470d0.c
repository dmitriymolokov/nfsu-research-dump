/* spd-match: far pct=13.39 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_004470D0 */
#include <windows.h>
extern int DAT_0073459c, DAT_007345a0, DAT_007349c8, DAT_006f227c;
extern int __stdcall FUN_0057c5a0(int);
extern int __stdcall FUN_0057c3b0(int, int, int);
extern void __stdcall GetSystemTimeAsFileTime(void*);
extern int __stdcall FUN_006849a0(int, int, int);
void __stdcall FUN_004470d0(void) {
    int edi;
    unsigned int t1, t2, uVar1, uVar3;
    if (DAT_0073459c == 0) {
        GetSystemTimeAsFileTime(&t1);
        edi = FUN_006849a0(t1, t2, DAT_007349c8);
        edi += 0x12345678;
        if (DAT_007345a0 != 0) {
            FUN_0057c3b0(edi, 0x20, 10);
        }
    } else {
        edi = FUN_0057c5a0(10);
    }
    uVar1 = (unsigned int)edi ^ 0x1d872b41;
    uVar3 = (uVar1 >> 5) ^ uVar1;
    DAT_006f227c = (uVar3 << 0x1b) ^ uVar3 ^ uVar1;
}
