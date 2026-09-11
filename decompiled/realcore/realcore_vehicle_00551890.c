/* spd-match: far pct=7.81 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00551890 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004c96c0(unsigned int);
extern int __cdecl FUN_004f3f90(int*);
extern int __cdecl FUN_004f7660(float, float);
extern unsigned int DAT_0070649c;
extern unsigned int DAT_007064a0;
extern unsigned char DAT_007064b2;
extern int DAT_00746104;
void LAB_005519b9(void);
void FUN_00551890(void) {
    int i;
    int *pi = (int*)(((char*)&i) + 0x40);
    for (i = 0; i < 10; ++i) {
        if (*pi != 0 && DAT_007064b2 != 0) {
            float f1 = (float)(int)(DAT_007064a0 - 0x140);
            float f2 = (float)(int)(DAT_0070649c - 0x140);
            if (FUN_004f7660(f1, f2)) {
                unsigned int uVar = *(unsigned int*)(*pi + 0x10);
                if (uVar == 0xda928c87) {
                    int iVar = FUN_004f3f90(&DAT_00746104);
                    if (iVar && *(int*)(iVar + 0x18) && *(int*)(iVar + 0x14)) {
                         ((void(__cdecl*)(unsigned int, int, int, int))(*(int*)(*(int*)(iVar + 0x14) + 8)))(0xd9feec59, 0, 0, *(int*)(iVar + 0x18));
                    }
                    return;
                }
            }
        }
        pi++;
    }
}
