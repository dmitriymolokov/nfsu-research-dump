/* spd-match: far pct=22.62 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005574A0 */
#include <windows.h>
extern void* PTR_FUN_006bcd44;
void __stdcall FUN_004f78e0(void*, void*);
void* __cdecl FUN_005574a0(void* arg1) {
    void* esi_val = 0;
    __try {
        esi_val = (void*)malloc(0x40);
        if (esi_val != 0) {
            FUN_004f78e0(esi_val, arg1);
            *(void**)esi_val = (void*)&PTR_FUN_006bcd44;
        }
    } __except(1) {
        return 0;
    }
    return esi_val;
}
