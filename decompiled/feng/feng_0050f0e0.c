/* spd-match: far pct=6.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050F0E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
int unaff_EBX;
void __fastcall FUN_0050f0e0(int val, int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;

  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  char *pcVar7;
  
  piVar3 = _malloc(0x10);
  piVar3[2] = val;
  piVar3[3] = val;
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  *puVar2 = piVar3;
  *(int **)(param_1 + 0x48) = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = param_1 + 0x44;
  iVar4 = FUN_004f8730(param_1 + 0x4c,piVar3[2],0,1);
  if (unaff_EBX == 0) {
    pcVar7 = "VISUAL_PART_RIMS";
    iVar6 = -1;
    uVar5 = 0x56;
    do {
      iVar6 = iVar6 * 0x21 + uVar5;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar5 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != iVar6)) {
      *(int *)(iVar4 + 0x24) = iVar6;
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    }
  }
  else if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != unaff_EBX)) {
    *(int *)(iVar4 + 0x24) = unaff_EBX;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    return;
  }
  return;
}
