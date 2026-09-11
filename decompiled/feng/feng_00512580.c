/* spd-match: far pct=8.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00512580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
int unaff_EDI;
void __fastcall FUN_00512580(int obj, int param_1, int param_2, int param_3, int param_4, undefined4 param_5)

{
  undefined4 *puVar1;

  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  piVar2 = _malloc(0x18);
  piVar2[2] = param_1;
  piVar2[3] = param_3;
  piVar2[4] = param_4;
  piVar2[5] = param_2;
  puVar1 = *(undefined4 **)(obj + 0x48);
  *puVar1 = piVar2;
  *(int **)(obj + 0x48) = piVar2;
  *piVar2 = obj + 0x44;
  piVar2[1] = (int)puVar1;
  iVar3 = FUN_004f8730(obj + 0x4c,piVar2[2],param_5,1);
  if (((unaff_EDI != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x24) != unaff_EDI)) {
    *(int *)(iVar3 + 0x24) = unaff_EDI;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
  }
  return;
}
