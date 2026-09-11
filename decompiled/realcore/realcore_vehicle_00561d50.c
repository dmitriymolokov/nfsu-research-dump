/* spd-match: far pct=25.53 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00561D50 */
#include <windows.h>
#include <malloc.h>
extern int __stdcall FUN_00561db0(void* ptr, void* param);
int __stdcall FUN_00561d50(void* arg) {
  void* p;
  int result = 0;
  __try {
    p = malloc(0x188);
    if (p) {
      result = FUN_00561db0(p, arg);
    }
  } __except(0x687623) {
    result = 0;
  }
  return result;
}
