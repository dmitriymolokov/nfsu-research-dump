/* spd-match: far pct=71.11 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0063E580 */
#include <windows.h>

extern HANDLE (__stdcall * const pfn_GetCurrentThread)();
extern void (__stdcall * const pfn_TerminateThread)(HANDLE, DWORD);
extern BOOL (__stdcall * const pfn_CloseHandle)(HANDLE);

void __cdecl fn_0063e580(int param_1) {
  HANDLE hThread;
  if (param_1 == -1) {
    hThread = pfn_GetCurrentThread();
  } else {
    hThread = *(HANDLE *)(param_1 + 4);
  }
  if (hThread != NULL) {
    pfn_TerminateThread(hThread, 0);
  }
  pfn_CloseHandle(hThread);
}
