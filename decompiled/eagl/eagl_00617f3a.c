/* spd-match: far pct=15.00 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00617F3A */
#include <windows.h>
typedef unsigned int uint;
extern int __fastcall FUN_0061742a(int a, int b, int* c, int d, int e);
int __fastcall FUN_00617f3a(int param_1) {
    int i; uint uCount; int* piVar6; int* piVar7;
    uint* p_ecx = (uint*)param_1;
    uint* puVar1 = (uint*)p_ecx[0x26];
    p_ecx[0x3c] = 0;
    if ((*puVar1 & 0xff000000) == 0x25000000) {
        uCount = *puVar1 & 0xffffff;
        piVar6 = (int*)puVar1[2];
        for(i = 0; i < (int)uCount; i++) {
            if(*(int*)(*(int*)(p_ecx[5] + piVar6[i] * 4) + 0x10 + 4) == 0) continue;
        }
    }
    return FUN_0061742a(0x40000, 0x20000, (int*)puVar1[2], 0x40000, 0);
}
