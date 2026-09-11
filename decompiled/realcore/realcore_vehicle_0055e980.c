/* spd-match: far pct=9.09 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0055E980 */
#include <windows.h>
extern int __cdecl FUN_0055ea40(void* obj);
void __fastcall FUN_0055e980(int edi, void* esi) {
    int* p10 = (int*)((char*)esi + 0x10);
    int* p4 = (int*)((char*)esi + 4);
    int* p14 = *(int**)((char*)esi + 0x14);
    int val;
    int den;
    if (*p10 > 0 && edi <= 0) return;
    *p10 = edi;
    if (edi <= 0) {
        val = p14[0x5c / 4];
        if (val < 1) val = 1;
    } else {
        den = p14[0x5c / 4];
        val = den - (edi / (300 / den));
        if (val < 1) val = 1;
        if (val < 0) { *p10 = -1; }
        if (val > den) val = den;
    }
    if (*p4 != val) {
        *p4 = val;
        FUN_0055ea40(esi);
    }
}
