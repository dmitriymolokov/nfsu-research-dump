/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0058DD50 */
#include <stddef.h>
extern void *__cdecl FUN_00566dc0(int, const char *, int);
extern void *DAT_007344d4, *DAT_007344d8, *DAT_0073d81c, *DAT_0073d818;
extern int DAT_0073d814;
void __stdcall FUN_0058dd50(void) {
  register void *res;
  DAT_007344d4 = res = FUN_00566dc0(0x24, (const char *)0x6b92b8, 0);
  if (res != NULL && DAT_0073d814 == 1) {
    void *prev = DAT_0073d81c;
    *(void **)res = prev;
    DAT_0073d81c = res;
    *(void **)((char *)res + 4) = prev;
    *(void **)res = &DAT_0073d818;
  }
  DAT_007344d8 = res = FUN_00566dc0(0x18, (const char *)0x6b92a0, 0);
  if (res != NULL && DAT_0073d814 == 1) {
    void *prev = DAT_0073d81c;
    *(void **)res = prev;
    DAT_0073d81c = res;
    *(void **)((char *)res + 4) = prev;
    *(void **)res = &DAT_0073d818;
  }
}
