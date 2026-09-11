/* spd-match: far pct=22.32 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00579510 */
#include <stddef.h>
extern void *ExceptionList;
extern void *DAT_007345b8;
extern void FUN_00579590(void*);
extern void FUN_00579720(void*);
extern void *__stdcall _malloc(unsigned int);
extern void __stdcall _eh_vector_constructor_iterator_(void*, unsigned int, unsigned int, void*, void*);
extern void LAB_00685113(void);
void FUN_00579510(void) {
  void *prev;
  void *frame[2];
  void *p;
  prev = ExceptionList;
  frame[0] = prev;
  frame[1] = &LAB_00685113;
  ExceptionList = frame;
  p = _malloc(0x44);
  if (p != 0) {
    *(unsigned int*)p = 8;
    _eh_vector_constructor_iterator_((char*)p + 4, 8, 8, FUN_00579590, FUN_00579720);
    DAT_007345b8 = (char*)p + 4;
  } else {
    DAT_007345b8 = 0;
  }
  ExceptionList = prev;
}
