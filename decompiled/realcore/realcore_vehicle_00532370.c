/* spd-match: close pct=96.43 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00532370 */
#include "ghidra_compat.h"

void __cdecl FUN_00530570(void);
extern unsigned int PTR_FUN_006be6c8;

void* __fastcall FUN_00532370(void* eax_val) {
  void* esi = eax_val;
  FUN_00530570();
  *(unsigned int*)esi = 0x6be6c8;
  *(unsigned int*)((char*)esi + 0x36c) = 0;
  return esi;
}
