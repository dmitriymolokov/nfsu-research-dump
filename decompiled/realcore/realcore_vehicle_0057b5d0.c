/* spd-match: far pct=24.24 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0057B5D0 */
#include <windows.h>
extern void *ExceptionList;
void* __stdcall FUN_0057c240(void *p, void *a, void *b);
void* _malloc(size_t size);
void* __stdcall FUN_0057b5d0(void* p1, void* p2) {
  void* result = 0;
  __try {
    void* p = _malloc(0x90);
    if (p) {
      result = FUN_0057c240(p, p1, p2);
    }
  } __finally {
    return result;
  }
}
