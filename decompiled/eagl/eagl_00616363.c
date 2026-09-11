/* spd-match: far pct=21.95 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00616363 */
#include <windows.h>
unsigned int __stdcall FUN_00616363(int pThis, int* p2, unsigned int p3, unsigned int p4, unsigned int* p5) {
    unsigned int locals[4];
    unsigned int stack_base[4];
    int* obj = (int*)pThis;
    int* table = (int*)obj[5];
    unsigned int idx = 0;
    unsigned int count = 0;
    if (p4 & 0x10000) locals[count++] = 0;
    if (p4 & 0x20000) locals[count++] = 1;
    if (p4 & 0x40000) locals[count++] = 2;
    if (p4 & 0x80000) locals[count++] = 3;
    if (count > p3) count = p3;
    *p5 = 0;
    return 0;
}
