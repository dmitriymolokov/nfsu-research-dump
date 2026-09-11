/* spd-match: far pct=13.04 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00607A58 */
#include <windows.h>

struct DataStruct { int d0, d1, d2, d3, d4; };

int __stdcall FUN_00607a58(int p1, int p2, unsigned int p3, unsigned int p4, int *p5, int p6, unsigned int *p7, int *p8, int *p9) {
    unsigned int *puVar1, uVar2, uVar5, uVar4;
    int local_14 = 0;
    *p8 = 0;
    *p9 = 0;
    for (uVar4 = p3; uVar4 < p4; uVar4++) {
        puVar1 = (unsigned int *)*(unsigned int *)(p2 + uVar4 * 4);
        if (puVar1) {
            uVar2 = puVar1[1];
            uVar5 = *puVar1 & 0xffffff;
            if (p6 > 0) {
                 /* Logic block for loop counters matching 0x607a7a jae */
            }
        }
    }
    *p7 = local_14;
    return 0;
}
