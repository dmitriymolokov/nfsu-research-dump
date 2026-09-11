/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005620D0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004f7660(float, float);
extern int __cdecl FUN_004f6670(void);
extern int __cdecl FUN_004f0700(int, int, int, int, int);
extern unsigned int DAT_0070649c;
extern unsigned int DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char* DAT_0073578c;
void FUN_005620d0(int p) {
  int* base = (int*)(p + 0x40);
  int* end = base + 6;
  for (; base < end; base++) {
    int* cur = (int*)*base;
    if (cur != 0 && DAT_007064b2 != 0) {
      float a = (float)(int)(DAT_007064a0 - 0xf0);
      float b = (float)(int)(DAT_0070649c - 0x140);
      if (FUN_004f7660(a, b)) {
        unsigned int val = *(unsigned int*)((char*)cur + 0x10);
        if (val == 0xda96ef8e) {
          int v3 = *(int*)(p + 0x58);
          int v4 = FUN_004f6670();
          if (DAT_0073578c != 0 && *(int*)(DAT_0073578c + 8) != 0) {
            FUN_004f0700(0x9120409e, (int)cur, v3, v4, 0);
          }
        }
      }
    }
  }
}
