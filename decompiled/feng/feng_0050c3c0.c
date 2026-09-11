/* spd-match: far pct=5.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050C3C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
int unaff_EDI;
void __fastcall FUN_0050c3c0(int obj, int param_1, int param_2, int param_3, undefined4 param_4)

{
  undefined4 *puVar1;

  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  piVar2 = _malloc(0x14);
  piVar2[2] = param_1;
  piVar2[4] = param_3;
  piVar2[3] = param_2;
  puVar1 = *(undefined4 **)(obj + 0x48);
  *puVar1 = piVar2;
  *(int **)(obj + 0x48) = piVar2;
  piVar2[1] = (int)puVar1;
  *piVar2 = obj + 0x44;
  iVar3 = FUN_004f8730(obj + 0x4c,piVar2[2],param_4,1);
  if (((unaff_EDI != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x24) != unaff_EDI)) {
    *(int *)(iVar3 + 0x24) = unaff_EDI;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
  }
  return;
}
