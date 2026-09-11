/* spd-match: far pct=3.17 flags=/O2 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_00627600 */
#include <windows.h>
typedef unsigned short ushort;
void __stdcall FUN_00627600(void* pBase, int stride, void* pOut) {
  ushort count = *(ushort*)((char*)pBase + 4);
  if (count > 0) {
    int esi_base = ((count + 1) & ~1) * 2 + stride * count * 2 + 4;
    char* pSrc = (char*)pBase + esi_base;
    for (int i = 0; i < count; ++i) {
      ushort idx = *(ushort*)((char*)pBase + 8 + i * 2);
      *((int*)pOut + idx) = *(int*)(pSrc + i * 4);
    }
  }
}
