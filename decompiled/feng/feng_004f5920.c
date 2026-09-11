/* spd-match: far pct=28.26 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.2-n5/va_004F5920 */
#include "ghidra_compat.h"
void __stdcall FUN_004f3b60();
int __stdcall FUN_004f3f90(void*);
void __stdcall FUN_004f5740(void*);
void __stdcall FUN_004ffb00(void*);
extern int DAT_00746104;
void __stdcall FUN_004f5920(void* param_1) {
  void* esi = param_1;
  FUN_004f5740(esi);
  if (FUN_004f3f90(&DAT_00746104)) FUN_004f3b60();
  FUN_004ffb00(esi);
  FUN_004ffb00(esi);
}
