/* spd-match: far pct=16.25 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00630150 */
#include <stddef.h>
extern int __cdecl FUN_0062fff0(int, float*);
struct ThisCallBox { void FUN_00630150(int, int, int, int); };
void ThisCallBox::FUN_00630150(int p1, int p2, int p3, int p4) {
  unsigned char n = *(unsigned char*)(p1 + 6);
  if (p2 < p3) {
    int count = p3 - p2;
    do {
      if (n > 0) {
        for (unsigned int i = 0; i < n; ++i) {
          float f[4];
          FUN_0062fff0(*(int*)((char*)this + 0x10) + (i * 32), f);
          float* base = (float*)(p4 + 8) + (i * 16);
          base[-2] += f[0];
          base[-1] += f[1];
          base[0] += f[2];
          base[1] += f[3];
        }
      }
      count--;
    } while (count != 0);
  }
}
