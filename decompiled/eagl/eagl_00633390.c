/* spd-match: far pct=13.92 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00633390 */
#include <windows.h>

extern int __cdecl FUN_006327a0(void* p1, void* p2, void* p3);

void __stdcall FUN_00633390(void* p1, int* p2) {
    int out[2];
    int local_p2_vals[2];
    int local_consts[2];
    local_p2_vals[0] = p2[0];
    local_p2_vals[1] = p2[1];
    local_consts[0] = 0;
    local_consts[1] = 0x3f800000;
    FUN_006327a0((char*)p1 + 0x58, &local_p2_vals[0], &out[0]);
    p2[0] = out[0];
    p2[1] = out[1];
}
