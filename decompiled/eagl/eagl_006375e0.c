/* spd-match: far pct=15.79 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006375E0 */
#include "ghidra_compat.h"
extern void * PTR_FUN_006a85f0;
extern void * PTR_FUN_006dfaa0;
void __cdecl FUN_00628ed0(void);
void * FUN_006375e0(void *esi, int param_2) {
  void *result;
  result = esi;
  *(void **)esi = (void *)0x6a85f0;
  FUN_00628ed0();
  if ((param_2 & 1) != 0) {
    void (__cdecl *f)(void *, int) = (void (__cdecl *)(void *, int))PTR_FUN_006dfaa0;
    f(esi, 0x18);
  }
  return result;
}
