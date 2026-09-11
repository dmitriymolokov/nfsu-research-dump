/* spd-match: far pct=5.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050DD40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
void __fastcall FUN_0050dd40(char * obj, int param_1, int param_2, int param_3, int param_4, int param_5, undefined1 param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined4 *puVar3;

  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  
  piVar4 = _malloc(0x3c);
  piVar4[4] = param_4;
  piVar4[2] = param_1;
  piVar4[3] = param_1;
  piVar4[0xd] = param_3;
  *(undefined1 *)(piVar4 + 0xe) = param_6;
  if (obj == (char *)0x0) {
    piVar10 = piVar4 + 5;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
  }
  else {
    cVar2 = *obj;
    piVar10 = piVar4 + 5;
    *(char *)piVar10 = cVar2;
    if (cVar2 != '\0') {
      piVar5 = piVar10;
      do {
        cVar2 = (obj + (1 - (int)piVar10))[(int)piVar5];
        piVar5 = (int *)((int)piVar5 + 1);
        *(char *)piVar5 = cVar2;
      } while (cVar2 != '\0');
    }
  }
  puVar3 = *(undefined4 **)(param_2 + 0x48);
  *puVar3 = piVar4;
  *(int **)(param_2 + 0x48) = piVar4;
  piVar4[1] = (int)puVar3;
  *piVar4 = param_2 + 0x44;
  iVar6 = FUN_004f8730(param_2 + 0x4c,piVar4[2],0,1);
  if (param_5 == 0) {
    pcVar9 = "VISUAL_PART_RIMS";
    iVar8 = -1;
    uVar7 = 0x56;
    do {
      iVar8 = iVar8 * 0x21 + uVar7;
      pbVar1 = (byte *)(pcVar9 + 1);
      uVar7 = (uint)*pbVar1;
      pcVar9 = pcVar9 + 1;
    } while (*pbVar1 != 0);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != iVar8)) {
      *(int *)(iVar6 + 0x24) = iVar8;
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
    }
  }
  else if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != param_5)) {
    *(int *)(iVar6 + 0x24) = param_5;
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
    return;
  }
  return;
}
