/* spd-match: far pct=5.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053E400 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_EDI;
int __fastcall FUN_0053e400(int obj, uint param_1, int param_2, int param_3)

{

  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint unaff_EDI;
  
  if (((param_2 != 0) && (0 < obj)) && (param_3 + 4U <= unaff_EDI)) {
    iVar4 = 0;
    iVar5 = obj + -1;
    if (-1 < iVar5) {
      do {
        iVar2 = (iVar5 + iVar4) / 2;
        iVar1 = iVar2 * unaff_EDI + param_2;
        if (param_1 < *(uint *)(iVar1 + param_3)) {
          iVar5 = iVar2 + -1;
        }
        else {
          if (param_1 <= *(uint *)(iVar1 + param_3)) {
            if (iVar2 < 1) {
              return iVar1;
            }
            puVar3 = (uint *)((iVar1 - unaff_EDI) + param_3);
            do {
              if (*puVar3 != param_1) {
                return iVar1;
              }
              iVar1 = iVar1 - unaff_EDI;
              puVar3 = (uint *)((int)puVar3 - unaff_EDI);
              iVar2 = iVar2 + -1;
            } while (0 < iVar2);
            return iVar1;
          }
          iVar4 = iVar2 + 1;
        }
      } while (iVar4 <= iVar5);
    }
  }
  return 0;
}
