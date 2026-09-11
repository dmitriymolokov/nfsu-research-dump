/* spd-match: far pct=24.47 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0055BF60 */
#include <windows.h>

extern void* ExceptionList;
void* __stdcall FUN_0067121a(unsigned int);
int __stdcall FUN_0055bfc0(void*, int);

int __stdcall FUN_0055bf60(int p1) {
    void* p = NULL;
    int res = 0;
    __try {
        p = FUN_0067121a(0x898);
        if (p) {
            res = FUN_0055bfc0(p, p1);
        }
    } __except(1) {
        res = 0;
    }
    return res;
}
