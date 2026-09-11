/* spd-match: far pct=7.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047E080 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006f227c;
int __fastcall FUN_0047e080(int obj, int param_1)

{

  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)(obj + 0x9fc);
  uVar5 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)(*(int *)(obj + 0xa00) + 0x20);
    do {
      if (*piVar1 == param_1) {
        uVar5 = uVar5 + 1;
      }
      piVar1 = piVar1 + 0x8c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (uVar5 != 0) {
      uVar4 = DAT_006f227c ^ 0x1d872b41;
      uVar5 = DAT_006f227c % uVar5;
      uVar2 = uVar4 >> 5 ^ uVar4;
      DAT_006f227c = uVar2 << 0x1b ^ uVar2 ^ uVar4;
      iVar3 = 0;
      if (0 < *(int *)(obj + 0x9fc)) {
        piVar1 = (int *)(*(int *)(obj + 0xa00) + 0x20);
        do {
          if (*piVar1 == param_1) {
            if (uVar5 == 0) {
              return iVar3 * 0x230 + *(int *)(obj + 0xa00);
            }
            uVar5 = uVar5 - 1;
          }
          iVar3 = iVar3 + 1;
          piVar1 = piVar1 + 0x8c;
        } while (iVar3 < *(int *)(obj + 0x9fc));
      }
    }
  }
  return 0;
}
