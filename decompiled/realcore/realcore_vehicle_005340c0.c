/* spd-match: far pct=36.99 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005340C0 */
#include <windows.h>
extern void __stdcall FUN_0064bbd0(void);
extern void __stdcall FUN_0064b510(void*);
extern void __stdcall FUN_0064b580(void);
extern void __stdcall FUN_0064b5a0(void);
void __fastcall FUN_005340c0(int *param_1) {
  int *piVar1;
  int **ppv;
  int *vtable;
  piVar1 = (int *)*((int*)param_1 + 0xa0);
  if (piVar1 != (int *)0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&param_1);
    FUN_0064b580();
    ppv = (int **)param_1;
    vtable = (int *)*ppv;
    ((void (__stdcall *)(int *))(*(vtable + 1)))(piVar1);
    FUN_0064b5a0();
  }
  *((int*)param_1 + 0xa0) = 0;
}
