/* spd-match: far pct=25.00 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_005222E0 */
#include <windows.h>
extern int DAT_00735698;
static int get_0(void* p) { return *(int*)((char*)p + 4); }
static int get_1(void* p) { return *(int*)((char*)p + 12); }
static int get_2(void* p) { return *(int*)((char*)p + 20); }
static int get_3(void* p) { return *(int*)((char*)p + 24); }
static int get_4(void* p) { return *(int*)((char*)p + 28); }
static int get_5(void* p) { return *(int*)((char*)p + 32); }
static int get_6(void* p) { return *(int*)((char*)p + 36); }
int __stdcall FUN_005222e0(void* obj) {
  static int (*table[])(void*) = {get_0, get_1, get_2, get_3, get_4, get_5, get_6};
  int idx = DAT_00735698;
  if ((unsigned int)idx > 6) return 0;
  return table[idx](obj);
}
