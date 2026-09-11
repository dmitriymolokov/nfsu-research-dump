/* spd-match: far pct=24.73 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00562BC0 */
#include <windows.h>
#include <malloc.h>
void *FUN_00562c20(void *ptr);
int FUN_00562bc0(void) {
  void *result = malloc(0x2ee7c);
  if (result == 0) return 0;
  __try {
    result = FUN_00562c20(result);
  } __finally {
    return (int)result;
  }
}
