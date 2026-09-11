/* spd-match: far pct=8.12 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0060534A */
#include <windows.h>
extern int __fastcall FUN_005f75cb(void*);
extern int __fastcall FUN_00604f3b(void*);
extern int __fastcall FUN_00604ee2(int*, int*, int);
extern int __fastcall FUN_00615991(int*, int*, int);
struct ThisCallBox { char pad0[0x14]; int* f14; int* f10; char pad1[0x0C]; int f30; char pad2[0x58]; int* f98; };
int __fastcall FUN_0060534a(struct ThisCallBox* ecx) {
    int* esi;
    unsigned int uVar7;
    int* local_c;
    int* local_18;
    int iVar6;
    esi = ecx->f98;
    if (!esi) return 0;
    uVar7 = (unsigned int)*esi;
    if (uVar7 == 0) return 0;
    local_c = (int*)(esi[1] / (unsigned int)(uVar7 & 0xFFFFFF));
    local_18 = (int*)0;
    if (((uVar7 & 0xFF000000) == 0x30000000) || ((int*)esi[3] != (int*)(uVar7 & 0xFFFFFF))) {
        iVar6 = FUN_005f75cb(esi);
        if (iVar6 >= 0) { *(int**)esi = 0; return 0; }
        return iVar6;
    }
    *(int**)esi = 0;
    return 0;
}
