/* spd-match: far pct=22.62 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00568750 */
#include <windows.h>
#include <malloc.h>
extern void* __cdecl FUN_004f78e0(void*, void*);
extern void* PTR_FUN_006bc3ec;
void* __cdecl FUN_00568750(void* param_1) {
    void* p;
    __try {
        void* esi_save = NULL;
        p = malloc(0x40);
        if (p) {
            FUN_004f78e0(p, param_1);
            *(void**)p = &PTR_FUN_006bc3ec;
            esi_save = p;
        }
        return esi_save;
    } __except(1) {
        return NULL;
    }
}
