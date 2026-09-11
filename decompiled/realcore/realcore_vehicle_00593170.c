/* spd-match: far pct=8.75 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00593170 */
#include "ghidra_compat.h"
extern int DAT_007344b4;
int __cdecl FUN_0040cb70();
int __cdecl FUN_00469810();
void FUN_00593170(int param_1, int *param_2, int param_3) {
    int *p = (int *)FUN_0040cb70();
    volatile float *f_const = (volatile float *)&DAT_007344b4;
    float f_cmp = (float)param_2[9] - *f_const;
    int *cur = (int *)(param_2[2] ? (param_2[2] - 4) : 0);
    while (cur != p && f_cmp <= *(volatile float *)&cur[11]) {
        cur = (int *)(cur[2] ? (cur[2] - 4) : 0);
    }
}
