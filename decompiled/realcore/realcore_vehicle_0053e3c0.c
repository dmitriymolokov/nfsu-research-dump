/* spd-match: far pct=9.09 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0053E3C0 */
#include <windows.h>
extern int DAT_0073559c;
void __fastcall FUN_0053e3c0(int * obj) {
  int *cur;
  int *base = (int *)&DAT_0073559c;
  while ((cur = (int *)*obj) != obj) {
    int *n = (int *)*cur;
    int *p = (int *)cur[1];
    *p = (int)n;
    *(int **)((char *)n + 4) = p;
    *cur = *(int *)(base + 4);
    (*(int *)(base + 6))--;
    *(int *)(base + 4) = (int)cur;
  }
}
