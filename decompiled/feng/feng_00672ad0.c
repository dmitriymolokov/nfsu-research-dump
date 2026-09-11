/* spd-match: far pct=3.77 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00672AD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall shortsort(undefined1 * obj, undefined1 *param_1, int param_2, code *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;

  int iVar3;
  undefined1 *puVar4;
  
  for (; puVar2 = param_1, puVar4 = param_1, param_1 < obj; obj = obj + -param_2) {
    while (puVar4 = puVar4 + param_2, puVar4 <= obj) {
      iVar3 = (*param_3)(puVar4,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != obj) && (param_2 != 0)) {
      puVar4 = obj;
      iVar3 = param_2;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)obj];
        puVar4[(int)puVar2 - (int)obj] = *puVar4;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
