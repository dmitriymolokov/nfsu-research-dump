/* spd-match: far pct=31.94 flags=/Og /c /nologo /TP method=m39 source=m39/m39/va_0061193A */
#include <windows.h>
struct Container { char pad[0x100]; };
extern int __cdecl FUN_005fbec8(void* pThis, int a, int b, const char* c);
extern int __cdecl FUN_0061a26f(void* pThis, int val);
int __cdecl FUN_0061193a(void* pThis, int arg0) {
  int* table = *(int**)((char*)pThis + 0x14);
  int ebx = table[arg0];
  if ((*(unsigned int*)((char*)pThis + 0x30) & 0xFFFF) <= 0x100) {
    int addr98 = *(int*)((char*)pThis + 0x98);
    FUN_005fbec8(pThis, *(int*)(addr98 + 0x34), 0x119f, "relative addressing not supported in vs_1_0 instruction set");
    return -0x7FFFFFFF;
  }
  int next = *(int*)(ebx + 4);
  if (next != -1 && FUN_0061193a(pThis, next) < 0) return -1;
  if (*(int*)((char*)pThis + 0xCC) == arg0) return 0;
  if (FUN_0061a26f(pThis, 1) < 0) return -1;
  return 0;
}
