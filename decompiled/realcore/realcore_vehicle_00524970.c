/* spd-match: far pct=39.25 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00524970 */
#include "ghidra_compat.h"
void __cdecl FUN_0052e3f0(void);
void __cdecl FUN_00532640(void);
void __cdecl FUN_00532670(int a, int b, int c, int d);
extern int DAT_0078eae8;
extern int _DAT_0073565c;
extern int PTR_FUN_006bf150;
extern int PTR_LAB_006bf124;
extern void* esi_ptr;
void FUN_00524970(void) {
    char* base = (char*)esi_ptr;
    int v;
    *(int*)(base + 0xc) = 0;
    *(int*)(base + 0x10) = 0;
    FUN_0052e3f0();
    *(int*)(base + 0x234) = 0;
    *(base + 0x248) = 0;
    *(int*)(base + 0x230) = 0;
    *(int*)(base + 0x240) = 0;
    *(int*)(base + 0x244) = 0;
    *(int*)base = PTR_FUN_006bf150;
    *(int*)(base + 0x20) = PTR_LAB_006bf124;
    FUN_00532640();
    v = (DAT_0078eae8 + 1) & 0x80000001;
    *(base + 0x2f8 + 0x78) = 1;
    if (v < 0) v = (v - 1 | 0xfffffffe) + 1;
    DAT_0078eae8 = v;
    *(base + 0x31e) = 1;
    *(int*)(base + 0x320) = 0;
    *(int*)(base + 0x324) = 0;
    *(int*)(base + 0x300) = 0;
    *(int*)(base + 0x304) = 0;
    *(int*)(base + 0x314) = 0;
    *(int*)(base + 0x30c) = 0;
    *(base + 0x31c) = 0;
    *(base + 0x31d) = 0;
    *(base + 0x2f4) = 0;
    FUN_00532640();
    FUN_00532670(0x3f800000, 0x3f800000, 1, 0);
    *(int*)(base + 0x2f8 + 0x74) = 0x3f800000;
    *(int*)(base + 0x2f8) = 0;
    *(int*)(base + 0x2fc) = 0;
    _DAT_0073565c = 0;
}
