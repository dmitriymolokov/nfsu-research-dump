/* spd-match: far pct=15.96 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00622DD0 */
#include <windows.h>
extern void** DAT_00709d80;
extern int* DAT_0070a4a4;
void __fastcall FUN_00622dd0(int* p) {
  int eax;
  eax = p[4];
  p[1] = 0;
  p[2] = 0;
  p[4] = eax - 1;
  if ((eax - 1 == 0) && (*(char*)(p + 3) == 0)) {
    void* pObj = *DAT_00709d80;
    void** vtbl = *(void***)pObj;
    ((void (__stdcall *)(void*, int))vtbl[78])(pObj, p[0]);
  }
  if (p[6] != 0) { *(int*)(p[6] + 5) = p[5]; }
  if (p[5] != 0) { *(int*)(p[5] + 6) = p[6]; }
  if (p == DAT_0070a4a4) { DAT_0070a4a4 = (int*)p[5]; }
  p[6] = 0;
  p[5] = 0;
}
