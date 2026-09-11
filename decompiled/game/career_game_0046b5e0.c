/* spd-match: far pct=6.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0046bae0();
extern char stack0xffffffb0;

void FUN_0046b5e0(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int unaff_ESI;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_44 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x44))(*(undefined4 *)(unaff_ESI + 0x10));
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x44))(*(undefined4 *)(unaff_ESI + 0xc));
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x2c))(*(undefined4 *)(unaff_ESI + 8));
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x2c))(*(undefined4 *)(unaff_ESI + 8));
  iVar3 = (**(code **)(**(int **)(unaff_ESI + 0xc) + 8))();
  fVar1 = *(float *)(iVar3 + 8);
  pfVar4 = (float *)(**(code **)(**(int **)(unaff_ESI + 0x10) + 8))();
  fStack_3c = pfVar4[1];
  fStack_38 = pfVar4[2];
  fStack_40 = *pfVar4;
  piVar2 = *(int **)(unaff_ESI + 0xc);
  piVar5 = (int *)0x0;
  if ((((*(char *)((int)piVar2 + 0x15) != '\0') ||
       (*(char *)(*(int *)(unaff_ESI + 0x10) + 0x15) != '\x01')) ||
      (piVar6 = piVar2, *(int *)(*(int *)(unaff_ESI + 0x10) + 0x130) < 1)) &&
     (((piVar6 = piVar5, *(char *)((int)*(int **)(unaff_ESI + 0x10) + 0x15) == '\0' &&
       (*(char *)((int)piVar2 + 0x15) == '\x01')) && (0 < piVar2[0x4c])))) {
    piVar6 = *(int **)(unaff_ESI + 0x10);
  }
  iVar3 = (**(code **)(*piVar2 + 0x60))();
  if (iVar3 != 0) {
    fStack_28 = fVar1 - *(float *)(unaff_ESI + 0x28);
    if (*(int **)(unaff_ESI + 0xc) == piVar6) {
      (**(code **)(**(int **)(unaff_ESI + 0xc) + 8))();
    }
  }
  iVar3 = (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x60))();
  if (iVar3 != 0) {
    fStack_40 = fStack_40 + *(float *)(unaff_ESI + 0x20);
    fStack_3c = *(float *)(unaff_ESI + 0x24) + fStack_3c;
    fStack_38 = *(float *)(unaff_ESI + 0x28) + fStack_38;
    fStack_28 = fStack_38;
    if (*(int **)(unaff_ESI + 0x10) == piVar6) {
      iVar3 = (**(code **)(**(int **)(unaff_ESI + 0x10) + 8))();
      fStack_38 = *(float *)(iVar3 + 8);
    }
  }
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x1c))(&stack0xffffffb0);
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x1c))(auStack_44);
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x34))();
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x34))();
  FUN_0046bae0(unaff_ESI);
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x34))();
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x34))();
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x28))(*(undefined4 *)(unaff_ESI + 8));
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x28))(*(undefined4 *)(unaff_ESI + 8));
  return;
}
