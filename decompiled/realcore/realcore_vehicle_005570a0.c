/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_005570A0 */
#include <windows.h>
extern int DAT_0073ad3c;
extern bool __cdecl FUN_004abf50();
extern void __cdecl FUN_00413520(int);
extern int __cdecl FUN_004f6bd0(char*, int);
extern void __cdecl FUN_004fd230();
extern void __cdecl FUN_004f64b0(int);
void __stdcall FUN_005570a0(int p1, unsigned int p2, int p3) {
    int* pBase = (int*)p1;
    int iVar1 = pBase[0x44/4];
    if (iVar1 != 0 && iVar1 != 0x7fffffff) {
        if (DAT_0073ad3c < iVar1) return;
        pBase[0x48/4] = 1;
        pBase[0x44/4] = 0;
    }
    if (p2 == 0x70d6a9cf) {
        if (FUN_004abf50()) {
            FUN_00413520(pBase[0xc/4]);
            FUN_004f6bd0("Grayout", 1);
            FUN_004fd230();
            FUN_004f64b0(pBase[0xc/4]);
        } else {
            FUN_004fd230();
            FUN_004f64b0(pBase[0xc/4]);
        }
    }
}
