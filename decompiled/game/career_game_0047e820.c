/* spd-match: far pct=11.26 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_0047E820 */
#include <windows.h>
extern int __cdecl FUN_005679b0(void*, int);
int __fastcall FUN_0047e820(int obj) {
  int count = *(int*)(obj + 0x48);
  if (count > 0) {
    int* p_idx = *(int**)(obj + 0x4c);
    int* p_base = *(int**)(obj + 0x44);
    int i = 0;
    do {
      float f[3];
      f[0] = *(float*)(p_base + p_idx[0]*2 + 1);
      f[1] = *(float*)(p_base + p_idx[1]*2 + 1);
      f[2] = *(float*)(p_base + p_idx[2]*2 + 1);
      if (FUN_005679b0(f, 3)) return 1;
      p_idx += 4;
      i++;
    } while (i < count);
  }
  return 0;
}
