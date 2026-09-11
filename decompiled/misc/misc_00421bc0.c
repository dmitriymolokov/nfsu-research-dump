/* spd-match: far pct=18.75 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00421BC0 */
#include <stddef.h>
typedef int (__cdecl *fn_421b10)(int);
typedef int* (__cdecl *fn_567160)(void);
extern int __cdecl FUN_00421b10(int obj);
extern int* __cdecl FUN_00567160(void);
void __fastcall FUN_00421bc0(int obj, int p1, int p2) {
    int* eax;
    int* edx;
    int* ecx_val;
    eax = FUN_00567160();
    if (eax != 0) {
        eax[2] = p1;
        eax[3] = p2;
    }
    edx = *(int**)(obj + 12);
    ecx_val = (int*)(obj + 8);
    *edx = (int)eax;
    *(int**)(obj + 12) = eax;
    if (eax != 0) {
        eax[1] = (int)edx;
        *eax = (int)ecx_val;
    }
    if (*(int*)(obj + 16) == 0) {
        FUN_00421b10(obj);
    }
}
