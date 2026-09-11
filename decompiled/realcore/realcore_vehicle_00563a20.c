/* spd-match: far pct=26.60 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00563A20 */
#include <windows.h>
extern void* __cdecl _malloc(size_t);
extern void* __fastcall FUN_00563a80(void*, void*);
int FUN_00563a20(int a) {
  void* p;
  int ret;
  __try {
    p = _malloc(0xE0);
    if (p) {
      ret = (int)FUN_00563a80(p, (void*)a);
    } else {
      ret = 0;
    }
  }
  __except(1) {
    ret = 0;
  }
  return ret;
}
