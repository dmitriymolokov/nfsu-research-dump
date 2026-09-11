/* spd-match: far pct=10.10 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_0061742A */
#include "ghidra_compat.h"
extern int __cdecl FUN_005f7cfc(int);
extern int __cdecl FUN_00615137(int);
extern void LAB_00617810();
struct ThisCallBox {
    int FUN_0061742a(unsigned int param_2, unsigned int param_3, int* param_4, unsigned int param_5, unsigned int param_6);
};
int ThisCallBox::FUN_0061742a(unsigned int param_2, unsigned int param_3, int* param_4, unsigned int param_5, unsigned int param_6) {
    int* esi = (int*)this;
    if (param_6 == 0) param_6 = (unsigned int)esi[0x26];
    int ebx = *(int*)(param_6 + 0x10);
    int edx = esi[5];
    int eax = *(int*)(ebx);
    eax = *(int*)(edx + eax * 4);
    if (esi[0x18] != *(int*)eax) return 1;
    return 0;
}
