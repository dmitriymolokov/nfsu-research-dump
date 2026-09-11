/* spd-match: far pct=27.47 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00556980 */
#include <windows.h>
extern void *__stdcall FUN_005569e0(void *, void *);
extern void *const LAB_00688193;
int __stdcall FUN_00556980(void *arg) {
    int res;
    void *ptr;
    __try {
        ptr = malloc(0x40);
        if (ptr == NULL) {
            res = 0;
        } else {
            res = (int)FUN_005569e0(ptr, arg);
        }
    } __finally {
    }
    return res;
}
