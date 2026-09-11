/* spd-match: far pct=15.00 flags=/O2 /Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0057C240 */
#include <windows.h>
extern void* ExceptionList;
extern unsigned int PTR_FUN_006ba464;
extern unsigned int LAB_00686f18;
void __stdcall FUN_00578060(void* p1, void* p2, int val);
void __stdcall FUN_005796b0(void* p1, int val1, int val2);
void* __stdcall FUN_0057c240(void* param1, void* param2) {
  void* prev_frame;
  void* handler_ptr = &LAB_00686f18;
  prev_frame = ExceptionList;
  ExceptionList = &prev_frame;
  FUN_00578060(param1, param2, 0);
  *(unsigned int*)param1 = (unsigned int)&PTR_FUN_006ba464;
  FUN_005796b0((char*)param1 + 0x1c, 7, 0);
  ExceptionList = prev_frame;
  return param1;
}
