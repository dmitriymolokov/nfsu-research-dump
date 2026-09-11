/* spd-match: far pct=12.28 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.4-float/va_005DBAE8 */
#include <malloc.h>
typedef unsigned int uint; typedef float float10;
int __cdecl FUN_005d91c9(void*, uint); int __cdecl FUN_005d9fa1(int, uint, void*, void*, void*, int);
struct ThisCallBox { int FUN_005dbae8(int, int, uint, int, int, uint); };
int ThisCallBox::FUN_005dbae8(int p2, int p3, uint p4, int p5, int p6, uint p7) {
  float10 f = (float10)p7;
  void* mem = malloc(p7 * 4);
  if (!mem) return -1;
  free(mem);
  return (int)f;
}
