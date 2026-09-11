/* spd-match: far pct=65.62 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0052F520 */
#include "ghidra_compat.h"

int __cdecl FUN_00530570(void);
extern const void *const PTR_FUN_006be640;

void * __fastcall FUN_0052f520(void *ptr, int edx) {
  void *tmp = ptr;
  FUN_00530570();
  *(int *)((char *)tmp + 0x360) = 0;
  *(int *)((char *)tmp + 0x364) = 0;
  *(const void **)tmp = &PTR_FUN_006be640;
  return tmp;
}
