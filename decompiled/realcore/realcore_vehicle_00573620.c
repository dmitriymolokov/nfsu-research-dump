/* spd-match: far pct=8.85 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00573620 */
#include <windows.h>
int __cdecl FUN_00565da0(const char*, ...);
int __cdecl FUN_00572b50(int, int);
void* __cdecl FUN_00594c60(void*, int, int);
int __cdecl FUN_0063c290(int, int, void*, int, int);
extern int* PTR_s_REPLAY0_BIN_006f1a04;
void __cdecl FUN_00573620(int obj, int p1, int p2) {
  int i, j;
  unsigned int b[2];
  char s[64];
  int* p;
  i = (obj < 0 || obj > 1) ? 0 : obj;
  if (PTR_s_REPLAY0_BIN_006f1a04[i] == 0) s[0] = 0;
  else FUN_00565da0("REPLAY\\%s", (char*)PTR_s_REPLAY0_BIN_006f1a04[i]);
  i = FUN_00572b50(p2, 0);
  for (j = 1; i != 0; j++) {
    b[0] = 0x39101;
    b[1] = (*(int*)(i + 0x154) + 0x15b) & -4;
    p = (int*)FUN_00594c60(s, 1, 2);
    if (p) { FUN_0063c290(p[3], p[2], b, 8, 100); p[2] += 8; }
    i = FUN_00572b50(p2, j);
  }
}
