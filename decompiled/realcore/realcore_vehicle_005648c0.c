/* spd-match: far pct=40.54 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005648C0 */
#include <windows.h>
struct Data { DWORD low; DWORD high; };
extern DWORD dword_007349C8;
extern void (__stdcall *ptr_0069717c)(struct Data*);
extern void __cdecl sub_006849A0(DWORD, DWORD, DWORD);
void FUN_005648c0(void) {
  struct Data d;
  ptr_0069717c(&d);
  sub_006849A0(d.low, d.high, dword_007349C8);
}
