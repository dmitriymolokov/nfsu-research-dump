/* Decompiled from Speed.exe @ 00522020 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_00522020(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if (DAT_006f1dd8 != 1) {
    return 0;
  }
  *(undefined4 *)(unaff_ESI + 0x40) = param_1;
  FUN_00521f80();
  FUN_00521c80();
  if (*(int *)(unaff_ESI + 0x2c) != 0) {
    iVar2 = *(int *)(unaff_ESI + 0x200 + DAT_00735684 * 4);
    if (iVar2 != 0) {
      *(int *)(unaff_ESI + 0x200 + DAT_00735684 * 4) = iVar2 + 1;
      *(int *)(unaff_ESI + 0x5b0) = *(int *)(unaff_ESI + 0x5b0) + 1;
      return 0;
    }
    *(undefined4 *)(unaff_ESI + 0x200 + DAT_00735684 * 4) = 1;
    iVar2 = FUN_00594d90();
    if (-1 < iVar2) {
      param_4 = param_4 - *(int *)(unaff_ESI + 0x5b0);
      iVar1 = param_4 * 3 + -0x1b;
      DAT_00735694 = 1;
      (&DAT_0072ce50)[iVar1] = DAT_00735684;
      (&DAT_0072ce54)[iVar1] = 0;
      uVar3 = FUN_00565b60(iVar2,0,0,8);
      (&DAT_0072cfd8)[DAT_00735684] = uVar3;
      DAT_0073567c = 1;
      FUN_0058aba0(uVar3,*(int *)(unaff_ESI + 0x5b8) * 0x40 + 0x67c + unaff_ESI,0,iVar2,
                   &LAB_00521ab0,param_4);
      DAT_00735678 = DAT_00735678 + 1;
      *(int *)(unaff_ESI + 0x5b8) = *(int *)(unaff_ESI + 0x5b8) + 1;
      return 0;
    }
  }
  return 0xffffffff;
}

