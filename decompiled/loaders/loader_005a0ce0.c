/* Decompiled from Speed.exe @ 005a0ce0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a0ce0(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (((unaff_EDI < 0x100) && ((&DAT_00733ff8)[unaff_EDI] != 0)) ||
     ((*(int *)(unaff_ESI + 0x88b0) != 0 &&
      ((puVar1 = (uint *)(*(int *)(unaff_ESI + 0x88b0) + 0x58a0), puVar1 != (uint *)0x0 &&
       (unaff_EDI == *puVar1)))))) {
    puVar4 = (undefined1 *)(unaff_EDI + 0x34c + unaff_ESI);
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  iVar2 = FUN_00674898();
  *(int *)(unaff_ESI + 0x1374) = *(int *)(unaff_ESI + 0x1374) - iVar2;
  *(int *)(unaff_ESI + 0x137c) = *(int *)(unaff_ESI + 0x137c) + iVar2;
  if (unaff_EDI == 0) {
    *puVar4 = 1;
  }
  *puVar4 = 3;
  uVar3 = FUN_005a2350(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x88b0) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x138c) = 0;
  *(undefined4 *)(unaff_ESI + 5000) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x1390) = 0;
  *(undefined4 *)(unaff_ESI + 0x1394) = 0;
  *(undefined4 *)(unaff_ESI + 0x1398) = 0;
  *(undefined4 *)(unaff_ESI + 0x139c) = 0;
  *(undefined4 *)(unaff_ESI + 0x13a0) = 0;
  return;
}

