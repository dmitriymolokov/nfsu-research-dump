/* spd-match: far pct=13.51 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0055BFC0 */
#include "ghidra_compat.h"
extern void *ExceptionList;
void* __cdecl FUN_0055bfc0(int* p1, int p2) {
  void* frame[3];
  frame[0] = ExceptionList;
  frame[1] = (void*)0x006880A1;
  frame[2] = (void*)-1;
  ExceptionList = frame;
  FUN_004f78e0(p1, p2);
  frame[2] = 0;
  p1[0] = 0x6BC99C;
  _eh_vector_constructor_iterator_(p1 + 0x1E, 0x208, 4, 0, 0);
  frame[2] = (void*)1;
  FUN_0055c550(p1);
  p1[0x14] = -1;
  ((char*)p1)[0x54] = 0;
  ExceptionList = frame[0];
  return p1;
}
