/* spd-match: far pct=4.63 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_00628F60 */
#include <windows.h>
void __stdcall FUN_00628f60(int p1, float v1, float v2, int* idx, float* v3, int t, int p7) {
  int* base = (int*)(p1 + 8);
  int limit = *(int*)(p1 + 4);
  int i = *idx;
  if (v1 < *v3) {
    while (i >= 0 && *(float*)(base + i * 4 + 1) >= v1) i--;
    *idx = ++i;
  }
  for (; i + 3 < limit; i += 4) {
    if (v1 < *(float*)(base + i * 4 + 1)) break;
    if (v1 < *(float*)(base + i * 4 + 5)) { i += 1; break; }
    if (v1 < *(float*)(base + i * 4 + 9)) { i += 2; break; }
    if (v1 < *(float*)(base + i * 4 + 13)) { i += 3; break; }
  }
  *idx = i;
  if (v1 == v2) {
    if (i >= limit) i = limit - 1;
    while (i >= 0 && *(float*)(base + i * 4 + 1) >= v2) i--;
    *idx = ++i;
  } else if (v2 < v1) {
    for (; i < limit; i++) {
       int* entry = base + i * 4;
       int fn = *(int*)(t + *entry * 4);
       if (fn) ((void(__cdecl*)(float, int*, int))fn)(v2, entry, p7);
    }
    *idx = 0;
  }
  i = *idx;
  while (i < limit) {
    int* entry = base + i * 4;
    if (*(float*)(entry + 1) >= v2) break;
    int fn = *(int*)(t + *entry * 4);
    if (fn) ((void(__cdecl*)(float, int*, int))fn)(v2, entry, p7);
    i++;
  }
  *idx = (i < limit) ? i : limit - 1;
  *v3 = v2;
}
