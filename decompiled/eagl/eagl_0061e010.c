/* spd-match: far pct=10.00 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0061E010 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0061f500(int, const char*, ...);
extern int __cdecl FUN_00672970(const char*, int*);
extern int DAT_006a7290;
extern unsigned char* DAT_007094b8;
extern void* PTR_FUN_006dfa9c;
void __fastcall FUN_0061e010(int* param_1, int param_2) {
    int* pState;
    typedef void* (__cdecl *alloc_func)(int, const char*);
    pState = (int*)((alloc_func)PTR_FUN_006dfa9c)(0x430, "EAGL::HashPointer new");
    if (pState) {
        pState[0] = 0; pState[2] = 0; *((char*)pState + 12) = 0;
        pState[4] = 0; pState[5] = 0; pState[6] = 0; pState[7] = 0;
    }
    return;
}
