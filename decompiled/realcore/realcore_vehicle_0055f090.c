/* spd-match: far pct=12.50 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0055F090 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004c96c0(unsigned int);
extern int __cdecl FUN_004ef050(int);
extern int __cdecl FUN_004f0700(int, int, int, int, int);
extern int __cdecl FUN_004f3f90(void*);
extern int __cdecl FUN_004f65d0(void);
extern int __cdecl FUN_004f7660(float, float);
extern int __cdecl FUN_004ffb70(void);
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
void FUN_0055f090(int ebx_reg) {
    int *p = (int *)(ebx_reg + 0x40);
    int count = 6;
    do {
        if (*p && DAT_007064b2) {
            float f1 = (float)((unsigned int)DAT_0070649c - 0x140);
            float f2 = (float)((unsigned int)DAT_007064a0 - 0xf0);
            if (FUN_004f7660(f1, f2)) {
                int uVar6 = *(int *)(*p + 0x10);
                int iVar3 = 0;
                if (*(int *)(ebx_reg + 0xc) != 0) {
                    iVar3 = FUN_004f65d0();
                    if (iVar3 != 0) iVar3 = FUN_004ffb70();
                }
                if (iVar3 == 0 && DAT_0073578c != 0) iVar3 = FUN_004ef050(uVar6);
                if (DAT_0073578c != 0 && *(int *)(DAT_0073578c + 8) != 0) {
                    FUN_004f0700(0xc407210, *p, *(int *)(ebx_reg + 0x58), iVar3, 0);
                }
            }
        }
        p++;
    } while (--count);
}
