/* spd-match: far pct=44.16 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0057C5A0 */
#include <windows.h>
extern int DAT_0073459c;
extern int* DAT_007345a4;
int __cdecl FUN_0057c480(int p1, int p2);
int __cdecl FUN_0057c5a0(int param_1) {
  int eax;
  int* ecx;
  if (DAT_0073459c == 0) return 0;
  eax = FUN_0057c480((int)DAT_007345a4, param_1);
  ecx = DAT_007345a4;
  if (ecx[0] >= ecx[4]) {
    if (DAT_0073459c != 0) {
      DAT_007345a4 = 0;
      DAT_0073459c = 0;
    }
  }
  return eax;
}
