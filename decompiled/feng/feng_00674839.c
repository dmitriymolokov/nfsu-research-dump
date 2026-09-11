/* spd-match: far pct=30.12 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00674839 */
#include "ghidra_compat.h"
void __cdecl FUN_00675b84(int, void*);
void __cdecl FUN_006718b6(void*);
int __cdecl FUN_0067868f(void*);
int __cdecl FUN_0067604e(void*, void*, void*);
void __cdecl FUN_00678717(void*, int);
int __cdecl FUN_0067488c();
void __cdecl FUN_00675bbf(int);
int __cdecl FUN_00674839(void* p1, void* p2, void* p3) {
  volatile int v24;
  int v20;
  FUN_00675b84(20, (void*)0x6ac1d8);
  FUN_006718b6(p1);
  v20 = FUN_0067868f(p1);
  v24 = FUN_0067604e(p1, p2, p3);
  FUN_00678717(p1, v20);
  FUN_0067488c();
  FUN_00675bbf(v24);
  return v24;
}
