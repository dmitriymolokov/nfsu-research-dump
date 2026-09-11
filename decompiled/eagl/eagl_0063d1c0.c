/* spd-match: far pct=11.46 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063D1C0 */
#include <windows.h>
struct State { unsigned long a, b, c, d, e, f, g, h, i; };
extern int __cdecl FUN_0063d0a0();
extern int __cdecl FUN_0063d150();
extern int __cdecl FUN_0063e3d0(LPCSTR);
extern unsigned char *DAT_006e75f4;
extern unsigned char *DAT_0070f48c;
int __cdecl FUN_0063d1c0(LPCSTR p1, unsigned int p2, unsigned int *p3) {
    unsigned int idx = FUN_0063d0a0();
    unsigned int *base = (unsigned int *)(DAT_0070f48c + idx * 36);
    base[2] = p2;
    base[0] = 0x80;
    if (p2 & 1) base[6] = 0x80000000; else base[6] = 0xc0000000;
    base[7] = (p2 & 1) ? 1 : 0;
    if (p2 & 2) base[8] = (p2 & 4) ? 2 : 1; else base[8] = (p2 & 4) ? 3 : 3;
    return 1;
}
