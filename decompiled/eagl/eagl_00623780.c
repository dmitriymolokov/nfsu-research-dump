/* spd-match: far pct=21.88 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00623780 */
#include <windows.h>
extern int* DAT_00709d80;
int __stdcall FUN_00622930(void);
void __fastcall FUN_00623780(int param_1) {
    int i;
    int val;
    int offsets[15];
    val = param_1;
    if (FUN_00622930() == 0) {
        for (i = 0; i < 15; i++) {
            offsets[i] = (0x70a778 + (i * 0x20)) - val;
        }
    }
}
