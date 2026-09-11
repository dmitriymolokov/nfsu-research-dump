/* spd-match: far pct=6.85 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_005EA62E */
#include <windows.h>

extern int __cdecl FUN_005e9c6c(int);
extern int __cdecl FUN_005ed576(void*, void*, int);

void* __cdecl FUN_005ea62e(void* arg1, int arg2, void* arg3, int arg4, int arg5, int arg6) {
    float local_stack[72];
    int i = 0;
    int count = arg6;
    if (count > 0) {
        FUN_005e9c6c(arg5);
        do {
            local_stack[i] = (float)i;
            i++;
        } while (i < 72);
        FUN_005ed576(arg1, arg3, arg5);
    }
    return arg1;
}
