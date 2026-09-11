/* spd-match: far pct=21.21 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_00548210 */
#include <windows.h>
extern void __stdcall FUN_005488d0(int size);
extern volatile int dword_7354FC;
extern void __cdecl FUN_0043BD10(void *ptr);
void __cdecl FUN_00548210(int val) {
  FUN_005488d0(0x20);
  if (val > dword_7354FC) {
    dword_7354FC = val;
    FUN_0043BD10(0);
  }
}
