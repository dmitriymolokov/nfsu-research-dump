/* Decompiled from Speed.exe @ 0044c940 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044c940(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (DAT_006fbf18 == *(short *)(*(int *)(unaff_ESI + 4) + 10)) {
    FUN_00455c50(&DAT_0077a4b0,*(int *)(unaff_ESI + 8) + 0x10);
    if (**(int **)(unaff_ESI + 0x3d8) == 0) {
      FUN_00455c20();
    }
    else {
      FUN_00455d60(&DAT_0077a6d8,*(undefined4 *)(unaff_ESI + 0x3e4),
                   (int)*(char *)(unaff_ESI + 0x4a4));
    }
  }
  iVar1 = *(int *)(unaff_ESI + 0x3e0);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined1 *)(iVar1 + 0x388) = 0xff;
  *(undefined1 *)(unaff_ESI + 0x4bc) = 0;
  return;
}

