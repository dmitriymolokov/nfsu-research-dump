/* spd-match: far pct=17.78 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_00554F60 */
#include <windows.h>
extern void FUN_004fa050();
extern void FUN_004b2b40();
extern int FUN_00554350();
void __fastcall FUN_00554f60(int p1, int edx_unused, unsigned int p2, int p3) {
    if (p2 == 0x406415e3) {
        FUN_004fa050();
        FUN_004b2b40();
    }
    int local_res = FUN_00554350();
    if (p2 < 0xaabbccde) {
        if (p2 == 0xaabbccdd) return;
    }
}
