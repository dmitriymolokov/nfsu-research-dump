/* spd-match: far pct=24.24 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0057B740 */
#include <windows.h>
extern void* _malloc(size_t size);
extern int FUN_0057b9f0(void* p, int a, int b);
extern void* _except_handler3;
int FUN_0057b740(int param_1, int param_2) {
    void* p = 0;
    int result = 0;
    __try {
        p = _malloc(0x90);
        if (p != 0) {
            result = FUN_0057b9f0(p, param_1, param_2);
        }
    } __except(0x684ceb) {
        result = 0;
    }
    return result;
}
