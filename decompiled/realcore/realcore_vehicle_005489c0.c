/* spd-match: far pct=4.69 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_005489C0 */
#include <windows.h>
extern int __stdcall FUN_005488d0(int size);
extern char __fastcall FUN_004389e0(void* p);
int __stdcall FUN_005489c0(void* dst, int count_word, int* buffer_ptr) {
  int i;
  int limit;
  char buf[16];
  FUN_005488d0(16);
  limit = (short)buffer_ptr;
  for(i = 0; i < limit; i++) {
    ((char*)dst)[i] = FUN_004389e0(dst);
  }
  return limit;
}
