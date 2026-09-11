/* spd-match: far pct=6.58 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005040e0();
int unaff_ESI;
void __fastcall FUN_00504020(undefined4 * obj)

{
  short sVar1;

  int iVar2;
  short *psVar3;
  short *psVar4;
  undefined4 *unaff_ESI;
  
  psVar4 = (short *)*unaff_ESI;
  if (psVar4 != (short *)0x0) {
    iVar2 = 0;
    sVar1 = *psVar4;
    while (sVar1 != 0) {
      iVar2 = iVar2 + 1;
      sVar1 = psVar4[iVar2];
    }
    if ((uint)obj[1] < iVar2 + 1U) {
      FUN_005040e0();
    }
    psVar4 = (short *)*obj;
    psVar3 = (short *)*unaff_ESI;
    if (psVar4 != (short *)0x0) {
      if (psVar3 != (short *)0x0) {
        sVar1 = *psVar3;
        while (sVar1 != 0) {
          *psVar4 = sVar1;
          psVar3 = psVar3 + 1;
          psVar4 = psVar4 + 1;
          sVar1 = *psVar3;
        }
      }
      *psVar4 = 0;
    }
  }
  return;
}
