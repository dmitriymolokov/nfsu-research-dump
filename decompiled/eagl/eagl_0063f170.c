/* spd-match: close pct=95.65 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0063F170 */
#include <windows.h>
#define IAT_DELETE_CRIT 0x697228
void __stdcall FUN_0063f170(void *p) {
  void *arg = (char *)p + 4;
  ((void (__stdcall *)(void *))(*(void **)IAT_DELETE_CRIT))(arg);
  *(unsigned int *)p = 0x6d757446;
}
