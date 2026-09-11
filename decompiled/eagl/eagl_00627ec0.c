/* spd-match: far pct=6.25 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.4-float/va_00627EC0 */
#include <windows.h>
void __stdcall FUN_00627ec0(int base, int* p2, int p3, char p4, int* p5) {
    int* p_count = (int*)(base + 8);
    int count = *p_count;
    if (p5 == 0) {
        if (p2 == (int*)p3) {
            return;
        }
    }
    int* p_ac = (int*)(base + 0xac);
    int i = 0;
    if (count > 3) {
        int* pu4 = (int*)(p3 + 0x4c);
        int i5 = 2;
        do {
            int i6 = p_ac[-0x1c];
            i += 4;
            p_ac += 0x70;
            pu4 += 0x30;
            i5 += 4;
        } while (i5 < count);
    }
}
