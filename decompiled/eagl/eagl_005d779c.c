/* spd-match: far pct=42.86 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005D779C */
#include <windows.h>
extern unsigned char DAT_006a0900[];
unsigned int __stdcall FUN_005d779c(unsigned int param_1, unsigned int param_2, unsigned int *param_3) {
    unsigned int ecx = 0x26;
    unsigned int *eax = (unsigned int *)0x6a0ac8;
    while (1) {
        unsigned int edx = *(eax - 4);
        eax -= 3;
        ecx--;
        if (edx == param_1 && (*eax & param_2) == param_2) break;
        if ((unsigned int)eax < 0x6a0900) return 0x80004005;
    }
    if (param_3) {
        unsigned int esi = ecx * 12 + 0x6a08f8;
        param_3[0] = *(unsigned int *)esi;
        param_3[1] = *(unsigned int *)(esi + 4);
        param_3[2] = *(unsigned int *)(esi + 8);
    }
    return 0;
}
