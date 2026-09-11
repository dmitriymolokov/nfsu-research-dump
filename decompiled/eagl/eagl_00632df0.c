/* spd-match: far pct=10.89 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_00632DF0 */
#include <stdio.h>
extern void* DAT_0070d600;
void __cdecl FUN_00632a40(void); void __cdecl FUN_00632af0(void);
void __cdecl FUN_006332d0(void); void __cdecl FUN_00632710(void);
void FUN_00632df0(int p1, int p2) {
    float f_stack[4];
    if (*(char*)(p1 + 0x58) == 0) {
        *(int*)(p1 + 0x44) = -1;
        *(int*)(p1 + 0x48) = 0;
        *(int*)(p1 + 0x4c) = 0;
        *(int*)(p1 + 0x50) = 0;
        *(int*)(p1 + 0x54) = 0x3f800000;
        *(char*)(p1 + 0x58) = 1;
    } else if (*(int*)(p1 + 0x44) != p2) {
        FUN_00632a40();
        FUN_00632af0();
        FUN_006332d0();
        FUN_00632710();
        *(float*)(p1 + 0x48) = f_stack[0];
        *(float*)(p1 + 0x4c) = f_stack[1];
        *(float*)(p1 + 0x50) = f_stack[2];
        *(float*)(p1 + 0x54) = f_stack[3];
        *(int*)(p1 + 0x44) = p2;
    }
}
