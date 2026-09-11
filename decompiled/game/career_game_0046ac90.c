/* spd-match: far pct=6.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046AC90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
extern int DAT_00735fe4;
int unaff_EBX;
void __fastcall FUN_0046ac90(undefined4 * obj)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  int *piVar6;
  int unaff_EBX;
  
  piVar1 = (int *)*obj;
  piVar6 = (int *)FUN_0040a880();
  iVar5 = DAT_00735fe4;
  while (piVar4 = piVar1, piVar4 != piVar6) {
    piVar1 = (int *)*piVar4;
    if ((piVar4[3] == unaff_EBX) || (piVar4[4] == unaff_EBX)) {
      piVar2 = (int *)piVar4[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      iVar3 = *(int *)(iVar5 + 0x18);
      *piVar4 = *(int *)(iVar5 + 0x10);
      *(int *)(iVar5 + 0x18) = iVar3 + -1;
      *(int **)(iVar5 + 0x10) = piVar4;
    }
  }
  return;
}
