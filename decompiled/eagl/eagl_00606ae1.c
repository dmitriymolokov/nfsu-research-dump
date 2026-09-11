/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00606AE1 */
#include <memory.h>
int __fastcall FUN_00606ae1(int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
  int l5c[6];
  int idx = 0;
  int limit = p2 + p7;
  int *base_off = (int*)(p6 - (p2 * 4));
  memset(l5c, 0, 24);
  while (idx < limit) {
    int *curr = (idx < p2) ? *(int**)(p4 + idx * 4) : (int*)(*(int*)((char*)base_off + idx * 4));
    if (curr) {
      unsigned int val = (*(unsigned int*)curr) & 0xff000000;
      if (val == 0x40000000 || val == 0x44000000 || val == 0x48000000 || val == 0x4c000000 || val == 0x34000000 || val == 0xee000000 || val == 0xef000000) {}
    }
    idx++;
  }
  return 0;
}
