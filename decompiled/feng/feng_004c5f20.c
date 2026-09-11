/* spd-match: far pct=13.70 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-c3-ctx/va_004C5F20 */
#include "ghidra_compat.h"
extern void __cdecl FUN_00417600(void*);
extern void __cdecl FUN_004ac5a0(void*, int, void*);
extern int __cdecl FUN_005a05b0(void*);
extern int DAT_0075eef8;
int __fastcall FUN_004c5f20(int obj) {
    char stack_pad[0x728];
    int* p_ecx = *(int**)(obj + 0x40);
    int esi = p_ecx[2];
    FUN_00417600(stack_pad);
    FUN_004ac5a0(&DAT_0075eef8, 0, stack_pad);
    FUN_005a05b0(stack_pad);
    if (*(int*)(esi + 0x18) >= 0) return 1;
    return 0;
}
