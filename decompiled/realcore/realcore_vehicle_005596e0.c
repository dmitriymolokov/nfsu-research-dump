/* spd-match: far pct=27.47 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005596E0 */
#include <windows.h>
extern void* LAB_00688153;
extern void* __stdcall FUN_00559740(void* p, void* arg);
extern void* _malloc(size_t size);
void* FUN_005596e0(void* param_1) {
    void* pv = 0;
    void* res = 0;
    __try {
        pv = _malloc(0x7c);
        if (pv != 0) {
            res = FUN_00559740(pv, param_1);
            return res;
        }
    }
    __except(1) {
        return 0;
    }
    return 0;
}
