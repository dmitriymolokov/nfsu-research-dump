/* spd-match: far pct=5.05 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00558260 */
#include <windows.h>
extern unsigned char DAT_00734f54;
extern int __stdcall FUN_004eb950(void* p, int a, int b, int c, int d, int e, int f, int g);
int __stdcall FUN_00558260(void* p_arg) {
  if (DAT_00734f54 == 0) {
    int* s = (int*)_alloca(32);
    s[0] = 0; s[1] = 0x18ed8cac; s[2] = 0x9c7511d8; s[3] = (int)0x8c35f7e5;
    s[4] = 0x4e2e9a00; s[5] = 0; s[6] = 0x639; s[7] = 0;
    FUN_004eb950(p_arg, s[1], s[2], s[3], s[4], s[5], s[6], s[7]);
    return 0;
  }
  return 1;
}
