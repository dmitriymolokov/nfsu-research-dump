/* spd-match: far pct=9.82 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00549500 */
#include <ctype.h>
void __stdcall FUN_00549500(unsigned char *esi, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4) {
    unsigned char al;
    if (_isgraph(b4)) al = b4; else al = 0x2d;
    *esi = al;
    if (_isgraph(b3)) al = b3; else al = 0x2d;
    *(esi + 1) = al;
    if (_isgraph(b2)) al = b2; else al = 0x2d;
    *(esi + 2) = al;
    if (_isgraph(b1)) { *(esi + 3) = b1; }
    else { *(esi + 3) = 0x2d; }
    *(esi + 4) = 0;
}
