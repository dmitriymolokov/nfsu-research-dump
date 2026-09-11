/* spd-match: far pct=35.19 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0054E650 */
#include <windows.h>

extern int __stdcall FUN_00549340(int a, unsigned short b, int c);
extern int __stdcall FUN_00674898();

extern unsigned short DAT_00730170;
extern int DAT_007346d4;

void FUN_0054e650(int* esi) {
  int eax = FUN_00549340(0, DAT_00730170, 1);
  int ecx = DAT_007346d4;
  esi[2] = eax;
  if (ecx == 0 || eax != 0) {
    esi[0] = 2;
    esi[4] = FUN_00674898();
  }
}
