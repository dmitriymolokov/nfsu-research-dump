/* spd-match: far pct=19.23 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0053D420 */
#include <windows.h>
extern void __cdecl FUN_00539ac0(void);
extern void __cdecl FUN_00539b70(void);
extern void __cdecl FUN_0053cd70(void);
extern void __cdecl FUN_0064b510(void*);
extern void __cdecl FUN_0064b580(void);
extern void __cdecl FUN_0064b5a0(void);
extern void __cdecl FUN_0064b7d0(void*);
extern void __cdecl FUN_0064bbd0(void);
extern int DAT_006f46c0;
extern int DAT_006f4730;
extern void LAB_00684d8b(void);
void __fastcall FUN_0053d420(int *ecx) {
    int *esi;
    int *edi;
    int eax;
    int *ebp_ptr;
    int local_14;
    eax = ecx[8];
    ebp_ptr = (int *)((char *)ecx + eax * 0x2e0 + 0x40);
    edi = (int *)ecx[eax + 0x0b];
    if (*ebp_ptr != 0) {
        if (*(int *)*ebp_ptr != 0) FUN_0064bbd0();
        FUN_0064b510(&local_14);
        FUN_0064b580();
        (*(void (__stdcall **)(int *))(*(int *)local_14 + 4))((int *)*ebp_ptr);
        FUN_0064b5a0();
        *ebp_ptr = 0;
    }
    esi = ebp_ptr + 4;
    FUN_00539b70();
    if (edi[0x12] == 3) {
        (*(void (__stdcall **)(int *))(*(int *)esi + 4))(&DAT_006f46c0);
    } else if (edi[0x12] == 4) {
        (*(void (__stdcall **)(int *))(*(int *)esi + 4))(&DAT_006f4730);
    }
}
