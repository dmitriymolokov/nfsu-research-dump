/* spd-match: far pct=25.64 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006362B0 */
#include "ghidra_compat.h"
extern void * PTR_FUN_006a8590;
extern void (__cdecl * PTR_FUN_006dfaa0)(void *, int);
extern void __cdecl FUN_00628ed0(void);
void * __fastcall FUN_006362b0(void *pThis, void *unused, unsigned char flags) {
  *(void **)pThis = PTR_FUN_006a8590;
  FUN_00628ed0();
  if (flags & 1) {
    PTR_FUN_006dfaa0(pThis, 0x18);
  }
  return pThis;
}
