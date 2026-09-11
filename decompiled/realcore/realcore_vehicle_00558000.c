/* spd-match: far pct=17.35 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00558000 */
#include <windows.h>
extern int __cdecl FUN_004ef050(int, int, int);
extern int __cdecl FUN_004f5f80(int, int);
extern int __cdecl FUN_004f65d0(int);
extern int __cdecl FUN_004f6910(int);
extern int __cdecl FUN_004f6970(int);
extern int __cdecl FUN_004ffb70(int, int);
extern int DAT_0073578c;
void __stdcall FUN_00558000(int edi) {
  int eax, esi = 0, ebx = 0;
  eax = FUN_004f65d0(0x734bc8);
  if (eax != 0 && (eax = FUN_004ffb70(edi, eax)) != 0) {
    esi = DAT_0073578c;
  } else {
    esi = DAT_0073578c;
    if (esi != 0) eax = FUN_004ef050(*(int*)(esi + 8), edi, 0x734bc8);
    else eax = 0;
  }
  if ((char)ebx == 0) FUN_004f6910(eax);
  else FUN_004f6970(eax);
  if (esi != 0) FUN_004f5f80(esi, ebx);
}
