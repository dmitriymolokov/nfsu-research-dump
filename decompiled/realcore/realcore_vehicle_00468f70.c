/* spd-match: far pct=15.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int unaff_ESI;

void FUN_00468f70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  
  (**(code **)(*unaff_ESI + 0x14))();
  FUN_00401cd0();
  piVar3 = (**(int * (**)())(*unaff_ESI + 8))();
  iVar1 = piVar3[1];
  iVar2 = piVar3[2];
  unaff_ESI[0x30] = *piVar3;
  unaff_ESI[0x31] = iVar1;
  unaff_ESI[0x32] = iVar2;
  piVar3 = (**(int * (**)())(*unaff_ESI + 0xc))();
  iVar1 = piVar3[2];
  iVar2 = *piVar3;
  unaff_ESI[0x35] = piVar3[1];
  unaff_ESI[0x34] = iVar2;
  unaff_ESI[0x36] = iVar1;
  unaff_ESI[0x1c] = param_1;
  return;
}
