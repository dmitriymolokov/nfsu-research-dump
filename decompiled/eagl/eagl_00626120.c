/* spd-match: far pct=6.67 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00626120 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00622720(int a, int b);
extern int __cdecl FUN_00622b40();
extern int __cdecl FUN_006230e0(int a, int b, void* c, int d);
extern unsigned char *DAT_00709df0;
extern int DAT_00709f70;
extern int DAT_0070ab50;
void __cdecl FUN_00626120(int param_1) {
    int *ctx = (int*)DAT_00709df0;
    int iVar14 = ctx[0x18/4];
    float *pfVar15 = (float*)ctx[0x28/4];
    float *pfVar17 = (float*)ctx[0x1c/4];
    void* local_60;
    DAT_0070ab50 = FUN_006230e0(0, (int)pfVar17 * param_1, &local_60, iVar14);
    if (ctx[0x20/4] >= 0) {
        int offset = (DAT_00709f70 * ctx[0x1c/4] * 0x20 + ctx[0x28/4]);
        pfVar15 = (float*)offset;
    }
    FUN_00622b40();
    FUN_00622720(ctx[1], ctx[0x10/4]);
}
