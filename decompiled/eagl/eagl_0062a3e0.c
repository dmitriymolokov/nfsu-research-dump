/* spd-match: far pct=11.11 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0062A3E0 */
#include <stddef.h>
typedef unsigned char byte;
typedef unsigned int uint;
extern void __stdcall FUN_00629140(float p1, int p2, int p3, int p4);
void FUN_0062a3e0(int count, float scale, int s1, int s2, int d, int m) {
    if (m == 0) {
        if (count > 0) {
            do {
                FUN_00629140(scale, s1 + 0x10, s2 + 0x10, d + 0x10);
                *(float*)(d + 0x20) = (*(float*)(s2 + 0x20) - *(float*)(s1 + 0x20)) * scale + *(float*)(s1 + 0x20);
                *(float*)(d + 0x24) = (*(float*)(s2 + 0x24) - *(float*)(s1 + 0x24)) * scale + *(float*)(s1 + 0x24);
                *(float*)(d + 0x28) = (*(float*)(s2 + 0x28) - *(float*)(s1 + 0x28)) * scale + *(float*)(s1 + 0x28);
                s1 += 0x30; s2 += 0x30; d += 0x30;
            } while (--count != 0);
        }
    } else {
        int i = 0;
        do {
            if (*(uint*)(m + (i >> 5) * 4) & (1 << (i & 0x1f))) {
                FUN_00629140(scale, s1 + 0x10, s2 + 0x10, d + 0x10);
                *(float*)(d + 0x20) = (*(float*)(s2 + 0x20) - *(float*)(s1 + 0x20)) * scale + *(float*)(s1 + 0x20);
                *(float*)(d + 0x24) = (*(float*)(s2 + 0x24) - *(float*)(s1 + 0x24)) * scale + *(float*)(s1 + 0x24);
                *(float*)(d + 0x28) = (*(float*)(s2 + 0x28) - *(float*)(s1 + 0x28)) * scale + *(float*)(s1 + 0x28);
            }
            s1 += 0x30; s2 += 0x30; d += 0x30;
        } while (++i < count);
    }
}
