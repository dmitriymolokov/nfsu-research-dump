/* spd-match: far pct=21.13 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00533A00 */
#include <windows.h>
extern void *ExceptionList;
extern void *PTR_FUN_006be368;
extern void *PTR_LAB_006be7c4;
void __stdcall FUN_005340c0(void);
void __stdcall FUN_00533a00(void *p) {
  void *old_fs = *(void **)__readfsdword(0);
  void *frame[3] = {old_fs, &PTR_FUN_006be368, 0};
  __writefsdword(0, (unsigned long)&frame);
  *(void **)p = &PTR_FUN_006be368;
  FUN_005340c0();
  *(void **)p = &PTR_LAB_006be7c4;
  __writefsdword(0, (unsigned long)old_fs);
}
