/* spd-match: far pct=18.75 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00564110 */
#include "ghidra_compat.h"
int __cdecl FUN_00495f00(int);
int __cdecl FUN_0054a140(void*, void*);
int __cdecl FUN_0054b700(void*, void*);
int __cdecl FUN_00565da0(void*, int);
int __cdecl FUN_0059fb80();
int __cdecl FUN_00674898();
extern int DAT_0073d868;
extern int DAT_00777c90;
extern void* PTR_DAT_006bce54;
void __fastcall FUN_00564110(int arg_eax) {
    int esi = arg_eax;
    char stack_buf[144];
    void* p_esi = &stack_buf[0];
    FUN_0054b700(&DAT_0073d868, &DAT_00777c90);
    FUN_0054a140(&DAT_0073d868, p_esi);
    if (esi == 0) {
        // Original code path logic for branch 0
    }
    FUN_00495f00(0x8717dbd6);
}
