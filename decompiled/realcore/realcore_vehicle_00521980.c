/* spd-match: far pct=37.74 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00521980 */
#include <windows.h>
extern int DAT_00735678;
extern int DAT_0072ce58;
int __stdcall FUN_00521980(void) {
  int *p = &DAT_0072ce58;
  if (DAT_00735678 == 0) {
    do {
      if (*p == 1 || *p == 2 || *(p - 1) == 1) return 0;
      p += 3;
    } while ((unsigned int)p < 0x72cfd8);
  }
  return 1;
}
