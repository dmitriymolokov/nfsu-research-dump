/* spd-match: close pct=87.69 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00577D80 */
#include "ghidra_compat.h"
void __fastcall FUN_00577d80(int ecx) {
    int eax, edx, esi, edi;
    esi = *(int *)(ecx + 0x2c);
    while (1) {
        if (esi) eax = esi - 4; else eax = 0;
        if (ecx + 0x2c) edx = (ecx + 0x2c) - 4; else edx = 0;
        if (eax == edx) break;
        esi = *(int *)(eax + 4);
    }
    esi = *(int *)(ecx + 0x20);
    edi = ecx + 0x20;
    while (esi != edi) {
        FUN_00577d80(esi);
        esi = *(int *)esi;
    }
}
