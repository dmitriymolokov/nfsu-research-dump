/* spd-match: far pct=23.33 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0053EC30 */
#include "ghidra_compat.h"
struct Obj { char pad[13]; char flags; short refCount; };
extern "C" void* __cdecl FUN_0053e560(void* p, int a);
extern "C" Obj* __cdecl FUN_0053e5e0(void* p, int a);
extern "C" void __cdecl FUN_0053ebc0(void* p);
void __fastcall FUN_0053ec30(void* ecx, int edx, int arg2) {
  void* esi = ecx;
  if (!arg2) return;
  if (!esi) {
    esi = FUN_0053e560(ecx, arg2);
    if (!esi) return;
  }
  Obj* pObj = FUN_0053e5e0(esi, arg2);
  if (pObj) {
    if (--pObj->refCount == 0) {
      if (pObj->flags & 0x10) {
        pObj->flags |= 0x20;
        return;
      }
      FUN_0053ebc0(esi);
    }
  }
}
