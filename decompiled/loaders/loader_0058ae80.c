/* Decompiled from Speed.exe @ 0058ae80 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058ae80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  
  FUN_00417600();
  FUN_004323f0(unaff_ESI + 0x480,param_1);
  *(undefined1 *)(unaff_ESI + 0xba0) = 0;
  *(undefined1 *)(unaff_ESI + 0xba1) = 0;
  *(undefined1 *)(unaff_ESI + 0xba2) = 0;
  *(undefined1 *)(unaff_ESI + 0xba3) = 0;
  FUN_00580b00(unaff_ESI + 8,unaff_ESI + 0x480,param_2);
  *(undefined4 *)(unaff_ESI + 0xba4) = 0;
  *(undefined4 *)(unaff_ESI + 0xba8) = 0;
  *(undefined4 *)(unaff_ESI + 0xbac) = 0;
  puVar2 = (undefined4 *)(unaff_ESI + 0xbb0);
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(unaff_ESI + 0xd90) = 0;
  puVar2 = (undefined4 *)(unaff_ESI + 0xd94);
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

