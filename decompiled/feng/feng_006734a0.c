/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_006734A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern char stack0x00000000;
extern char stack0x00000004;
int unaff_retaddr;
void __fastcall __chkstk(uint val)

{

  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (val < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -val) = unaff_retaddr;
    return;
  }
  puVar1 = &stack0x00000004;
  do {
    puVar1 = puVar1 + -0x1000;
    val = val - 0x1000;
  } while (0xfff < val);
  *(undefined4 *)(puVar1 + (-4 - val)) = unaff_retaddr;
  return;
}
