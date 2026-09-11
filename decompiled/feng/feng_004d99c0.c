/* spd-match: far pct=11.34 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004D99C0 */
#include <windows.h>
extern int __cdecl FUN_004d8440(void);
int __stdcall FUN_004d99c0(int param1, int* p_edi, int* p_ecx) {
  int esi;
  int v = FUN_004d8440();
  if (v > 3) esi = 0;
  else if (v == 0 || v == 1) esi = 0;
  else if (v == 2) esi = 1;
  else esi = 3;
  *p_edi = esi;
  *p_ecx = 0;
  if (--param1 == 0) {
    if (*p_edi == 0) *p_edi = 1;
  } else if (--param1 == 0) {
    if (*p_edi < 3) *p_edi = 3;
  }
  return 1;
}
