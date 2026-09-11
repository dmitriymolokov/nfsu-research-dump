/* spd-match: far pct=18.18 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0061A6FD */
#include <windows.h>
int __stdcall FUN_005f7a5c(int, int *);
int __cdecl FUN_0061a3fb(int, int, int, int, int, int, int, int, int, int);
void __fastcall FUN_0061a6fd(int param_1) {
    int out[2];
    int *p = *(int **)(param_1 + 0x98);
    int v0 = *p;
    int v3 = p[3];
    int v4 = p[4];
    FUN_005f7a5c(0, &out[1]);
    FUN_005f7a5c(1, &out[0]);
    FUN_0061a3fb(0x10042, v4, v3, out[0], out[1], 0, v0 & 0xffffff, 0, 0, 0);
}
