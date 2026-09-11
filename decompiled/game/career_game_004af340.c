/* Decompiled from Speed.exe @ 004af340 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004af340(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1ca4) != 0) {
    if (((*(int *)(unaff_ESI + 0x1ca8) != 0) && (iVar2 = *(int *)(unaff_ESI + 0x1c98), iVar2 != 0))
       && (*(int *)(iVar2 + 8) != 0)) {
      FUN_0058c500(iVar2);
      FUN_0058c760();
    }
    piVar1 = (int *)(unaff_ESI + 0x1570);
    FUN_004323f0(piVar1,unaff_ESI + 0xe50);
    FUN_0057f2b0(1);
    *(undefined4 *)(unaff_ESI + 0x1c98) = *(undefined4 *)(unaff_ESI + 0x1c94);
    *(undefined4 *)(unaff_ESI + 0x1ca4) = 0;
    *(undefined4 *)(unaff_ESI + 0x1ca8) = 1;
    *(undefined4 *)(unaff_ESI + 0x1cb0) = 0;
    if ((*(int *)(unaff_ESI + 0x1c9c) != 0) && (*(int *)(unaff_ESI + 0x10) != *piVar1)) {
      *(undefined4 *)(unaff_ESI + 0x1cb0) = 1;
    }
    if ((*(int *)(unaff_ESI + 0x1ca0) != 0) && (*(int *)(unaff_ESI + 0x730) != *piVar1)) {
      *(undefined4 *)(unaff_ESI + 0x1cb0) = 1;
    }
    *(uint *)(unaff_ESI + 0x1cac) = (uint)(*(int *)(unaff_ESI + 0x1cac) == 0);
  }
  return;
}

