/* spd-match: far pct=9.22 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0050CE30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730(...);
int unaff_EBX;

struct ThisCallBox {
  void FUN_0050ce30(int val, int param_2, int param_3);
};
void ThisCallBox::FUN_0050ce30(int val, int param_2, int param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;

  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  char *pcVar7;
  
  piVar3 = (int *)_malloc(0x18);
  piVar3[4] = param_2;
  piVar3[2] = val;
  piVar3[3] = val;
  piVar3[5] = param_3;
  puVar2 = *(undefined4 **)(((int)this) + 0x48);
  *puVar2 = (int)piVar3;
  *(int **)(((int)this) + 0x48) = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = ((int)this) + 0x44;
  iVar4 = FUN_004f8730(((int)this) + 0x4c,piVar3[2],0,1);
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
