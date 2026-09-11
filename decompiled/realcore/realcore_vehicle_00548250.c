/* spd-match: far pct=21.15 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00548250 */
#include "ghidra_compat.h"
int __cdecl FUN_004389b0(int a1);
int __cdecl FUN_004392a0();
int __cdecl FUN_0043b090(int a1, int a2, int a3);
int __cdecl FUN_00548340();
int __cdecl FUN_005487c0(int a1, int a2);
int __cdecl FUN_00548840(int a1);
int __cdecl FUN_005488d0(int a1);
extern int DAT_006f3d94;
extern int DAT_006f3d9c;
extern int DAT_007354e0;
extern int DAT_006f3d90;
void __cdecl FUN_00548250(int val) {
    char buf[0x20];
    FUN_005488d0(0x20);
    DAT_006f3d90 = 0;
    FUN_005488d0(0x20);
    DAT_006f3d94 = 0;
    FUN_005488d0(0x20);
    DAT_006f3d9c = val;
    FUN_0043b090(0, val, val);
    FUN_00548340();
    DAT_007354e0 = 3;
    FUN_004392a0();
    FUN_004389b0(0xc);
    FUN_00548840(DAT_007354e0);
    FUN_005487c0(0xc, 1);
}
