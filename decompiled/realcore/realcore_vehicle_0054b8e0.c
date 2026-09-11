/* spd-match: far pct=65.52 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054B8E0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00664e00(int, int, char*, void*, int);
extern int __cdecl FUN_00667d70(char*, int, char*, ...);
extern int DAT_0073d868, DAT_0073d8cc, DAT_0073d8d0, DAT_0073dd9c;
extern void LAB_0054cac0(void);
void __fastcall FUN_0054b8e0(int val, int edx_val, int param2, int param3) {
    char buf[128];
    if (val) {
        *(int*)(edx_val + 0x540) = 0xb;
        *(int*)(edx_val + 0x544) = val;
    }
    buf[0] = 0;
    FUN_00667d70(buf, 128, "PRIV=%s ATTR=%f TEXT=%s", edx_val, 0x10000020, edx_val);
    if (DAT_0073d8d0) {
        FUN_00664e00(DAT_0073d8d0, 0x6d657367, buf, &LAB_0054cac0, 0);
    }
    if ((char)param3 == 1) {
        DAT_0073d8cc &= ~2;
        DAT_0073dd9c = -1;
        DAT_0073d868 = 0;
    }
}
