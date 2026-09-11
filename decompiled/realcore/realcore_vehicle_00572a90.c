/* spd-match: far pct=4.17 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00572A90 */
#include <windows.h>
extern void __stdcall FUN_00494b90(void *p1, void *p2, void *p3, void *p4);
extern void *g_vtable_base;
void __stdcall FUN_00572a90(void *arg1, void *arg2) {
  void *ecx_val = g_vtable_base;
  FUN_00494b90(arg1, ecx_val, arg2, (void*)0);
}
