/* spd-match: far pct=16.13 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00577450 */
#include <windows.h>
extern void* ExceptionList;
extern void LAB_00685f90(void);
extern int FUN_00577210(void* p1, void* p2);
void* __cdecl FUN_00577450(void* param_1, int* param_2) {
  int local_var[26];
  void* p_ex_ptr = ExceptionList;
  void* p_handler = &LAB_00685f90;
  ExceptionList = &p_ex_ptr;
  FUN_00577210(param_1, param_2);
  ExceptionList = p_ex_ptr;
  return param_1;
}
