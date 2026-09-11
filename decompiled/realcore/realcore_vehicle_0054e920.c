/* spd-match: far pct=11.88 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054E920 */
#include "ghidra_compat.h"
extern int DAT_00734f70; extern unsigned char *DAT_0073578c; extern int DAT_00746104; extern int DAT_00777cb4; extern int DAT_00777cc8; extern unsigned char *PTR_FUN_006bd0cc; extern void LAB_006878d0(void);
int __cdecl FUN_004ef050(int); int __cdecl FUN_004f3f90(void*); int __cdecl FUN_004f78e0(void*,void*); int __cdecl FUN_004f9f30(void); int __cdecl FUN_004fd1e0(int); int __cdecl FUN_004ffb00(int);
void *ExceptionList;
unsigned int* FUN_0054e920(unsigned int* p, unsigned int p2) {
  void* handler = LAB_006878d0;
  void* prev = ExceptionList;
  int local_4 = -1;
  unsigned int* ptr;
  int i;
  unsigned char* p_byte;
  ExceptionList = &handler;
  FUN_004f78e0(p, (void*)p2);
  p[0] = (unsigned int)&PTR_FUN_006bd0cc;
  local_4 = 0;
  p[0x16] = 0xfa; p[0x15] = 0xa; p[0x19] = 0; p[0x1a] = 0; p[0x1b] = 0; p[0x1c] = 0; p[0x18] = 0;
  ptr = (unsigned int*)FUN_004f9f30();
  DAT_00777cb4 = 0; DAT_00777cc8 = 0;
  ptr[4] = 0; ptr[5] = 0; ptr[6] = 0; ptr[7] = 0; ptr[3] = 0;
  FUN_004f9f30();
  p_byte = (unsigned char*)p + 0x7c;
  for(i = 0; i < 10; ++i) { *p_byte = 0; p_byte += 0x20; }
  ExceptionList = prev;
  return p;
}
