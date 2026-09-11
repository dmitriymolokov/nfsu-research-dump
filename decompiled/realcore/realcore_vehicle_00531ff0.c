/* spd-match: far pct=12.82 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00531FF0 */
#include <windows.h>
extern int DAT_007356a8;
void __cdecl FUN_00567370(void*, int);
void __cdecl FUN_004655b0(void);
int __fastcall FUN_00531ff0(void* esi_ptr) {
  int iVar1;
  int* p_list;
  int* p_ebx;
  int stack_buf[20];
  if (*(unsigned char*)((char*)esi_ptr + 0x219)) return 0;
  p_list = (int*)(*(int*)(DAT_007356a8 + 0x80) + 0x24);
  if (!p_list) return 0;
  p_ebx = (int*)*p_list;
  iVar1 = *(int*)((char*)esi_ptr + 0x32c);
  if (!iVar1) return 0;
  FUN_00567370((char*)stack_buf + 0x40, 0x736730);
  FUN_004655b0();
  return 1;
}
