/* spd-match: far pct=8.33 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0054BCF0 */
#include <windows.h>

unsigned char __fastcall FUN_0054bcf0(char * obj, int param_1) {
    int *base = (int *)(param_1 + 0x284);
    int *node = (int *)*base;
    unsigned char found = 0;
    if (node == base) return 0;
    do {
        char *p1 = (char *)node + 8;
        char *p2 = obj;
        char c1, c2;
        do {
            c1 = *p1++;
            c2 = *p2++;
        } while (c1 && c2 && (c1 == c2));
        if (c1 == c2) found = 1;
        node = (int *)*node;
    } while (node != base);
    return found;
}
