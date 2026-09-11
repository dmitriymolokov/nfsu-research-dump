/* spd-match: far pct=17.86 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00564FA0 */
#include <windows.h>
extern int __stdcall FUN_00564f00();
int __fastcall FUN_00564fa0(int val, int param) {
    int f = 0;
    int res = 0;
    if (val < 0) { f = 1; val = -val; }
    if (param < 0) { f ^= 3; param = -param; }
    if ((param >> 14) < val) {
        if (val != 0) {
            res = (int)((0x7fffffff / val) * (long)param);
            res = (res << 1);
            res = (unsigned short)FUN_00564f00();
        }
    } else {
        res = 0x4000;
    }
    switch (f) {
        case 0: return res;
        case 1: return 0x8000 - res;
        case 2: return res - 0x8000;
        default: return -res;
    }
}
