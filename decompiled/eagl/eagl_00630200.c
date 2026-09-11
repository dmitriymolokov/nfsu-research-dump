/* spd-match: far pct=11.25 flags=/O2 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_00630200 */
#include <stddef.h>
typedef unsigned char byte;
extern void __stdcall FUN_0062fff0(int offset, float* out);
void FUN_00630200(int this_ptr, int arg1, int param_3, int param_4, int param_5, int param_6) {
    int* regs = &this_ptr;
    int count = param_4 - param_5 + 1;
    int base = *(int*)(this_ptr + 0x10);
    for (; count > 0; count--) {
        int uVar1 = *(byte*)(param_3 + 6);
        if (uVar1 > 0) {
            int iVar4 = (uVar1 - 1) * 0x20;
            float* pfVar3 = (float*)((uVar1 - 1) * 0x10 + 8 + param_6);
            while (uVar1 > 0) {
                float local[4];
                FUN_0062fff0(base + iVar4, local);
                pfVar3[-2] -= local[0];
                pfVar3[-1] -= local[1];
                pfVar3[0] -= local[2];
                pfVar3[1] -= local[3];
                iVar4 -= 0x20;
                pfVar3 -= 4;
                uVar1--;
            }
        }
    }
}
