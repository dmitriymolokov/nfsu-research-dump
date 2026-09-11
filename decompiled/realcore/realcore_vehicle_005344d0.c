/* spd-match: close pct=91.67 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005344D0 */
#include "ghidra_compat.h"
extern void __cdecl FUN_005337f0(void);
extern void* PTR_FUN_006be320;
void* __fastcall FUN_005344d0(int* obj) {
  FUN_005337f0();
  *(void**)obj = &PTR_FUN_006be320;
  obj[0xa0] = 0;
  *(float*)(obj + 0x86) = 400.0f;
  *(float*)(obj + 0x87) = 50.0f;
  return obj;
}
