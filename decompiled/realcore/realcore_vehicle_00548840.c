/* spd-match: far pct=14.62 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00548840 */
#include <stddef.h>
typedef unsigned int uint;
extern int unaff_EDI;
void __fastcall FUN_00548840(int val, int param_1) {
    int iVar1;
    int iVar2;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uVar6 = *(uint *)(unaff_EDI + 0x400);
    *(uint *)(unaff_EDI + 0x400) = uVar6 + val;
    uVar4 = uVar6 & 7;
    iVar1 = (int)uVar6 >> 3;
    uVar5 = (uint)param_1 << (32 - val);
    uVar6 = uVar5;
    if (uVar4 != 0) {
        iVar2 = 8 - (int)uVar4;
        if (val < iVar2) iVar2 = val;
        val -= iVar2;
        uVar6 = uVar5 << iVar2;
        *(unsigned char *)(iVar1 + unaff_EDI) |= (unsigned char)(uVar5 >> (uVar4 + 24));
        iVar1++;
    }
    if (val > 0) {
        int loop = ((val - 1) >> 3) + 1;
        do {
            *(unsigned char *)(iVar1 + unaff_EDI) = (unsigned char)(uVar6 >> 24);
            iVar1++;
            uVar6 <<= 8;
        } while (--loop != 0);
    }
}
