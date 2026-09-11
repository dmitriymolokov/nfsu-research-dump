/* spd-match: far pct=30.77 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060D89B */
#include <string.h>
extern void *__stdcall sub_6723c0(void *d, void *s, int n);
unsigned int FUN_0060d89b(int *a, int b) {
    char buf[44];
    int *p = (int *)*(int *)(a[0x13] + 0x18);
    memset(buf, 0, 44);
    sub_6723c0(buf, p, 31);
    if (buf[0] == 0) return 0x80004005;
    return 0x80004005;
}
