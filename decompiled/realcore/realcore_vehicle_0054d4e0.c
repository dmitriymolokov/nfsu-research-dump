/* spd-match: far pct=20.63 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_0054D4E0 */
#include "ghidra_compat.h"

extern int FUN_0054dd30(int);
extern int FUN_00664aa0(int, int, void*, int);
extern int FUN_00664ac0(int, int, int, void*, int);
extern int FUN_006655c0(void*, int, int);
extern int FUN_00668c50(const char*, int);
extern int DAT_006f1f60;
extern int DAT_00734f80;
extern int _DAT_00734fcc;
extern void LAB_0054dc10(void);
extern char s_ps2nfs04_ea_com_006f1f40[];
int __fastcall FUN_0054d4e0(int val) {
    char buffer[512];
    int res;
    buffer[0] = 0;
    _DAT_00734fcc = val;
    FUN_0054dd30(0x200);
    DAT_00734f80 = FUN_006655c0(buffer, 0, 0);
    res = FUN_00668c50(s_ps2nfs04_ea_com_006f1f40, 10000);
    if (res == 0) return 0;
    FUN_00664aa0(DAT_00734f80, 3, &LAB_0054dc10, 0);
    FUN_00664ac0(DAT_00734f80, res, DAT_006f1f60, &LAB_0054dc10, 0);
    return 1;
}
