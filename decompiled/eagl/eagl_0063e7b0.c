/* spd-match: far pct=71.43 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063E7B0 */
#include <windows.h>
extern DWORD (__stdcall *GetExitCodeThread_ptr)(HANDLE, LPDWORD);
int __cdecl fn_0063e7b0(int param_1) { DWORD d; if (GetExitCodeThread_ptr(*(HANDLE*)(param_1 + 4), &d)) return (d != 0x103); return 0; }
