/* Decompiled from Speed.exe @ 004af030 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004af030(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (((*(int *)(unaff_ESI + 0x1ca0) != 0) && (iVar1 = *(int *)(unaff_ESI + 0x1c90), iVar1 != 0)) &&
     (*(int *)(iVar1 + 8) != 0)) {
    FUN_0058c500(iVar1);
    FUN_0058c760();
  }
  if (((*(int *)(unaff_ESI + 0x1ca4) != 0) && (iVar1 = *(int *)(unaff_ESI + 0x1c94), iVar1 != 0)) &&
     (*(int *)(iVar1 + 8) != 0)) {
    FUN_0058c500(iVar1);
    FUN_0058c760();
  }
  if (((*(int *)(unaff_ESI + 0x1ca8) != 0) && (iVar1 = *(int *)(unaff_ESI + 0x1c98), iVar1 != 0)) &&
     (*(int *)(iVar1 + 8) != 0)) {
    FUN_0058c500(iVar1);
    FUN_0058c760();
  }
  *(undefined4 *)(unaff_ESI + 0x1c9c) = 0;
  *(undefined4 *)(unaff_ESI + 0x1ca0) = 0;
  *(undefined4 *)(unaff_ESI + 0x1ca4) = 0;
  *(undefined4 *)(unaff_ESI + 0x1ca8) = 0;
  *(undefined4 *)(unaff_ESI + 0x1cb0) = 1;
  return;
}

