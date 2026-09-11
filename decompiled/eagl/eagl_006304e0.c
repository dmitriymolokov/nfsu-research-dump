/* spd-match: far pct=8.93 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_006304E0 */
#include <stddef.h>
typedef unsigned char byte;
typedef unsigned int uint;
struct Vec4 { float x, y, z, w; };
extern void __stdcall FUN_0062fff0(int offset, struct Vec4* v);
void FUN_006304e0(int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
  int iVar2 = *(int*)(p3 + 0xc);
  int limit = p4 - 1;
  if (p5 <= limit) {
    int count = (limit - p5) + 1;
    do {
      int iVar5 = *(byte*)(p3 + 6) - 1;
      if (iVar5 >= 0) {
        int iVar3 = iVar5 * 32;
        float* pfVar4 = (float*)(p6 + (iVar5 * 16) + 8);
        do {
          byte bVar1 = *(byte*)(iVar2 + iVar5);
          if ((*(uint*)(p7 + ((bVar1 >> 5) * 4)) & (1 << (bVar1 & 0x1f))) != 0) {
            struct Vec4 v;
            FUN_0062fff0(*(int*)(p1 + 0x10) + iVar3, &v);
            pfVar4[-2] -= v.x; pfVar4[-1] -= v.y; *pfVar4 -= v.z; pfVar4[1] -= v.w;
          }
          iVar5--; iVar3 -= 32; pfVar4 -= 4;
        } while (iVar5 >= 0);
      }
      count--;
    } while (count != 0);
  }
}
