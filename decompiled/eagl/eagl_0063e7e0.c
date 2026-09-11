/* spd-match: far pct=21.69 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063E7E0 */
#include <windows.h>
extern int __stdcall FUN_0063fc90(void);
extern int (*pfn_callback)(void*, void*);
int __cdecl fn_0063e7e0(int p1, DWORD p2) {
    int esi = FUN_0063fc90() + (int)p2;
    DWORD status = p2;
    do {
        if (GetExitCodeThread(*(HANDLE*)(p1 + 4), &status) && (status != 0x103)) return 1;
        if (p2 == 0) continue;
    } while (FUN_0063fc90() < esi);
    return 0;
}
