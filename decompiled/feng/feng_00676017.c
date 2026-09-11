/* spd-match: far pct=8.51 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00676017 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_EDI;
void __fastcall write_string(int * obj, int param_1)

{

  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      write_char();
    } while (*obj != -1);
  }
  else {
    *obj = *obj + param_1;
  }
  return;
}
