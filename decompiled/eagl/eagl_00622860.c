/* spd-match: far pct=17.54 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00622860 */
#include <windows.h>
extern void** DAT_00709d80;
extern void* DAT_0070a410;
void __cdecl FUN_00622860(void* a1, void* a2, void* a3, void* a4) {
  void** pVtbl = *(void***)DAT_00709d80;
  if (((int (__cdecl *)(void**))pVtbl[3])(DAT_00709d80) == 0) {
    ((void (__cdecl *)(void*, void*, void*, void*, void*, void*))pVtbl[71])(DAT_00709d80, DAT_0070a410, a4, a3, a2, a1);
  }
}
