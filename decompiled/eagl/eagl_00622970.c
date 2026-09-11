/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00622970 */
#include <windows.h>
struct S { int f0, f1, f2, f3, f4, f5, f6, f7, f8; };
extern int __stdcall FUN_00620230(void);
extern int __stdcall FUN_00620240(void);
extern void* DAT_00709d80;
extern void* PTR_FUN_006a79c0;
S* __fastcall FUN_00622970(S* p, int edx, int a, int b, int c, int d, int e, int f) {
  p->f3 = a; p->f7 = c; p->f0 = (int)&PTR_FUN_006a79c0; p->f2 = 0; p->f4 = b; p->f5 = f; p->f6 = 0;
  if (d == 0) { p->f8 = 0; if (FUN_00620230()) goto lab; }
  else { p->f8 = e; if (FUN_00620240()) goto lab; }
  p->f7 |= 0x10;
lab: ((void (__stdcall *)(void*, int, int, int, int, int*))(*(int*)(*(int*)DAT_00709d80 + 0x5c)))(DAT_00709d80, p->f3, p->f7, p->f8, 0, &p->f1);
  return p;
}
