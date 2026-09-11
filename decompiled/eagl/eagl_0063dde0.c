/* spd-match: far pct=19.12 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0063DDE0 */
#include <windows.h>
extern int __cdecl FUN_0063dd90(void);
int __fastcall FUN_0063dde0(int val, int *param_1) {
  extern int *unaff_EDI;
  unsigned char *p = (unsigned char *)(FUN_0063dd90() + val - 8);
  int res = 0;
  if (((p[0] >= 'A' && p[0] <= 'Z') || (p[0] >= 'a' && p[0] <= 'z')) &&
      (p[1] >= '0' && p[1] <= '9') && (p[2] >= '0' && p[2] <= '9') && (p[3] >= '0' && p[3] <= '9')) {
    res = 8;
    if (unaff_EDI) *unaff_EDI = p[3] - '0' + (p[2] - '0') * 10 + (p[1] - '0') * 100 - 0x14D0;
    if (param_1) *param_1 = *(unsigned int *)(p + 4);
  }
  return res;
}
