/* spd-match: far pct=11.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069_void_illegal */
#include "ghidra_compat.h"

int __cdecl FUN_0046b260();
int __cdecl FUN_0046bae0();

void FUN_0046b790(void)

{
  float *pfVar1;
  int iVar2;
  int unaff_ESI;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_20;
  
  fStack_44 = *(float *)(unaff_ESI + 0x10);
  fStack_48 = 6.494364e-39;
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x44))();
  fStack_48 = *(float *)(unaff_ESI + 0xc);
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x44))();
  if (*(char *)(*(int *)(unaff_ESI + 0x14) + 0x15) != '\0') {
    FUN_0046b260(unaff_ESI,0);
    pfVar1 = (**(float * (**)())(**(int **)(unaff_ESI + 0xc) + 8))();
    fStack_44 = pfVar1[1];
    fStack_40 = pfVar1[2];
    fStack_48 = *pfVar1;
    pfVar1 = (**(float * (**)())(**(int **)(unaff_ESI + 0x10) + 8))();
    fStack_34 = pfVar1[1];
    fStack_30 = pfVar1[2];
    fStack_38 = *pfVar1;
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x60))();
    if (iVar2 != 0) {
      fStack_48 = fStack_48 - *(float *)(unaff_ESI + 0x20);
      fStack_44 = fStack_44 - *(float *)(unaff_ESI + 0x24);
      fStack_40 = fStack_40 - *(float *)(unaff_ESI + 0x28);
      fStack_20 = fStack_40;
    }
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x60))();
    if (iVar2 != 0) {
      fStack_38 = fStack_38 + *(float *)(unaff_ESI + 0x20);
      fStack_34 = *(float *)(unaff_ESI + 0x24) + fStack_34;
      fStack_30 = *(float *)(unaff_ESI + 0x28) + fStack_30;
      fStack_20 = fStack_30;
    }
    (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x1c))(&fStack_48);
    (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x1c))(auStack_3c);
    (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x34))();
    (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x34))();
  }
  FUN_0046bae0(unaff_ESI);
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x34))();
  (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x34))();
  return;
}
