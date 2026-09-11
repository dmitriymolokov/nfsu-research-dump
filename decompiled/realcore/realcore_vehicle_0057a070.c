/* spd-match: far pct=11.25 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0057A070 */
#include <windows.h>
struct S { int a; int b; int c; int d; int e; int f; };
extern void __stdcall FUN_0047b500(void* param);
extern void __stdcall FUN_005ac69c(void* a, void* b, void* c);
void __stdcall FUN_0057a070(struct S* p1, void* p2, struct S* p3) {
  char s[136];
  if (*(int*)((char*)p1 + 20) == 0) {
    p3->a = 0; p3->b = 0; p3->c = 0;
  } else {
    FUN_0047b500(p2);
    FUN_005ac69c((void*)(s + 24), (void*)(s + 84), (char*)p1 + 32);
    p3->a = *(int*)(s + 64);
    p3->b = *(int*)(s + 68);
    p3->c = *(int*)(s + 72);
  }
}
