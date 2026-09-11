/* spd-match: far pct=17.58 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_0067490D */
#include <stddef.h>
#include <stdlib.h>
typedef int (__cdecl * _PtFuncCompare)(const void *, const void *);
void * __cdecl FUN_0067490d(const void *key, const void *base, size_t num, size_t size, _PtFuncCompare cmp) {
  const char *lo = (const char *)base;
  const char *hi = (const char *)base + (num - 1) * size;
  const char *mid;
  int result;
  while (lo <= hi) {
    size_t count = (hi - lo) / size;
    size_t half = count / 2;
    mid = lo + half * size;
    result = cmp(key, mid);
    if (result == 0) return (void *)mid;
    if (result < 0) hi = mid - size;
    else lo = mid + size;
  }
  return NULL;
}
