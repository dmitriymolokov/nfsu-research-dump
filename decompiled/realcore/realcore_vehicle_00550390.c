/* spd-match: far pct=16.46 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_00550390 */
#include <windows.h>
#pragma pack(push, 1)
struct Data { char pad1[4]; int f4; char pad2[0x10]; int f10; char pad3[4]; int f1c; char pad4[3]; char b24; };
#pragma pack(pop)
extern int __stdcall FUN_004f6910(int arg);
extern int __stdcall FUN_004f6970(int arg);
void __fastcall FUN_00550390(struct Data *esi, int edx, char bl, char dl, char cl) {
    char al = esi->b24;
    if (dl == 0 && cl == 0 && al == bl) return;
    esi->b24 = bl;
    if (al != bl) {
        if (bl) { FUN_004f6970(esi->f4); } else { FUN_004f6910(esi->f4); }
        if (bl) { FUN_004f6970(esi->f1c); } else { FUN_004f6910(esi->f1c); }
    }
}
