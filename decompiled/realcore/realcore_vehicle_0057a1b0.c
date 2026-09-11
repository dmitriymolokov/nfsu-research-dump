/* spd-match: far pct=25.51 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0057A1B0 */
#include <windows.h>
extern void* ExceptionList;
void* _malloc(size_t size);
int FUN_0057a270(void* ptr, int val);
int FUN_0057a1b0(int a1, int a2) {
  void* prev_ex = ExceptionList;
  void* p = 0;
  int res = 0;
  __try {
    p = _malloc(0xa0);
    if (p != 0) {
      res = FUN_0057a270(p, a2);
      return res;
    }
  } __finally {
    ExceptionList = prev_ex;
  }
  return 0;
}
