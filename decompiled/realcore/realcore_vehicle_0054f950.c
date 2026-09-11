/* spd-match: far pct=26.37 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054F950 */
#include <windows.h>
extern void* _malloc(size_t);
extern int FUN_0054f9b0(void*, int);
int FUN_0054f950(int arg1) {
  void* p;
  int ret = 0;
  void* prev = (void*)__readfsdword(0);
  __try {
    p = _malloc(0x68);
    if (p != 0) {
      ret = FUN_0054f9b0(p, arg1);
    } else {
      ret = 0;
    }
  } __except(0x687893) {
    ret = 0;
  }
  __writefsdword(0, (unsigned long)prev);
  return ret;
}
