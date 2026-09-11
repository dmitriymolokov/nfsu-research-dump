/* spd-match: far pct=12.15 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00576360 */
#include <windows.h>
extern float DAT_006cc7a4;
void FUN_00576360(int param_1, int param_2, int param_3) {
    int iVar1, iVar2;
    int *src, *dst;
    float *pfVar4;
    iVar2 = *(int *)(param_3 + 0x18);
    if ((0 < iVar2) && (iVar2 < 4)) {
        iVar1 = (iVar2 * 0x40) + 0x2a0 + param_1;
        *(int *)(param_2 + 0x1b0) = *(int *)(iVar1 + 0x0);
        *(int *)(param_2 + 0x1b4) = *(int *)(iVar1 + 4);
        *(int *)(param_2 + 0x1b8) = *(int *)(iVar1 + 8);
        *(int *)(param_2 + 0x1bc) = *(int *)(iVar1 + 0xc);
        *(int *)(param_2 + 0x1c0) = *(int *)(iVar1 + 0x10);
        *(int *)(param_2 + 0x1c4) = *(int *)(iVar1 + 0x14);
        *(int *)(param_2 + 0x1cc) = *(int *)(iVar1 + 0x1c);
        src = (int *)(iVar1 + 0x20);
        dst = (int *)(param_2 + 0x1d0);
        iVar2 = 8;
        while (iVar2-- > 0) {
            *dst++ = *src++;
        }
        *(int *)(iVar1 + 0x18) = 0;
        iVar2 = 2;
        pfVar4 = (float *)(iVar1 + 0x28);
        while (iVar2 < 8) {
            if (*pfVar4 == DAT_006cc7a4) break;
            iVar2++;
            pfVar4++;
            (*(int *)(iVar1 + 0x18))++;
        }
        *(int *)(param_2 + 0x1c8) = *(int *)(iVar1 + 0x18);
    }
    if (*(int *)(param_3 + 0x44) != 0) {
        *(int *)(param_2 + 0x1c0) = *(int *)(param_1 + 0x824);
    }
}
