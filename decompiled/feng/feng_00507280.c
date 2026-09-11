/* spd-match: far pct=6.88 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00507280 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
int __cdecl FUN_005461c0();
int unaff_BL;
void __fastcall FUN_00507280(int obj, int param_1, int param_2, int param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;

  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 unaff_BL;
  
  piVar3 = _malloc(0x1c);
  piVar3[3] = param_1;
  piVar3[2] = (int)piVar3;
  piVar3[4] = 0;
  piVar3[5] = param_3;
  puVar2 = *(undefined4 **)(obj + 0x48);
  *puVar2 = piVar3;
  *(int **)(obj + 0x48) = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = obj + 0x44;
  iVar4 = FUN_004f8730(obj + 0x4c,piVar3[2],0,1);
  iVar5 = FUN_005461c0(param_2,0,0);
  if (iVar5 == 0) {
    pcVar7 = "GENERICPLACEHOLDER";
    iVar5 = -1;
    uVar6 = 0x47;
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
  else if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != param_2)) {
    *(int *)(iVar4 + 0x24) = param_2;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    *(undefined1 *)(piVar3 + 6) = unaff_BL;
    return;
  }
  *(undefined1 *)(piVar3 + 6) = unaff_BL;
  return;
}
