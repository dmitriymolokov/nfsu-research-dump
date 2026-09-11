/* spd-match: far pct=17.50 flags=/O1 /Gr /c /nologo /TP method=m39 source=m39/m39/va_0060CDF7 */
#include <windows.h>

extern "C" void __cdecl FUN_005fbec8(void* pThis, int a, int b, const char* c);

extern "C" int FUN_0060cdf7(int p1, int* p2, unsigned int p3, unsigned int* p4) {
    int ecx_val = p1;
    unsigned int uVar4 = 0, local_8 = 0;
    if ((p3 == 0) || (**(int**)(*(int*)(p1 + 0x14) + *p2 * 4) != *(int*)(p1 + 0x5c))) {
        if ((*(unsigned char*)(*(int*)(*(int*)(p1 + 0x14) + *p2 * 4) + 0x21) & 2) != 0) local_8 = 0x100000;
        while (uVar4 < p3) {
            int val = *(int*)(*(int*)(*(int*)(p1 + 0x14) + p2[uVar4] * 4) + 0xc);
            unsigned int mask = (val == 0) ? 0x10000 : (val == 1) ? 0x20000 : (val == 2) ? 0x40000 : (val == 3) ? 0x80000 : 0;
            if (local_8 & mask) FUN_005fbec8((void*)p1, *(int*)(*(int*)(p1 + 0x98) + 0x34), 0x12d5, "internal error: overlapping output writes");
            local_8 |= mask;
            uVar4++;
        }
    } else local_8 = 0xf0000;
    *p4 = local_8;
    return 0;
}
