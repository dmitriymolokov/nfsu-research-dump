/* spd-match: far pct=15.76 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005E556B */
#include <windows.h>
extern void __stdcall FUN_006734a0(unsigned int);
extern int __stdcall FUN_005b212b(int, int*);
extern int __stdcall FUN_005b1f01(int, int*, int, const char*, ...);
extern void __stdcall FUN_006734dd(char*, int, char*, int*);
void __stdcall FUN_005e556b(int* p1, char* p2) {
    int* esi;
    int* ebx = p1;
    char buf[0x1000];
    FUN_006734a0(0x1000);
    ebx[0x13] = 1;
    if (memcmp(p2, "syntax error", 13) == 0) {
        esi = ebx + 4;
        FUN_005b212b(2000, esi);
        if (*esi == 9) {
            if (ebx[0x15] == 0x7e7) {
                FUN_005b1f01(*ebx, esi, 0x7e7, (const char*)0x6a3248, ebx[6]);
            }
            if (ebx[0x15] == 0x7e8) {
                FUN_005b1f01(*ebx, esi, 0x7e8, (const char*)0x6a3224, ebx[6]);
            }
        }
    } else {
        FUN_006734dd(buf, 0x1000, p2, (int*)(p2 + 4));
        FUN_005b1f01(*ebx, ebx + 4, 0, (const char*)0x6cc568, buf);
    }
}
