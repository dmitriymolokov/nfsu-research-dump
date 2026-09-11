/* spd-match: far pct=50.00 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00520460 */
#include <stdlib.h>
extern int DAT_007356a8;
extern void* __cdecl FUN_0051c8e0(void);
extern void __cdecl FUN_0051cd60(void);
void FUN_00520460(void) {
    void* p = malloc(0x570);
    if (p != NULL) {
        DAT_007356a8 = (int)FUN_0051c8e0();
    } else {
        DAT_007356a8 = 0;
    }
    FUN_0051cd60();
}
