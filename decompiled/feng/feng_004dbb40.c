/* spd-match: far pct=2.75 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DBB40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_EDI;
int __fastcall FUN_004dbb40(int obj)

{

  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  iVar1 = obj + 0x5c;
  while (((iVar1 == 0 || (*(int *)(iVar1 + 0x10) == 0)) ||
         (*(int *)(*(int *)(iVar1 + 0x10) + 8) != unaff_EDI))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
    if (9 < iVar2) {
      iVar2 = 0;
      iVar1 = obj + 0x214;
      while (((iVar1 == 0 || (*(int *)(iVar1 + 0x10) == 0)) ||
             (*(int *)(*(int *)(iVar1 + 0x10) + 8) != unaff_EDI))) {
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x2c;
        if (0x13 < iVar2) {
          iVar2 = 0;
          iVar1 = obj + 0x584;
          while (((iVar1 == 0 || (*(int *)(iVar1 + 0x10) == 0)) ||
                 (*(int *)(*(int *)(iVar1 + 0x10) + 8) != unaff_EDI))) {
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x2c;
            if (0x1d < iVar2) {
              return 0;
            }
          }
          return iVar1;
        }
      }
      return iVar1;
    }
  }
  return iVar1;
}
