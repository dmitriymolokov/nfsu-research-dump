/* spd-match: far pct=25.78 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00620ED0 */
#include <windows.h>
extern int __cdecl FUN_0061f040(void);
extern int __cdecl FUN_0061f050(void);
extern int __cdecl FUN_0061fe20(void);
int __cdecl FUN_00620ed0(char param_1) {
    int p;
    WNDCLASSEXA wc;
    int *dst;
    int *src;
    int i;
    HWND h;
    FUN_0061f040();
    p = FUN_0061f050();
    *(int*)(p + 0x54) = 0x10;
    *(int*)(p + 0x58) = 0x10;
    *(int*)(p + 0x60) = 0x10;
    *(int*)(p + 0x4c) = 0x280;
    *(int*)(p + 0x50) = 0x1e0;
    wc.cbSize = 0x30;
    wc.style = 0x40;
    wc.lpfnWndProc = (WNDPROC)DefWindowProcA;
    wc.hInstance = GetModuleHandleA(0);
    wc.lpszClassName = "EAGL PC Caps Retrieval";
    RegisterClassExA(&wc);
    h = (HWND)FUN_0061fe20();
    *(int*)(*(int*)(p + 0x1c) + 0xcc) = (int)&h;
    return 1;
}
