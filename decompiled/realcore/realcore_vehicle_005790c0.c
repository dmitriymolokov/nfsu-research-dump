/* spd-match: far pct=59.38 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005790C0 */
#include "ghidra_compat.h"
extern void __stdcall FUN_00579140(void);
void __stdcall FUN_005790c0(int *p, int p1) {
    int *ecx = (int*)*p;
    int *edx = (int*)*(p + 1);
    *edx = (int)ecx;
    *(int*)((char*)ecx + 4) = (int)edx;
    *(int*)((char*)p + 0xe0) = 0;
    FUN_00579140();
}
