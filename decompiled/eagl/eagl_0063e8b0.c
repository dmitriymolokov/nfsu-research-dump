/* spd-match: far pct=8.60 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_0063E8B0 */
#include <windows.h>
#include <process.h>
extern void (__cdecl *PTR_FUN_006e80b0)(int);
extern void __cdecl LAB_0063e4d0(void);
int __cdecl FUN_0063e6f0(int, int);
extern void (__cdecl *PTR_FUN_0069715c)(HANDLE);
extern void (__cdecl *PTR_FUN_00697210)(int, int);
int __cdecl FUN_0063e8b0(int a, int b, int c, int d, int e) {
    int res = 0;
    int stack_var[4] = {0};
    PTR_FUN_006e80b0(1);
    stack_var[0] = (int)_beginthreadex(0, d, (unsigned (__stdcall *)(void *))LAB_0063e4d0, (void*)((char*)a + 8), 4, (unsigned *)(a + 8));
    if (stack_var[0] != 0) {
        res = 1;
        *(int*)(a + 4) = stack_var[0];
        FUN_0063e6f0(a, e);
        PTR_FUN_0069715c(*(HANDLE*)(a + 4));
        while (stack_var[0] != 0) {
            PTR_FUN_00697210(1, 1);
        }
    }
    PTR_FUN_006e80b0(0);
    return res;
}
