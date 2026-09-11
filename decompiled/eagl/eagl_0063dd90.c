/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0063DD90 */
#include <stddef.h>
extern int __cdecl FUN_0063dd20(void* p);
int __cdecl FUN_0063dd90(unsigned char* p) {
    int result;
    int type = FUN_0063dd20(p);
    if (type == 1) {
        result = (p[2] << 8) | p[3];
        return result + 4;
    } else if (type >= 2 && type <= 3) {
        result = (p[0xc] << 24) | (p[0xd] << 16) | (p[0xe] << 8) | p[0xf];
        return result;
    }
    return 0;
}
