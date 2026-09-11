/* spd-match: far pct=15.49 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_00609AD2 */
#include "ghidra_compat.h"
extern int __cdecl FUN_006099dc(int a, int b, int c, int d, int e);
struct ThisCallBox {
    int FUN_00609ad2(int p1, int p2, int* p3, int* p4, int* p5, int** p6, int p7, unsigned int p8);
};
int ThisCallBox::FUN_00609ad2(int p1, int p2, int* p3, int* p4, int* p5, int** p6, int p7, unsigned int p8) {
    unsigned int esi = *p3 & 0xFFFFFF;
    *p6 = 0; *p5 = 0; *p4 = 0;
    if (esi == 0) return 0x80004005;
    return 0;
}
