/* spd-match: far pct=27.66 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0055EBD0 */
#include <windows.h>
extern void* __cdecl _malloc(size_t);
extern int __cdecl FUN_0055ec30(void*, int);
int __cdecl FUN_0055ebd0(int param_1) {
    void* p = _malloc(0x138);
    __try {
        if (p) {
            return FUN_0055ec30(p, param_1);
        }
    } __finally {
        if (!p) return 0;
    }
    return 0;
}
