/* spd-match: far pct=14.89 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_0054F9B0 */
#include <windows.h>
extern int DAT_0073578c;
extern void* ExceptionList;
void __stdcall FUN_004f78e0(void*, int);
int __stdcall FUN_004fd230(void);
int __stdcall FUN_004f65d0(void);
int __stdcall FUN_004ffb70(void);
int __stdcall FUN_004ef050(int);
void __stdcall FUN_004f6970(int);
void* FUN_0054f9b0(void* p, int a) {
  int* obj = (int*)p;
  void* handler = ExceptionList;
  ExceptionList = &handler;
  FUN_004f78e0(p, a);
  obj[0] = 0x6bd05c;
  obj[0x10] = (int)"MU_ONLINE_WAITING.fng";
  FUN_004fd230();
  if (FUN_004f65d0() != 0) {
    int res = FUN_004ffb70();
    if (res != 0 && *(int*)(res + 0x18) == 2) obj[0x19] = res;
    else obj[0x19] = 0;
  } else {
    obj[0x19] = 0;
  }
  ExceptionList = handler;
  return p;
}
