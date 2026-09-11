/* spd-match: far pct=50.79 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0053F500 */
#include <stddef.h>
void __cdecl FUN_0053f500(int* p) {
  int* edx = (int*)p[4];
  int ecx = p[5];
  if (edx != 0 && p[3] != 0 && ecx > 0) {
    int* cur = edx + 3;
    int i = ecx;
    do {
      int* ptr = (int*)*cur;
      if (ptr != 0) {
        int tmp = *ptr;
        int val = *(cur - 1);
        *ptr = val;
        *cur = 0;
        *(cur - 1) = tmp;
      }
      cur += 4;
    } while (--i != 0);
  }
}
