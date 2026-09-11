/* spd-match: far pct=14.58 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0055EC30 */
#include <windows.h>
extern void* ExceptionList;
extern void* PTR_FUN_006bc80c;
extern void FUN_004f78e0(void*, void*);
extern void* LAB_00560660;
extern void* LAB_005605f0;
void* __stdcall FUN_0055ec30(void* p1, void* p2) {
  int* p = (int*)p1;
  void* local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(p1, p2);
  p[0] = (int)&PTR_FUN_006bc80c;
  p[0x17] = (int)(p + 0x17);
  p[0x18] = (int)(p + 0x17);
  p[0x19] = (int)(p + 0x19);
  p[0x1a] = (int)(p + 0x19);
  p[0x1b] = 0;
  p[0x1c] = 0;
  p[0x1d] = 0;
  p[0x1e] = 0;
  p[0x1f] = 100;
  p[0x20] = 10;
  p[0x21] = 0xb;
  p[0x22] = 0;
  ((char*)p)[0x8c] = 1;
  p[0x24] = 0;
  ((char*)p)[0x94] = 0;
  ExceptionList = local_c;
  return p1;
}
