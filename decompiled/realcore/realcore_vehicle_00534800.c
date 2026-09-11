/* spd-match: far pct=5.56 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00534800 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005336c0();
extern unsigned char *PTR_FUN_006be3d0;
void __fastcall FUN_00534800(int * ctx, undefined4 val)

{
  undefined4 * esi;
  
  esi = (undefined4 *)ctx[2];
  FUN_005336c0(esi,val);
  *(undefined1 *)(esi + 0xa0) = 0;
  *(undefined1 *)((int)esi + 0x281) = 0;
  esi[0xa2] = 0;
  *esi = &PTR_FUN_006be3d0;
  return;
}
