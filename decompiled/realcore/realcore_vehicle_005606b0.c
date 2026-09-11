/* spd-match: far pct=26.37 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005606B0 */
#include <windows.h>
extern void *ExceptionList;
extern void *__cdecl _malloc(size_t);
extern int __stdcall FUN_00560710(void *p, int arg);
int __stdcall FUN_005606b0(int arg1) {
    void *p = NULL;
    int res = 0;
    __try {
        p = _malloc(0x44);
        if (p != NULL) {
            res = FUN_00560710(p, arg1);
        }
    } __except(0x687623) {
        res = 0;
    }
    return res;
}
