/* spd-match: far pct=3.75 flags=/O2 /c /nologo /TC method=m39 source=m39/3.9.26.55/va_004B96E0 */
#include "ghidra_compat.h"

extern int DAT_00758a2c;

void __fastcall FUN_004b96e0(int obj)
{
    int curr;
    int* dest;
    int end;

    if (*(int*)(obj + 4) == 0) {
        curr = 0;
    } else {
        curr = *(int*)(obj + 4) - 4;
    }

    dest = &DAT_00758a2c;
    end = (obj == -4) ? 0 : obj;

    while (curr != end) {
        if ((int)dest < 0x758a8c) {
            int data_ptr = *(int*)(curr + 0xc);
            dest[-1] = (int)*(short*)(data_ptr + 0x6c);
            dest[0] = *(int*)(curr + 0x18);
            dest[1] = *(int*)(curr + 0x14);
            dest += 3;
        }

        if (*(int*)(curr + 4) == 0) {
            curr = 0;
        } else {
            curr = *(int*)(curr + 4) - 4;
        }
    }
}
