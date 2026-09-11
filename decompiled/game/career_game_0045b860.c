/* Decompiled from Speed.exe @ 0045b860 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0045b860(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6e] = 0;
  puVar2 = unaff_ESI + 4;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00458f10(0,0);
  return;
}

