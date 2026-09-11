/* spd-match: far pct=27.41 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063EAA0 */
#include <windows.h>
extern int DAT_0070f4f4, DAT_0070f4f8, DAT_0070f508, DAT_0070f50c, DAT_0070f510, DAT_0070f514, DAT_0070f518, DAT_0070f51c, DAT_0070f524, DAT_0070fe20, _DAT_0070f528;
void __cdecl FUN_0063eaa0(void) {
  int d1 = DAT_0070f518;
  int d2 = DAT_0070f514;
  int res = d2 + d1;
  int d3 = DAT_0070f508;
  DAT_0070f518 = res & 0xFFFF;
  DAT_0070f508 = d3 + (res >> 16);
  if (DAT_0070f4f4) {
    int cur = GetTickCount();
    int diff = DAT_0070f508 - cur - 1;
    if (diff < 1) {
      if (diff < -1000) {
        DAT_0070f508 = GetTickCount() + 1;
        _DAT_0070f528++;
      }
      diff = 1;
    }
    DAT_0070f50c = timeSetEvent(diff, DAT_0070f4f8, (void*)0x0063eaa0, 0, 0);
    if (DAT_0070f50c == 0) {
      DAT_0070fe20 = 0;
      DAT_0070f4f4 = 0;
      timeEndPeriod(DAT_0070f4f8);
    }
  }
  if (DAT_0070f510 && !DAT_0070f524) {
    typedef void (__cdecl *fn_t)(int*);
    ((fn_t)0x00641a90)(&DAT_0070f51c);
  }
  ((void (__cdecl *)(void))0x00643230)();
}
