/* spd-match: far pct=15.91 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0052D010 */
#include "ghidra_compat.h"
extern float DAT_006cc7a4;
void __fastcall FUN_0052d010(int obj) {
    float f1 = *(float *)(obj + 0x60);
    float f2 = DAT_006cc7a4;
    if (f1 > f2) {
        *(float *)(obj + 200) = f1;
    } else {
        *(float *)(obj + 200) = f2;
    }
    return;
}
