/* spd-match: far pct=26.67 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_00557530 */
#include <windows.h>
#include <malloc.h>
void *FUN_00557590(void *ptr);
int FUN_00557530() {
    void *p;
    int result = 0;
    __try {
        p = malloc(0x48);
        if (p != 0) {
            result = (int)FUN_00557590(p);
        }
    } __finally {
        if (p == 0) result = 0;
    }
    return result;
}
