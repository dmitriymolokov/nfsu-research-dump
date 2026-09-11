/* spd-match: far pct=11.67 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0063C160 */
#include <windows.h>
extern int __cdecl FUN_00639d70(int);
extern int __cdecl FUN_00639f20(int, void*);
extern void LAB_0063c0c0(void);
int __fastcall FUN_0063C160(int ecx_val, int edx_val, int a1, int a2, int a3) {
    int locals[8];
    locals[0] = ecx_val;
    locals[1] = edx_val;
    int result = ((int (__fastcall *)(int, int, int, int))ecx_val)(edx_val, a1, a2, a3);
    if (result) {
        FUN_00639f20(result, &LAB_0063c0c0);
        do {
            FUN_00639d70(a1);
        } while (a1 && result);
    }
    return 0;
}
