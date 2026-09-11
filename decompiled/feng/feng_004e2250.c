/* spd-match: far pct=7.19 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E2250 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
int __cdecl FUN_005461c0();
int unaff_ESI;
void __fastcall FUN_004e2250(int obj, int param_1, int param_2, int param_3, undefined1 param_4, undefined1 param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;

  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int unaff_ESI;
  
  piVar3 = _malloc(0x18);
  piVar3[2] = param_2;
  piVar3[4] = param_3;
  piVar3[3] = param_1;
  *(undefined1 *)((int)piVar3 + 0x15) = param_4;
  *(undefined1 *)(piVar3 + 5) = param_5;
  puVar2 = *(undefined4 **)(obj + 0x48);
  *puVar2 = piVar3;
  *(int **)(obj + 0x48) = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = obj + 0x44;
  iVar4 = FUN_004f8730(obj + 0x4c,piVar3[2],CONCAT31((int3)((uint)puVar2 >> 8),unaff_ESI != 0),1)
  ;
  iVar5 = FUN_005461c0();
  if (iVar5 == 0) {
    pcVar7 = "GENERICPLACEHOLDER";
    uVar6 = 0x47;
    iVar5 = -1;
    do {
      iVar5 = iVar5 * 0x21 + uVar6;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar6 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != iVar5)) {
      *(int *)(iVar4 + 0x24) = iVar5;
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    }
  }
  else if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != unaff_ESI)) {
    *(int *)(iVar4 + 0x24) = unaff_ESI;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    return;
  }
  return;
}
