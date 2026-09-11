/* Decompiled from Speed.exe @ 0058a550 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00585fa0();
  *(float *)(unaff_EDI + 0x70) = (float)(fVar4 - (float10)_DAT_00734504);
  if (*(int *)(unaff_EDI + 0x40) == 0) {
    *(undefined4 *)(unaff_EDI + 0x68) = 2;
    return;
  }
  iVar2 = FUN_00594c60(unaff_EDI + 0xc,1,1);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EDI + 0x68) = 3;
    return;
  }
  iVar3 = *(int *)(unaff_EDI + 0x40) - *(int *)(unaff_EDI + 0x44);
  if (*(int *)(unaff_EDI + 0x48) < iVar3) {
    iVar3 = *(int *)(unaff_EDI + 0x48);
  }
  iVar1 = *(int *)(unaff_EDI + 0x3c) + *(int *)(unaff_EDI + 0x44);
  if ((int)(((int)*(uint *)(iVar2 + 4) < 0) - 1 & *(uint *)(iVar2 + 4)) < iVar1 + iVar3) {
    *(undefined4 *)(unaff_EDI + 0x68) = 3;
    FUN_00594d40();
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x68) = 1;
  *(int *)(iVar2 + 8) = iVar1;
  if (-1 < *(int *)(iVar2 + 4)) {
    FUN_00594750(*(int *)(unaff_EDI + 8) + *(int *)(unaff_EDI + 0x44),iVar3,&LAB_0058a4b0,unaff_EDI)
    ;
  }
  *(int *)(unaff_EDI + 0x44) = *(int *)(unaff_EDI + 0x44) + iVar3;
  FUN_00594d40();
  return;
}

