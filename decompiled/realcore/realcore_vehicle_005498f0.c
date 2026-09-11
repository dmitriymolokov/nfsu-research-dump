/* spd-match: far pct=18.88 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_005498F0 */
#include <windows.h>
extern int __cdecl FUN_00668c50(const char*, int);
extern int DAT_007346cc;
extern int DAT_0073dda0;
extern int _DAT_0073dda4;
void __cdecl FUN_005498f0(void* pThis, int val) {
  int* pState = (int*)pThis;
  pState[0x540 / 4] = 1;
  pState[0x544 / 4] = val;
  DAT_007346cc = FUN_00668c50("\x40\x1F\x6F\x00", 10000);
  if (DAT_007346cc == 0) {
    _DAT_0073dda4 = DAT_0073dda0;
    DAT_0073dda0 = 0x18;
    pState[0x78 / 4] = 2;
  } else {
    _DAT_0073dda4 = DAT_0073dda0;
    DAT_0073dda0 = 2;
    pState[0x78 / 4] = 0;
  }
  pState[0x7c / 4] = 0;
  pState[0x80 / 4] = 0;
  ((char*)pState)[0x84] = 0;
  if (pState[0x544 / 4] != 0) {
    ((void (*)(void))pState[0x544 / 4])();
  }
  pState[0x540 / 4] = 0;
  pState[0x544 / 4] = 0;
}
