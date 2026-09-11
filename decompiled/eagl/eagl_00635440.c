/* spd-match: far pct=21.05 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00635440 */
#include <windows.h>
void * __stdcall FUN_00635440(void *pThis, int p3, int p4, char p5, int p6, float p7) {
  char stack_buf[0xb0];
  int *pBase = (int*)pThis;
  if (p4 != pBase[5]) pBase[5] = p4;
  return pThis;
}
