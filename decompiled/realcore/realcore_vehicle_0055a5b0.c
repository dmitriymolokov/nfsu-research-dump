/* spd-match: far pct=26.60 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0055A5B0 */
#include <windows.h>
extern void* _malloc(size_t);
extern int __cdecl FUN_0055a610(void*, int);
int __cdecl FUN_0055a5b0(int param_1) {
  int result = 0;
  void* p = NULL;
  __try {
    p = _malloc(0x464);
    if (p != NULL) {
      result = FUN_0055a610(p, param_1);
    }
  } __except(0x00687703) {
    result = 0;
  }
  return result;
}
