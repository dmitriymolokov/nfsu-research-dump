/* spd-match: far pct=23.81 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054A2A0 */
#include <stddef.h>
int __cdecl FUN_00666f30(void *, int);
int __fastcall FUN_0054a2a0(int obj, int ebx) {
  int i;
  int res;
  void *ptr;
  if (ebx == 0) return -1;
  ptr = *(void**)(obj + 0x40);
  i = 0;
  res = FUN_00666f30(ptr, i);
  while (res != 0) {
    if (res == ebx) return i;
    i++;
    res = FUN_00666f30(ptr, i);
  }
  return -1;
}
