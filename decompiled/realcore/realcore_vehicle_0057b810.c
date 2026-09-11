/* spd-match: far pct=27.55 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0057B810 */
#include <windows.h>
#include <malloc.h>
extern int FUN_0057bb10(void*, int);
int FUN_0057b810(int p1, int p2) {
  void* pv = NULL;
  int result = 0;
  __try {
    pv = malloc(0xA0);
    if (pv != NULL) {
      result = FUN_0057bb10(pv, p2);
    }
  } __except(0x00686ee3) {
    result = 0;
  }
  return result;
}
