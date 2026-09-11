/* spd-match: far pct=17.97 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00632AF0 */
#include <stdio.h>
typedef float float32;
extern int __cdecl FUN_00629140(void*, void*, void*, void*);
extern int __cdecl FUN_006327a0(void*, void*, void*);
extern void __fastcall FUN_00633740(void*);
int __fastcall FUN_00632af0(void* pThis, void* edx, float* pOut) {
    float fvals[4];
    char scratch[0x40];
    fvals[0] = 0.0f; fvals[1] = 1.0f; fvals[2] = 0.0f; fvals[3] = 1.0f;
    FUN_00633740(*(void**)((char*)pThis + 0x10));
    FUN_00633740(*(void**)((char*)pThis + 0x14));
    FUN_00629140(*(void**)((char*)pThis + 0x18), scratch, scratch+16, scratch+32);
    FUN_006327a0(scratch+32, fvals, pOut);
    return 1;
}
