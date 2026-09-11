/* spd-match: far pct=16.46 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0063E6F0 */
#include <windows.h>
extern HANDLE DAT_0070f4f0;
extern BOOL (__stdcall *pSetThreadPriority)(HANDLE, int);
int __stdcall FUN_0063e6f0(int param_1, int param_2) {
  HANDLE hThread;
  hThread = DAT_0070f4f0;
  if (param_1 != 0) {
    if (param_1 == -1) {
      hThread = GetCurrentThread();
    } else {
      hThread = *(HANDLE *)(param_1 + 4);
    }
  }
  if (hThread == NULL) return 0;
  switch (param_2 + 3) {
    case 0: pSetThreadPriority(hThread, 0xF); return 1;
    case 3: pSetThreadPriority(hThread, 2); return 1;
    case 4: pSetThreadPriority(hThread, 1); return 1;
    case 2: pSetThreadPriority(hThread, -1); return 1;
    case 1: pSetThreadPriority(hThread, -2); return 1;
    case 18: pSetThreadPriority(hThread, -15); return 1;
    default: pSetThreadPriority(hThread, 0); return 1;
  }
}
