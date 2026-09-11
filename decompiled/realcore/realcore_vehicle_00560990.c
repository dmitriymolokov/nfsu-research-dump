/* spd-match: far pct=26.60 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00560990 */
#include <windows.h>
extern void *FUN_005609f0(void *a, void *b);
extern void *LAB_00687603;
int FUN_00560990(int a1) {
    int ret = 0;
    void *pv = 0;
    __try {
        pv = (void *)0x687603;
        pv = malloc(0x3d0);
        if (pv != 0) {
            ret = (int)FUN_005609f0(pv, (void *)a1);
        } else {
            ret = 0;
        }
    }
    __finally {
    }
    return ret;
}
