/* spd-match: far pct=10.81 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0061BB00 */
#include <windows.h>

extern volatile int DAT_006df9e8; extern volatile int uRam006df9e0;
extern volatile int uRam006df9e4; extern volatile int uRam006dfa50;

unsigned __int64 FUN_0061bb00(unsigned __int64 x) {
    unsigned int v0 = (unsigned int)x;
    unsigned int v1 = v0 & uRam006df9e0;
    unsigned int v2 = v0 & uRam006df9e4;
    unsigned int r = (v1 | DAT_006df9e8);
    if ((int)uRam006dfa50 < (int)r) {
        r -= 0;
    }
    return (unsigned __int64)r;
}
