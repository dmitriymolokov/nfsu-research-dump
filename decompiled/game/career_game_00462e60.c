/* spd-match: far pct=4.10 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00462E60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00577d10();
int __cdecl FUN_00577e60();
int __cdecl FUN_0057a0e0();
int __cdecl FUN_00647b70();
int unaff_EDI;
void __fastcall FUN_00462e60(int obj)

{
  int iVar1;
  int iVar2;

  int iVar3;
  int iVar4;
  int *unaff_EDI;
  float10 fVar5;
  
  iVar1 = *(int *)(obj + 0x18);
  iVar2 = *(int *)(obj + 0x1c);
  iVar3 = FUN_00577d10(*(undefined4 *)(obj + 0x14));
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 == iVar3 + 0x2c) {
      iVar4 = FUN_00577e60(0);
    }
    else {
      if (iVar4 == 0) {
        return;
      }
      iVar4 = iVar4 + -4;
    }
    if ((iVar4 != 0) && (iVar3 = FUN_00647b70(), iVar3 == 4)) {
      *unaff_EDI = iVar4;
      fVar5 = (float10)FUN_0057a0e0((float)iVar1);
      unaff_EDI[1] = (int)(float)fVar5;
      unaff_EDI[2] = (int)(float)iVar1;
      unaff_EDI[3] = (int)(float)iVar2;
    }
  }
  return;
}
