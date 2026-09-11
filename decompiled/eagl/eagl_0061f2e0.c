/* spd-match: far pct=18.48 flags=/Og /c /nologo /TC method=m39 source=m39/m4g0-s01/va_0061F2E0 */
#include <windows.h>
extern int __stdcall FUN_0061f1b0(void* p1, void* p2);
extern void* (__cdecl *PTR_FUN_006dfa9c)(unsigned int, const char*);
void* __stdcall FUN_0061f2e0(char* p1, unsigned int p2) {
  char* cur;
  char* dst;
  unsigned int size;
  void* res;
  cur = p1;
  while (*cur) cur++;
  size = (unsigned int)(cur - p1 + 5);
  res = PTR_FUN_006dfa9c(size, "EAGL::SymbolEntry");
  *(unsigned int*)res = p2;
  dst = (char*)res + 4;
  cur = p1;
  while (*cur) {
    *dst++ = *cur++;
  }
  *dst = 0;
  FUN_0061f1b0(p1, res);
  return (void*)((char*)res + 4);
}
