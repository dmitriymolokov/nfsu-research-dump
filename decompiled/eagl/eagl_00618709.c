/* spd-match: far pct=18.57 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00618709 */
#include "ghidra_compat.h"
int __fastcall FUN_00618709(int* ecx) {
    int* ebx = ecx;
    int edi = *(int*)((char*)ebx + 0x98);
    int esi = * (int*)edi & 0xffffff;
    int eax = esi | 0x25000000;
    int local_stack[0x3c/4];
    local_stack[(-8)/4] = esi;
    local_stack[(-0xc)/4] = (int)ebx;
    local_stack[(-0x10)/4] = edi;
    local_stack[(-0x18)/4] = esi;
    local_stack[(-0x34)/4] = eax;
    return 0;
}
