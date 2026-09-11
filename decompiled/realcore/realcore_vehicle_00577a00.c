/* spd-match: far pct=20.09 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00577A00 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00565da0(void*, int);
extern int DAT_007306d0;
extern int DAT_0078ea88;
extern unsigned char *PTR_DAT_006ba6c8;
char* FUN_00577a00(int p1, char* p2, int p3, int p4) {
    int i, j, n;
    char *src, *d;
    char buf[32];
    if (!p2) {
        p2 = (char*)((int)&DAT_007306d0 + (DAT_0078ea88 * 256));
        DAT_0078ea88 = (DAT_0078ea88 + 1) % 3;
        p3 = 256;
    }
    src = *(char**)(*(int*)(p1 + 24) + 12);
    for (i = 0; src && src[i]; i++);
    n = (p3 <= i) ? (p3 - 1) : i;
    d = p2;
    for (j = 0; j < n; j++) if (!(d[j] = src[j])) break;
    d += j;
    if (p4 == -1) p4 = *(int*)(p1 + 20);
    FUN_00565da0(&PTR_DAT_006ba6c8, p4);
    for (i = 0; buf[i]; i++);
    n = (p3 - j <= i) ? (p3 - j - 1) : i;
    for (j = 0; j < n; j++) if (!(d[j] = buf[j])) break;
    d[j] = 0;
    return p2;
}
