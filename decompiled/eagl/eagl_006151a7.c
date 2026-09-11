/* spd-match: far pct=25.97 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006151A7 */
#include <windows.h>
int __cdecl FUN_006139d8(int*, int*, void*, int*, int*, void*, int);
extern int DAT_006a62d8;
int __cdecl FUN_006151a7(int *this_ptr) {
  int buf[0x44];
  int l_c = 0;
  int l_30 = 0;
  int uVar6 = *(int*)((char*)this_ptr + 0x98) & 0xffffff;
  int ecx_backup = (int)this_ptr;
  if (FUN_006139d8((int*)((char*)this_ptr + 0x98), &DAT_006a62d8, (void*)0x70, &l_c, buf, &l_30, uVar6) != 0) return 1;
  return 0;
}
