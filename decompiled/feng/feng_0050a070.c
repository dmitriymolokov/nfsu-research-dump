/* spd-match: far pct=8.66 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050A070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8730();
int __cdecl FUN_005a4370();
extern int DAT_00745e40;
extern void LAB_0050a0b6(void);
int unaff_EBX;
void __fastcall FUN_0050a070(int obj, int param_1, int param_2, int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;

  int *piVar4;
  int iVar5;
  int unaff_EBX;
  
  piVar4 = _malloc(0x18);
  piVar4[2] = param_1;
  piVar4[3] = param_2;
  piVar4[4] = param_3;
  if (DAT_00745e40 == 1) {
    cVar2 = FUN_005a4370();
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_0050a0b6;
    }
  }
  uVar3 = 0;
LAB_0050a0b6:
  *(undefined1 *)(piVar4 + 5) = uVar3;
  puVar1 = *(undefined4 **)(obj + 0x48);
  *puVar1 = piVar4;
  *(int **)(obj + 0x48) = piVar4;
  *piVar4 = obj + 0x44;
  piVar4[1] = (int)puVar1;
  iVar5 = FUN_004f8730(obj + 0x4c,piVar4[2],0,1);
  if (((unaff_EBX != 0) && (iVar5 != 0)) && (*(int *)(iVar5 + 0x24) != unaff_EBX)) {
    *(int *)(iVar5 + 0x24) = unaff_EBX;
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
  }
  return;
}
