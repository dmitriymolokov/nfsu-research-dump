/* spd-match: far pct=17.42 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00562390 */
#include <windows.h>
extern int __cdecl FUN_004f68c0(int, const char*, int);
extern int __cdecl FUN_004fd230(void*);
extern int __cdecl FUN_004f65d0(int);
extern int __cdecl FUN_004ffb70(int, int);
extern int __cdecl FUN_004ef050(int, int);
extern void __stdcall FUN_00417530(int, int);
int* const DAT_0073578c = (int*)0x73578c;
void __stdcall FUN_00562390(int p1, int p2, int p3) {
    int esi = *(int*)(p2 + 0xc);
    int edi;
    char buf[32];
    FUN_004f68c0(32, (char*)0x6bc89c, p1);
    edi = FUN_004fd230(&buf[8]);
    if (esi != 0 && FUN_004f65d0(esi) && FUN_004ffb70(edi, esi)) {
        FUN_00417530(p3, edi);
    } else if (*DAT_0073578c != 0) {
        FUN_00417530(p3, FUN_004ef050(esi, edi));
    } else {
        FUN_00417530(p3, 0);
    }
}
