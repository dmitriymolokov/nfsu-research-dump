/* spd-match: far pct=6.38 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_00629C20 */
#include "ghidra_compat.h"
struct State { int _[16]; };
int __cdecl FUN_00629140(float, int, int, int);
int __cdecl FUN_006299a0(float);
int __cdecl FUN_00634180(int, int, int, int, int, int);
int __cdecl FUN_00634b20(int, int, int, int, int, int, int);
extern int DAT_006cc7a4;
extern int* DAT_0070d364;
int FUN_00629c20(State* s, float f, int p3, int p4) {
    int* regs = (int*)s;
    int base = regs[3];
    if (regs[7] == 0) {
        int* v = (int*)(*DAT_0070d364);
        regs[7] = ((int (__stdcall*)(int))v[5])(*(unsigned short*)(*(int*)(base + 4)) * 2);
    }
    regs[4] = FUN_006299a0(f);
    return 1;
}
