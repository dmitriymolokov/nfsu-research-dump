/* spd-match: far pct=14.06 flags=/O2 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_00635C90 */
#include <windows.h>
int __cdecl FUN_00635440(void* pThis, int p2, int p3, int p4, int p5, int p6, float p7);
int __cdecl FUN_00635c90(void* pThis, int p2, int p3, int p4, int p5, int p6, float p7) {
  unsigned char* pThisData = (unsigned char*)pThis;
  *(short*)(pThisData + 0x10) = (short)p6;
  if (p4 == 0) {
    return 1;
  }
  return FUN_00635440(pThis, p2, p3, p4, p5, p6, p7);
}
