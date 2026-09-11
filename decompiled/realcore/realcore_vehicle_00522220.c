/* Decompiled from Speed.exe @ 00522220 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00522220(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (DAT_006f1dd8 == 1) {
    *(undefined4 *)(unaff_ESI + 0x40) = param_1;
    FUN_00521f80();
    iVar2 = DAT_00735684;
    iVar1 = *(int *)(unaff_ESI + 0x200 + DAT_00735684 * 4);
    if (iVar1 < 2) {
      *(undefined4 *)(unaff_ESI + 0x200 + DAT_00735684 * 4) = 0;
      if (0 < iVar1) {
        FUN_0064dd70(*(undefined4 *)(DAT_0072cfd0 + 0x48 + iVar2 * 4));
        FUN_00522280();
        return;
      }
    }
    else {
      *(int *)(unaff_ESI + 0x200 + DAT_00735684 * 4) = iVar1 + -1;
    }
  }
  return;
}

