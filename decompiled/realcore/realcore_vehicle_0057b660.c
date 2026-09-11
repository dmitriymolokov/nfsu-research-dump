/* spd-match: far pct=25.25 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0057B660 */
#include <windows.h>
#include <malloc.h>
extern void* LAB_00684ceb;
int __stdcall FUN_0057bdd0(void* p, int a1, int a2);
int __stdcall FUN_0057b660(int a1, int a2) {
  int ret = 0;
  void* p;
  __try {
    p = malloc(0xa0);
    if (p != 0) {
      ret = FUN_0057bdd0(p, a1, a2);
    }
  } __except(1) {
    ret = 0;
  }
  return ret;
}
