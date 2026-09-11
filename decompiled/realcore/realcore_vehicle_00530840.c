/* spd-match: far pct=14.18 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00530840 */
#include "ghidra_compat.h"
int __cdecl FUN_00421400();
int __cdecl FUN_004664b0();
int __cdecl FUN_0052f650();
int __cdecl FUN_0052f6f0();
void __fastcall FUN_00530840(int *p) {
    float *base = (float *)*(int *)(p + 0x87);
    float v1 = base[9];
    float v2 = base[2];
    p[0x89] = *(int *)&v1;
    p[0x88] = *(int *)&v2;
    p[0x8c] = *(int *)(base + 28);
    p[0x8d] = *(int *)(base + 29);
    p[0x8e] = *(int *)(base + 30);
    p[0xcf] = FUN_0052f6f0();
    p[0xd0] = (*(int (**)(void))(*p + 0x60))();
    p[0xd1] = FUN_0052f650();
    p[0xc0] = (int)(float)FUN_00421400();
    (*(void (**)(void))(*p + 0x38))();
}
