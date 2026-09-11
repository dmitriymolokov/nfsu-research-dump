/* spd-match: far pct=48.39 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0061F590 */
#include <stddef.h>
extern int __cdecl FUN_0061f340(int a, int* b);
int __stdcall FUN_0061f590(int p1) {
    int ecx = 0; 
    int eax = FUN_0061f340(p1, &p1);
    signed char c = (signed char)p1;
    int mask = (c == 0) ? 0 : -1;
    return eax & mask;
}
