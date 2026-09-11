/* spd-match: far pct=10.23 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0057CE10 */
#include <windows.h>
extern int __cdecl FUN_0040a880();
extern int __cdecl FUN_0053e400(int, int, int);
int __cdecl FUN_0057ce10(int* obj, int p1, int p2, int p3, int p4, int p5) {
  int* cur = (int*)*obj;
  int limit = FUN_0040a880();
  while (cur != (int*)limit) {
    int start = cur[3];
    int end = (cur[4] * 48) + start;
    int i = start;
    if (p4 != 0) {
      if (p4 < start || p4 >= end) goto skip;
      i = p4 + 48;
    } else if (p1 != 0) {
      i = FUN_0053e400(p1, start, 4);
      if (i == 0) return 0;
    }
    for (; i < end; i += 48) {
      if (p1 != 0 && *(int*)(i + 4) != p1) return 0;
      if ((p2 == -1 || *(char*)(i + 16) == (char)p2) && (p3 == 0 || *(int*)(i + 8) == p3)) {
        if (p5 == -1 || *(unsigned char*)(i + 17) == (unsigned char)p5) return i;
      }
    }
    skip: cur = (int*)*cur;
  }
  return 0;
}
