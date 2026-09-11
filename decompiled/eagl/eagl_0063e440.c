/* spd-match: far pct=23.88 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063E440 */
#include <windows.h>
extern DWORD (__stdcall * const pfn_GetDiskFreeSpaceExA)(LPCSTR, PULARGE_INTEGER, PULARGE_INTEGER, PULARGE_INTEGER);
extern BOOL (__stdcall * const pfn_GetDiskFreeSpaceA)(LPCSTR, LPDWORD, LPDWORD, LPDWORD, LPDWORD);
extern HMODULE (__stdcall * const pfn_GetModuleHandleA)(LPCSTR);
extern FARPROC (__stdcall * const pfn_GetProcAddress)(HMODULE, LPCSTR);
extern VOID (__stdcall * const pfn_SetLastError)(DWORD);
unsigned __int64 FUN_0063e440(LPCSTR param_1) {
    DWORD d1, d2, d3[2], d4[2];
    FARPROC pfn;
    pfn = pfn_GetProcAddress(pfn_GetModuleHandleA("kernel32.dll"), "GetDiskFreeSpaceExA");
    if (pfn) {
        if (((int (__stdcall *)(LPCSTR, DWORD*, DWORD*, DWORD*))pfn)(param_1, &d4[1], &d4[0], &d3[0])) {
            return *(unsigned __int64*)&d4[0];
        }
    } else {
        pfn_SetLastError(0);
        if (pfn_GetDiskFreeSpaceA(param_1, &d1, &d2, &d3[0], &d4[0])) {
            return (unsigned __int64)d1 * d2 * d3[0];
        }
    }
    return 0;
}
