/* spd-match: far pct=25.37 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00536EE8 */
#include "ghidra_compat.h"
static volatile int *const a = (int*)0x007366c8;
static volatile int *const b = (int*)0x007366d0;
void __fastcall FUN_00536ee8(int val, int p1, int p2) {
    *(volatile int*)0x007366c8 = 0x41c80000;
    *(volatile int*)0x007366d0 = 0;
    *(volatile int*)0x00736708 = 0x41f00000;
    *(volatile int*)0x007366f4 = p2;
    *(volatile int*)0x007366fc = 0x226;
    *(volatile int*)0x00736728 = 0x42c80000;
    *(volatile int*)0x00736714 = p2;
}
